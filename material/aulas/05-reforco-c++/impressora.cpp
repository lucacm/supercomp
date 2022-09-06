#include <iostream>
#include <string>
#include "impressora.h"
namespace impressora
{
// Código para imprimir pela impressora
void print(std::string texto) {
    for (int i = 0; i < 40; i++)
    {
        std::cout << "-";
    }

    std::cout << "\n";
    std::cout << "|" << texto;

    for (int i = 1 + texto.length(); i < 39; i++)
    {
        std::cout << " ";
    }
    
    std::cout << "|" << std::endl; //<< std::endl;

    for (int i = 0; i < 40; i++)
    {
        std::cout << "-";
    }

    std::cout << "\n" << std::endl;
}
} // impressora