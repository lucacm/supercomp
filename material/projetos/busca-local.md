# Busca local

<style>
.admonition p:nth-child(2) {
    font-size: 18pt;
}
</style>

Nossa busca local consistirá na seguinte estratégia:

!!! quote
    Trocar a ordem de visita de duas cidades

Ou seja, se for possível inverter a ordem de visitação de duas cidades e isso melhorar a solução então faça a troca. Só pare quando isso não for mais possível.

Para uniformizar nossas soluções vamos adotar a seguinte estratégia de desempates:

## Geração de números aleatórios

* Seu programa deverá retornar o mesmo resultado em todas execuções.
* O algoritmo deverá gerar `10N` soluções e retornar a melhor delas. (N = número de cidades)

## Correção automática

Além da resposta correta, seu algortimo deverá também mostrar informações na saída de erros (`std::cerr`). Estas informações serão usadas para checar corretude de sua implementação.

!!! quote
    A cada sorteio e busca pelo mínimo local (após o todo o processo de trocas para aquele sorteio), seu programa deverá mostra em uma linha da saída de erros a seguinte linha:

    > `local: size c1 c2 ... cN`

    * `size` é o tamanho do tour encontrado (distância percorrida)
    * `c1 .... cN` é o tour que tem tamanho `size`

    Logo deverão haver exatamente `10N` linhas.

Será verificado na correção automática se as soluções locais produzidas obedecem à regra do início da seção. 