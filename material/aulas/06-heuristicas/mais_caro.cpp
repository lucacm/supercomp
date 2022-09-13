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
    int n;
    int W;
    cin >> n;
    cin >> W;
    vector<Bolinha> mochila;

    for (int i = 0; i < n; i++)
    {
        Bolinha bolinha;
        bolinha.id = i;
        cin >> bolinha.w;
        cin >> bolinha.v;
        mochila.push_back(bolinha);
    }

    sort (mochila.begin(), mochila.end(), myfunction);

    for (int i = 0; i < mochila.size(); i++)
    {
        cout << mochila[i].v << endl;
    }
    
    return 0;
}
