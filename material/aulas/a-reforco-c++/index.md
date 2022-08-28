# A - Reforço C++

O objetivo desse documento é reforçar (ou apresentar) habilidades de programação em C++. A atividade deve ser realizada na sequência apresentada para que você consiga fazer.

## Programa não funciona

Começamos a criar um programa para exibir dados textuais. A proposta seria simular a impressão de dados no monitor ou numa impressora, porém cismei que o nome da função deveria ser o mesmo para os dois tipos de impressão. Porém não estou conseguindo nem compilar o código.

```C++
#include <iostream>
#include <string>

// Código para imprimir pela impressora
void print(std::string texto) {
    std::cout << "|" << texto << "|" << std::endl << std::endl;
}

// Código para imprimir pelo monitor
void print(std::string texto) {
    std::cout << "[" << texto << "]" << std::endl << std::endl;
}

int main() {
    std::cout << "Vou imprimir meu texto na impressora." << std::endl;
    print("As maravilhas do C++"); // Vai para impressora (simulado)

    std::cout << "Pensando bem vou mostrar só no monitor." << std::endl;
    print("As maravilhas do C++"); // Vai para monitor

    return 0;
}
```

Experimente compilar e rodar esse programa, crie um arquivo print.cpp e roda a seguinte instrução:

```
$> g++ -Wall -std=c++11 print.cpp -o print
```

!!! exercise
    Faça os devidos ajustes (mas sem mudar o nome das funções) para que esse programa funcione como esperado.

!!! dica "Será que `namespace` resolve?"
    Colisão de nomes podem aparecer cedo ou tarde, assim o `C++` possui o recurso de `namespace` que pode ser bem útil para evitar esse problema. Procure um pouco na internet para saber mais como isso funciona, ou senão veja esse ([link](https://www.geeksforgeeks.org/namespace-in-c/)).



## Melhorar a formatação da saída

Queremos que as barras verticais simulem melhor uma folha de papel quando chamamos a rotina de `print` na impressora. Por exemplo, queremos que a saída fosse:

```
------------------------------------------
|As maravilhas do C++                    |
------------------------------------------
```

!!! exercise
    Atualize a função `print` da impressora para que seja criada a moldura apresentada e que essa tenha sempre 40 colunas de texto.

!!! question short
    Explique como conseguiu deixar tudo alinhado.


## Separando código em arquivos

Precisamos começar a organizar nosso código. Uma estratégia é separar em arquivos, que é algo que cedo ou tarde iremos fazer, assim vamos praticar com esse exemplo super curto.

!!! exercise
    Vamos criar dois arquivos, um para cada codigo de `print`. Chame os arquivos de `impressora.cpp` e `monitor.cpp`. Coloque cada código e mantenha o arquivo `print.cpp` com a rotina `main()` para executar o programa. Crie estruturas adicionais conforme necessário.

!!! question short
    Qual foi sua estratégia para acertar a formatação?

    !!! answer
        Usar arquivos de include (.h).


## Makefile

As linhas de compilação podem começar a ficar muito grandes, assim o ideal é usar alguma forma prática de compilar todo o seu programa. Embora você possa usar estratégias mais elaboradas como o CMake, queremos aqui que você faça um Makefile tradicional.

!!! exercise
    Crie um Makefile para o seu projeto, comece com estratégias simples e depois vá deixando elas mais elaboradas. Um exemplo de tutorial pode ser encontrado aqui ([link](https://www.gnu.org/software/make/manual/html_node/Introduction.html)), porém se você for na internet vai encontrar muitos outros.


!!! dica "Separe a compilação da linkedição"
    Você não precisa, compilar tudo em uma linha só, separe os arquivos e os passos de compilação.

!!! dica "Automatic Variables"
    As variáveis automáticas do Makefile podem ser bem úteis, principalmente conforme o número de arquivos for crescendo.

## Google for Education C++

Vamos agora resolver uma série de exercícios produzidos pelo Google. Acessa a seguinte página e faça todos so exercícios apresentados.

[https://developers.google.com/edu/c++/getting-started](https://developers.google.com/edu/c++/getting-started)


