#include <iostream>
#include <string>
#include "monitor.h"
#include "impressora.h"

using namespace std;

int main() {
    std::cout << "Vou imprimir meu texto na impressora." << std::endl;
    impressora::print("As maravilhas do C++"); // Vai para impressora (simulado)

    std::cout << "Pensando bem vou mostrar só no monitor." << std::endl;
    monitor::print("As maravilhas do C++"); // Vai para monitor

    return 0;
}
