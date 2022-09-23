# 11 - Branch and Bound

Vamos começar nossa atividade instrumentando nossa busca exaustiva. Dado que a promessa do nosso algoritmo *Branch and Bound* é evitar chegar até o fim de uma solução parcial que não tem chance de ser ótima, faz todo sentido então contarmos quantas vezes chegamos até o fim.

Nesta seção implementaremos um *Branch and Bound* simples com a seguinte ideia:

Implemente no seu código o *Branch and Bound*. Ou seja, você deverá, ao chegar em um objeto

1. Checar se a soma da solução atual mais o bound é melhor que o melhor possível.
2. Se não for retorna
3. Se for, prossegue fazendo a escolha para o objeto atual.


!!! example
    Vamos adicionar dois contadores ao nosso programa

    1. `num_leaf` conta quantas vezes uma solução completa foi comparada com a melhor possível
    2. `num_copy` conta quantas vezes foi encontrada uma solução melhor que a atual.
    3. `num_bounds` conta o número de vezes em que evitamos de testar uma solução parcial até o fim.

!!! question short
    Teste seu programa com a entrada `in150.txt`. Anote abaixo os contadores e interprete seu resultado.

## Analisando nosso bound

Conseguimos algum ganho de desempenho? Vamos agora descobrir se ele é bom mesmo.

!!! question short
    Como você mediria a altura em que o bound agiu? Seria melhor cortar mais para cima ou mais para baixo?

O valor `num_bound` não ajuda muito a entender se o bound é bom, já que cortar muito pode significar fazê-lo próximo das folhas (e isto gera ganho pequeno de desempenho).

!!! example
    Faça seu programa contar o número de vezes em que o bound é ativado em cada nível da recursão. Mostre esses valores no terminal.

!!! question short
    Interprete os resultados acima.

