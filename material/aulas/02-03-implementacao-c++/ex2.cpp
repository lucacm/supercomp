#include <iostream>
#include <vector>
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

    for (double j = 0; j <= vec.size(); j++) {
        sum += vec[j];
    }

    double mean = sum/vec.size();

    cout << "Média: " << mean << "\n";


    // cout << "Tamanho do vetor: " << vec.size() << "\n";
    // cout << "Primeiro elemento: " << vec.front() << "\n";
    // cout << "Último elemento: " << vec.back() << "\n";
    // cout << "Elemento 3: " << vec[2] << "\n";

}