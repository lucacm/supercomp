#include <iostream>
#include <cmath>
#include <iomanip>

// using namespace std;

int main(){
    int n;
    std::cin >> n;

    double s(0);

    for (int i = 0; i <= n; ++i) {
        s += 1/pow(2, i); 
    }
    std::cout << "valor de s: " << std::fixed << std::setprecision(15) << s << "\n"; 
}