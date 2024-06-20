#include <iostream>
#include <string.h>
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para
#include "../../../include/asb_uci/base/UUIDClock.h"
#include "../../../include/asb_uci/base/TimeBasedUUIDGenerator.h"
#include <boost/asio.hpp>
#include <vector>
#include <iomanip>
#include <cstring>        // Para strncpy
#include <unistd.h>       // Para close
#include <sys/types.h>    // Para socket, ioctl
#include <sys/socket.h>   // Para socket
#include <sys/ioctl.h>    // Para ioctl
#include <net/if.h>       // Para struct ifreq
#include <ifaddrs.h>      // Para getifaddrs, freeifaddrs
#include <arpa/inet.h>    // Para inet_ntop
#include <netdb.h>        // Para getnameinfo
#include "../../../../cppInterface/2.3.2/include/uci/base/UUID.h"


namespace asb_uci
{
    namespace base
    {
         TimeBasedUUIDGenerator::TimeBasedUUIDGenerator (const std::string& clockFile){
            clock(clockFile);
            try
            {
                // TODO:proporciona el contexto necesario para la ejecución de operaciones de entrada/salida
                boost::asio::io_service io_service;
                // TODO:El resolver es responsable de convertir un nombre de host en una o más direcciones IP. Este constructor toma un io_service como argumento, indicando que el resolver utilizará el contexto de E/S proporcionado por io_service
                boost::asio::ip::tcp::resolver resolver(io_service);
                // TODO:Esta línea crea un objeto query de tipo boost::asio::ip::tcp::resolver::query. El constructor del query toma dos argumentos:

                // El nombre del host a resolver, que se obtiene mediante boost::asio::ip::host_name(), una función que devuelve el nombre del host local.
                // Un servicio o puerto, que en este caso es una cadena vacía (""), lo que significa que se resolverán todas las direcciones IP asociadas con el nombre del host.
                boost::asio::ip::tcp::resolver::query query(boost::asio::ip::host_name(),"");

                // TODO:Esta línea realiza la resolución de nombres, convirtiendo el query en una o más direcciones IP. La función resolve devuelve un iterador que apunta a una lista de resultados de la resolución. Cada elemento en esta lista es un objeto tcp::endpoint, que representa un punto final de comunicación TCP (una dirección IP y un puerto).
                boost::asio::ip::tcp::resolver::iterator it = resolver.resolve(query);

                // TODO:Se declara una variable ip_address de tipo boost::asio::ip::address. Esta variable se utilizará para almacenar una de las direcciones IP obtenidas a partir de la resolución.
                boost::asio::ip::address ip_address;

                // TODO:Este es un bucle while que se ejecutará mientras el iterador it no haya alcanzado el final de la lista de direcciones IP resueltas
                while(it != boost::asio::ip::tcp::resolver::iterator()){
                    boost::asio::ip::tcp::endpoint ep = *it++;

                    // TODO:aca comprobamos si la direccion actual es version 4
                    if(ep.address().is_v4()){
                        ip_address = ep.address();
                        break;
                    }
                }

                // TODO:Aquí se convierte la dirección IP genérica ip_address a una dirección IPv4 específica utilizando el método to_v4() de Boost.Asio
                boost::asio::ip::address_v4 ip_v4 = ip_address.to_v4();

                // TODO:es una estructura de datos utilizada para representar una dirección de socket en IPv4
                sockaddr_in addr;
                // TODO: se establece en AF_INET, lo cual indica que estamos usando direcciones IPv4.
                addr.sin_family = AF_INET;
                // TODO:convierte la cadena de texto de la dirección IPv4 en formato de red (formato binario de 32 bits en network byte order) y la asigna a addr.sin_addr.s_addr. Esta función devuelve un valor de tipo in_addr_t, que es un alias de uint32_t.
                addr.sin_addr.s_addr = inet_addr(ip_v4.to_string().c_str());

                char hostname[NI_MAXHOST];

                // TODO:  convertir una dirección de socket (sockaddr) en una cadena de texto representando el nombre del host y el servicio asociado.
                getnameinfo((sockaddr*)&addr, sizeof(addr), hostname, NI_MAXHOST, nullptr, 0, 0)

                ifaddrs* ifAddrStruct = nullptr;
                ifaddrs* ifa = nullptr;
                void* tmpAddrPtr = nullptr;

                getifaddrs(&ifAddrStruct);


            //TODO:     ifAddrStruct es una estructura que contiene información sobre las interfaces de red disponibles.
            // ifa_next es un puntero a la próxima estructura ifaddrs en la lista.
            // El bucle itera sobre todas las interfaces de red (ifa) disponibles.
                for(ifa = ifAddrStruct; ifa != nullptr; ifa = ifa->ifa_next){
                    // TODO:Salta a la siguiente iteración si ifa->ifa_addr es nullptr, es decir, si no hay dirección asociada a la interfaz.
                    if(!ifa->ifa_addr){
                        continue;
                    }
                    // TODO:Verifica si la familia de dirección es IPv4 (AF_INET). Esto asegura que solo se procesen las interfaces IPv4.
                    if(ifa->ifa_addr->sa_family == AF_INET){
                        // TODO:ifa->ifa_addr es un puntero a la estructura sockaddr que contiene la dirección de red.
                        // sockaddr_in es una estructura específica para direcciones IPv4.
                        // sin_addr es el campo que contiene la dirección IP en la estructura sockaddr_in.
                        // tmpAddrPtr ahora apunta a la dirección IP de la interfaz actual.

                        tmpAddrPtr = &((sockaddr_in*)ifa->ifa_addr)->sin_addr;
                        char addressBuffer[INET_ADDRSTRLEN];
                        // TODO:inet_ntop convierte la dirección IPv4 de formato binario a una cadena de caracteres legible.
                        inet_ntop(AF_INET,tmpAddrPtr,addressBuffer,INET_ADDRSTRLEN);
                        //TODO:Compara la dirección IP de la interfaz actual convertida a cadena (addressBuffer) con la dirección IP que estamos interesados en (ip_v4.to_string()). ip_v4 es la dirección IP de la interfaz local obtenida anteriormente.
                        if(std::string(addressBuffer) == ip_v4.to_string()){
                            // TODO:Se abre un socket UDP (SOCK_DGRAM) para obtener información de la dirección hardware (MAC address) de la interfaz.
                            int fd = socket(PF_INET,SOCK_DGRAM,IPPROTO_IP);

                            if(fd == -1){
                                throw std::runtime_error("Unable to open socket");
                            }

                            struct ifreq ifr;
                            std::strncpy(ifr.ifr_name,ifa->ifa_name,IFNAMSIZ - 1);

                            // TODO:Si ioctl devuelve un valor distinto de cero, indica que hubo un error al obtener la dirección MAC.
                            if(ioctl(fd,SIOCGIFHWADDR,&ifr) != 0){
                                // TODO:Cierra el descriptor de archivo del socket después de usar ioctl para obtener la dirección MAC.
                                close(fd);
                                throw std::runtime_error("Unable to get MAC address");
                            }
                            close(fd);

                            unsigned char* mac = reinterpret_cast<unsigned char*>(ifr.ifr_ifru.ifru_data);    
                            //TODO: Crear un vector de 8 bytes con ceros
                            std::vector<uint8_t> macAddress(8,0);
                            //TODO:// Copiar la MAC address a partir de la posición 2
                            std::copy(mac,mac + 6,macAddress.begin() + 2);

                            leastSigBytes = getMacAddressLong(macAddress);

                            root.info("MAC Address as Long: ",leastSigBytes);

                            break;
                            
                        }

                    }
                }

                if(ifAddrStruct != nullptr){
                    freeifaddrs(ifAddrStruct);
                }
                


            }
            catch(const std::exception& e)
            {
                root.error("Failed to initialize Time-Based UUID Generator, unable to obtain the MAC Address: {}",e.what());
            }
            
         }

         uci::base::UUID TimeBasedUUIDGenerator::generateUUID(){

            // TODO:ESTO FUNCIONARA CUANDO SE IMPLEMENTEN DICHOS METODOS
            clock.tick();
            long time = clock.getTime();

             uci::base::UUID uuid(time,leastSigBytes);
             root.debug("Generated Time-Based UUID: {}", uuid.toString());

             return uuid;
         }

         std::string getGeneratorType(){
            return GENERATOR_TYPE;
         }

        uint64_t TimeBasedUUIDGenerator::getMacAddressLong(const std::vector<uint8_t>& macAddress){
            uint64_t macLong = 0;
            for (int i = 0; i < 8; ++i) {
                macLong <<= 8;
                macLong |= macAddress[i];
            }

            //TODO: RECUERDA IMPLEMENTAR EN METODO GETCLOCKSEQ
            uint64_t result = VARIANT | (clock.getClockSeq() << 48) | macLong;
            return result;
        }
        

    } // namespace base
    
} // namespace asb_uci
