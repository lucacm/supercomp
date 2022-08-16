def tempos(executavel, arquivo_in):
    import subprocess
    import time
    
    lista_tempos = []

    for i in arquivo_in:
        with open(i) as f:
            start = time.perf_counter()
            proc = subprocess.run(executavel, input=f.read(), text=True, capture_output=True)
            end = time.perf_counter()
            lista_tempos.append(end - start)
    return lista_tempos

# exec = './busca-local-1'
# arq_in = ['entradas-busca-local/in-0.txt', 'entradas-busca-local/in-1.txt', 'entradas-busca-local/in-2.txt', 
# 'entradas-busca-local/in-3.txt', 'entradas-busca-local/in-4.txt', 'entradas-busca-local/in-5.txt', 
# 'entradas-busca-local/in-6.txt', 'entradas-busca-local/in-7.txt', 'entradas-busca-local/in-8.txt',
# 'entradas-busca-local/in-9.txt']
# resposta = tempos(exec, arq_in)
# print(resposta)