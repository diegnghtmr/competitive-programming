#include <iostream>
#include <ostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int n = 0;
    int a,b = 0;
    
    while (cin>>n) {
        vector<pair<int, int>> puntaje(n);
        for (int i=0; i<puntaje.size(); i++) {
            cin>>a>>b;
            puntaje[i] = {a,b};
        }
        bool valor = true;
        for (int i=0; i<puntaje.size()-1; i++) {
            if (puntaje[i].first>puntaje[i+1].first || puntaje[i].second>puntaje[i+1].second) {
                valor = false;
                break;
            }
        }

        if (valor) {
            cout<<"yes"<<endl;
        } else {
            cout<<"no"<<endl;
        }
    }



    return 0;
}
