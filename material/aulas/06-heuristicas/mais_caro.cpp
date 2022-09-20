#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;

struct Bolinha { // This structure is named "objeto"
  int id;
  int v;
  int w;
};

bool myfunction (Bolinha i,Bolinha j) { return (i.v > j.v); }

int main()
{
    int N;
    int W;
    cin >> N;
    cin >> W;
    vector<Bolinha> mochila;

    for (int i = 0; i < N; i++)
    {
        Bolinha bolinha;
        bolinha.id = i;
        cin >> bolinha.w;
        cin >> bolinha.v;
        mochila.push_back(bolinha);
    }

    sort (mochila.begin(), mochila.end(), myfunction);

    for (int i = 0; i < N; i++)
    {
        cout << "id: " << mochila[i].id
        << "/value: " << mochila[i].v
        << "/weight: " << mochila[i].w
        << endl;
    }
    
    int peso = 0;
    int valor = 0;
    vector<int> resposta; //vetor inicializado com 0
    int T = 0; // número de objetos selecionados

    for (int i = 0; i < N; i++)
    {
        if (peso + mochila[i].w < W)
        {
            resposta.push_back(mochila[i].id);
            peso += mochila[i].w;
            valor += mochila[i].v;
            T++;
        }
    }
    cout << "peso: " << peso << "/valor: " << valor << endl;
    for (int i = 0; i < resposta.size(); i++)
    {
        cout << "resposta: " << resposta[i] << endl;
    }
    return 0;
}
