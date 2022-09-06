#include <iostream>
#include <string>
#include "monitor.h"

namespace monitor
{
// Código para imprimir pelo monitor
void print(std::string texto) {
        for (int i = 0; i < 40; i++)
    {
        std::cout << "-";
    }

    std::cout << "\n";
    std::cout << "[" << texto;

    for (int i = 1 + texto.length(); i < 39; i++)
    {
        std::cout << " ";
    }
    
    std::cout << "]" << std::endl; //<< std::endl;

    for (int i = 0; i < 40; i++)
    {
        std::cout << "-";
    }

    std::cout << "\n";
}
} // namespace monitor