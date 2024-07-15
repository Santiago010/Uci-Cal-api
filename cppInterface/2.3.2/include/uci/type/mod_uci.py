import os
import re

# Ruta actual donde están tus archivos .cpp
directory = "."

# Expresión regular para encontrar los includes que empiezan con "uci/"
pattern = re.compile(r'#include\s+"xs/')

# Prefijo a añadir
prefix = '../../../../cppInterface/2.3.2/include/'

# Recorre todos los archivos en el directorio
for root, _, files in os.walk(directory):
    for file in files:
        if file.endswith(".cpp"):
            file_path = os.path.join(root, file)
            with open(file_path, 'r') as f:
                content = f.read()
            
            # Sustituir las rutas de include
            new_content = pattern.sub(f'#include "{prefix}xs/', content)
            
            # Escribir el contenido modificado de vuelta al archivo
            with open(file_path, 'w') as f:
                f.write(new_content)

print("Modificación completada.")
