import os
import re

def update_include_paths(file_path):
    with open(file_path, 'r') as file:
        content = file.read()

    # Replace uci/base with ../base
    content = re.sub(r'#include "uci/base/(.*)"', r'#include "../base/\1"', content)
    # Replace uci/type with the relative path
    content = re.sub(r'#include "uci/type/(.*)"', r'#include "\1"', content)

    with open(file_path, 'w') as file:
        file.write(content)

def process_directory(directory):
    for root, dirs, files in os.walk(directory):
        for file in files:
            if file.endswith('.h'):
                file_path = os.path.join(root, file)
                update_include_paths(file_path)

if __name__ == "__main__":
    directory = '.'  # Replace with the path to your directory
    process_directory(directory)
