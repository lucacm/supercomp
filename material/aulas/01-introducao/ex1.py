def roda_com_entrada(executavel, arquivo_in):
    import subprocess
    import time
    
    with open(arquivo_in) as f:
        start = time.perf_counter()
        proc = subprocess.run(executavel, input=f.read(), text=True, capture_output=True)
        end = time.perf_counter()

        print('Saída:', proc.stdout)
        print('Stderr:', proc.stderr)
        print('Tempo total(s):', end - start)
        return (proc.stdout, end - start)


exec = './busca-local-1'
arq_in = 'entradas-busca-local/in-0.txt'
resposta = roda_com_entrada(exec, arq_in)
print(resposta)
