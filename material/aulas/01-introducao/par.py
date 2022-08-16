import matplotlib.pyplot as plt
from ex2 import tempos
from ex3 import tamanhos
from ex4 import grafico1
from ex5 import grafico2


executavel_par1 = './busca-local-1-par'
executavel_par2 = './busca-local-2-par'

arquivos = ['entradas-busca-local/in-0.txt', 'entradas-busca-local/in-1.txt', 'entradas-busca-local/in-2.txt', 
'entradas-busca-local/in-3.txt', 'entradas-busca-local/in-4.txt', 'entradas-busca-local/in-5.txt', 
'entradas-busca-local/in-6.txt', 'entradas-busca-local/in-7.txt', 'entradas-busca-local/in-8.txt',
'entradas-busca-local/in-9.txt']

times_par1 = tempos(executavel_par1, arquivos)
sizes_par1 = tamanhos(arquivos)

times_par2 = tempos(executavel_par2, arquivos)
sizes_par2 = tamanhos(arquivos)

grafico3 = plt.plot(sizes_par1, times_par1, label="busca-local-1-par")
grafico4 = plt.plot(sizes_par2, times_par2, label="busca-local-2-par")

plt.title('comparação de algoritmos')
plt.ylabel("tempo(s)")
plt.xlabel("n")
plt.legend()
plt.show()
