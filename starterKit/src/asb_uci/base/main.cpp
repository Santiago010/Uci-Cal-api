#include <iostream>
#include <string.h>
#include <vector>

//LIBRERIAS
#include "example.h"


using namespace std;

int main(int argc, char* argv[]){
    string logName;

    vector<string> argList;

    for (int i = 0; i < argc; i++)
    {
        argList.push_back(string(argv[i]));
    }

     // Porque el lector y el escritor están en el mismo programa,
    // es necesario configurar el logger para evitar que se detengan
    // en los archivos de log del otro.
    if (find(argList.begin(), argList.end(), "-reader") != argList.end()) {
        logName += "Reader";
    }

    if (find(argList.begin(), argList.end(), "-writer") != argList.end()) {
        logName += "Writer";
    }

    if (logName.empty()) {
        logName += "ReaderWriter";
    }

    logName += ".log";
    cout << "Log name set to: " << logName << endl;
    


    Example::runExample(argc, argv);




    return 0;
}