def tamanhos(arquivo_in):    
    lista_sizes = []

    for i in arquivo_in:
        with open(i) as f:
            first_line = f.readline()
            lista_sizes.append(int(first_line))
    return lista_sizes

# resposta = tamanhos('entradas-busca-local')
# print(resposta)