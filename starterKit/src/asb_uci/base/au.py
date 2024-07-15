import os
import re

# Ruta al archivo CMakeLists.txt
cmake_file = './CMakeLists.txt'

# Ruta al directorio ../type
type_directory = '../type'

# Función para obtener la lista de archivos .cpp en el directorio ../type/
def get_type_cpp_files(directory):
    cpp_files = []
    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith('.cpp'):
                cpp_files.append(file)
    return cpp_files

# Función para actualizar el archivo CMakeLists.txt
def update_cmake_file(cmake_file, cpp_files, type_directory):
    with open(cmake_file, 'r') as file:
        content = file.read()

    # Encontrar la sección add_executable
    match = re.search(r'add_executable\((.*)\)', content, re.DOTALL)
    if not match:
        print("No se encontró la sección add_executable en el archivo CMakeLists.txt")
        return

    # Extraer la lista actual de archivos
    current_files = match.group(1)
    current_files_list = re.findall(r'([a-zA-Z0-9_./]+\.cpp)', current_files)

    # Generar la nueva lista de archivos, omitiendo los ya incluidos
    new_files_list = [f'../type/{file}' for file in cpp_files if f'../type/{file}' not in current_files_list]

    # Actualizar el contenido del archivo CMakeLists.txt
    updated_files_list = current_files_list + new_files_list
    updated_files_list_str = ' '.join(updated_files_list)
    updated_content = re.sub(r'add_executable\((.*)\)', f'add_executable({updated_files_list_str})', content, flags=re.DOTALL)

    with open(cmake_file, 'w') as file:
        file.write(updated_content)

    print("Archivo CMakeLists.txt actualizado con éxito")

if __name__ == "__main__":
    cpp_files = get_type_cpp_files(type_directory)
    update_cmake_file(cmake_file, cpp_files, type_directory)
