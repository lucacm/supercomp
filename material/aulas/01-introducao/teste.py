import os

filenames = []

path_of_the_directory= 'entradas-busca-local'
for filename in os.listdir(path_of_the_directory):
    f = os.path.join(path_of_the_directory,filename)
    if os.path.isfile(f):
        filenames.append(f)

filenames.sort()

print(filenames)