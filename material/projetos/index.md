# Travelling Sales Person (TSP)

Nosso projeto do semestre será o [**Caixeiro Viajante**](https://en.wikipedia.org/wiki/Travelling_salesman_problem). Neste problema recebemos uma lista de cidades representadas por suas coordenadas  $(x_i, y_i)_{i=0}^N$  e temos como objetivo encontrar o o caminho fechado que

1. visite todas as cidades
2. tenha o menor comprimento possível

[Vídeo em Português](https://www.youtube.com/watch?v=_vKMyRj855A)

Note que podemos começar de qualquer cidade, já que nosso caminho é fechado. Ou seja, ele começa e termina no mesmo lugar.

Este é um problema **muito** estudado em otimização e existem vários métodos que proporcionam soluções muito boas em pouquíssimo tempo. Por exemplo, o Gif abaixo usa uma técnica de otimização chamada [Simulated annealing](https://en.wikipedia.org/wiki/Simulated_annealing).

![Exemplo de solução do TSP](https://upload.wikimedia.org/wikipedia/commons/thumb/1/10/Travelling_salesman_problem_solved_with_simulated_annealing.gif/220px-Travelling_salesman_problem_solved_with_simulated_annealing.gif)

É fácil de perceber que este problema ocorre frequentemente em logísitca, seja na forma que apresentamos ou em sua generalização, o [Roteamento de Veículos](https://en.wikipedia.org/wiki/Vehicle_routing_problem).

## Por que escolhemos esse problema?

O *TSP* é um problema de otimização dos mais difíceis ([NP-hard](https://en.wikipedia.org/wiki/NP-hardness)). Não existe algoritmo polinomial que encontre a melhor solução **nem** algoritmo polinomial que cheque se uma solução é a melhor.

Entramos então em duas áreas:

1. encontrar a melhor solução o mais rápido possível
2. usar heurísticas para encontrar uma solução boa o mais rápido possível

Trabalharemos com ambas as ideias durante a disciplina, focando tanto em implementações sequenciais como paralelas.

## Avaliação e formatos de entrada e saída

O projeto é individual e será corrigido usando uma série de scripts de correção automatizada.

**Entrada**
```
N
x1 y1
....
xN yN
```

* `N` é o número de cidades
* `xi yi` são as coordenadas de cada cidade

**Saída**
```
L O
c1 .... cN
```

* `L` é o comprimento do *tour*
* `O` indica se o tour é ótimo (1) ou não (0)
* `c1 ... cN` é a sequência de cidades visitadas para chegar no tour de comprimento `L`

!!! warning "Importante"
    1. Os formatos de entrada e saída deverão ser respeitados de maneira estrita
    2. Algumas entregas pedirão também informações mostradas na saída de erros `std:cerr`
    3. Os scripts de correção serão atualizados durante o semestre.

## Entregas e Datas importantes

O projeto de vocês deverá ser entregue via um repositório Git privado criado especialmente para este fim.

Cada aluno irá adicionar sua solução ao seu repositório, que já irá conter os arquivos de correção automática. A entrega deverá cumprir todos os itens do [Checklist de projeto](checklist.md).

As etapas do projeto serão disponibilizadas depois de discussões em sala de aula e estarão conectadas com uma aula específica.

* Atividade 1 - [heurística da cidade mais próxima](heuristica) [__Entrega__: _Sugerida 9/09_; _Máxima 30/09_]
* Atividade 2 - [busca local - troca de ordem](busca-local): [__Entrega__: _Sugerida 16/09_; _Máxima 30/09_]
* Atividade 3 - [busca exaustiva](busca-exaustiva): [__Entrega__: _Sugerida 23/09_; _Máxima 30/09_]
[//]: # (* Atividade 4 - [implementações sequenciais eficientes](desempenho-sequencial):)
[//]: # (* Atividade 5 - [paralelismo multi-core](multi-core):)
[//]: # (* Atividade 6 - [paralelismo em GPU](gpu):)
[//]: # (* Atividade 7 - [comparações de desempenho](relatorio):)
[//]: # (* Atividade 8 - [medição final de desempenho](desempenho-final):)
[//]: # ()

## Verificação de resultados

2. Você receberá um convite para repositório. Todas as atividades serão disponibilizadas neste repositório e suas soluções devem ser adicionadas nos arquivos correspondentes.
3. O corretor automático depende do pacote `grading-tools`, que deverá ser instalado como abaixo.

```shell
$> python3 -m pip install --user git+https://github.com/lpsoares/grading-tools
```

??? tip "Python 3.8 no Ubuntu"
    Se seu `python3` é uma versão inferior ao 3.8, você pode instalá-lo com os pacotes abaixo:

    ```
    python3.8 python3.8-dev
    ```

    A partir daí poderá seguir normalmente as instruções desta página.

4. Com isso configurado, é só compilar seu programa e rodar `python3 corretor.py algoritmo`.
5. Para baixar os novos exercícios é só rodar `git pull`.
6. Os exercícios serão entregues criando um commit com sua resposta e dando `git push`.

!!! warning
    Fique atento a atualizações no seu repositório de projeto. Atualizações no corretor serão feitas ao longo do semestre, assim como serão disponibilizados novos arquivos de entrada/saída para cada parte a ser implementada.
