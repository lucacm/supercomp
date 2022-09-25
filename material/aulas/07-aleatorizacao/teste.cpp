#include <random>
#include <iostream>


int main(int argc, char const *argv[])
{
    // std::default_random_engine generator;
    // std::uniform_int_distribution<int> distribution(-2,5);
    // std::cout << distribution(generator) << "\n"; // gera número
    // std::cout << distribution(generator) << "\n"; // gera número


    std::default_random_engine generator(74);
    std::uniform_real_distribution<double> distribution(0.0, 1.0);
    std::cout << distribution(generator) << "\n"; // gera número
    return 0;
}

