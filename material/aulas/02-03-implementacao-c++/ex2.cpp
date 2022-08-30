#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>


using namespace std;

int main(){

    int n;
    cin >> n; 

    double x(0);
    vector<double> vec;
    for (int i = 0; i < n; i++) {
        cin >> x;
        vec.push_back(x);
    }

    double sum(0);

    for (double i = 0; i < n; i++) {
        sum += vec[i];
    }

    double mean = sum/n;
    double sum2(0);

    for (double i = 0; i < n; i++) {
        sum2 += pow((vec[i]-mean), 2);
    }

    double var = sum2/n;
    
    cout << "Média: " << fixed << setprecision(10) << mean << "\n";
    cout << "Variância: " << fixed << setprecision(10) << var << "\n";



    // cout << "Tamanho do vetor: " << vec.size() << "\n";
    // cout << "Primeiro elemento: " << vec.front() << "\n";
    // cout << "Último elemento: " << vec.back() << "\n";
    // cout << "Elemento 3: " << vec[2] << "\n";

}