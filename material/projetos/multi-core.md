# Paralelismo multi-core

Seu trabalho nesta atividade será criar uma implementação paralela do algoritmo de busca local. 

## Compilação do programa

Seu programa multi-core deverá ser gerado a partir do mesmo código fonte do sequencial. Ou seja, compilar com `-fopenmp` habilita o programa paralelo. Compilar sem obtem os resultados sequenciais. Caso seu programa use as chamadas do OpenMP para códigos auxiliares (alocação de memória, etc), você pode checar se seu programa foi compilado com esta flag seguindo o exemplo abaixo. 

```cpp
#ifdef _OPENMP
    // código específico para multi-core aqui
#else
    // código específico para sequencia aqui
#endif 
```

## Correção (Manual mesmo)

Se seu programa for compilado com `-fopenmp` ele deverá rodar usando todas as CPUs pelo máximo de tempo possível. Verifique as seguintes condições:

1. o tempo de execução cai proporcional conforme o número de processadores na versão paralela. 
2. o consumo médio de CPU durante a execução do programa é elevado, em geral maior que `75%` para cada core.
3. o seu programa deverá funcionar de maneira idêntica ao algoritmo sequencial. **Os resultados não precisam ser exatamente os mesmos, mas o programa deverá gerar soluções com as mesmas propriedades.**


## Documentação

Até o final da disciplina você precisará entregar uma documentação explicando a evolução das suas implementações. Você pode usar os exemplos fornecidos ou criar novos.

Você deverá explicar (texto) qual tipo de recurso adicional você implementou e que tipo de ganho obteve.

Você deverá plotar gráficos para mostrar os ganhos que você obteve, por exemplo, conforme a quantidade de nós (cidades) na busca, quanto tempo mais o algoritmo demora? O quão perto sua solução heurística ou local está próxima dos mínimos globais? No caso de algoritmos paralelos, qual a diferença do número de theads e cores altera o desempenho do seu código.

Você pode entregar como um documento de Jupiter Notebook ou similar, pode usar matplotlib, pode usar excel, ou mesmo um PDF com gráficos. O importante é a análise estar coerente. Vocês serão analisados por uma rúbrica de comunicação.


!!! danger
    Usuários de Mac, o cpp padrão do Mac baseado no clang não suporta OpenMP.
    
    Uma proposta para suportar o openmp é instalar o g++ do homebrew (recomendado):
    
    * brew install gcc
    
    * Crie um link: ln -s /opt/homebrew/bin/g++-12 /opt/homebrew/bin/g++
    
    * Depois adicione no seu ~/.zshrc: export PATH="/opt/homebrew/bin:$PATH"

    Outras proposta para suportar o openmp é instalar a lib de OpenMP (não testei):

    * Existem vários sites na internet explicando como fazer o suporte da lib de OpenMP para clang, aparentemente não há um padrão e parece ser relativamente complicado, assim reforço que é melhor instalar o GCC no seu Mac.

