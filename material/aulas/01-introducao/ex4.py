from cProfile import label
import matplotlib.pyplot as plt
from ex2 import tempos
from ex3 import tamanhos

executavel = './busca-local-1'
arquivos = ['entradas-busca-local/in-0.txt', 'entradas-busca-local/in-1.txt', 'entradas-busca-local/in-2.txt', 
'entradas-busca-local/in-3.txt', 'entradas-busca-local/in-4.txt', 'entradas-busca-local/in-5.txt', 
'entradas-busca-local/in-6.txt', 'entradas-busca-local/in-7.txt', 'entradas-busca-local/in-8.txt',
'entradas-busca-local/in-9.txt']

times = tempos(executavel, arquivos)
sizes = tamanhos(arquivos)
# print("tempos de processamento do busca-local-1 {0}".format(times))
# print("tamanhos de entrada do busca-local-1 {0}".format(sizes))

grafico1 = plt.plot(sizes, times, label="busca-local-1")
#plt.show()