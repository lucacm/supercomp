#include <iostream>

int main()
{
    int n = 1000000000;
    for(int i = 0; i < n; i++){
        float pi;
        if(i % 2){
            pi += 1/(2*n + 1);
        } else {
            pi -= 1/(2*n + 1);
        }
    }
    std::cout << pi << "\n";
}