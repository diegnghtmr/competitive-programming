#include <algorithm>
#include <iostream>
#include <list>
#include <ostream>
using namespace std;

int main() {
    int j = 0;
    int k = 0;
    while (cin>>j>>k) {
    int inicio = min(j,k);
    int fin = max(j,k);
    int longitud = 0;
    list<int> lista;
    for (int i = inicio; i<=fin; i++) {
        int lon = 1;
        int n = i;
        while (n !=1) {
            if (n%2 != 0) {
                n = 3*n+1;
                lon++;
            } else {
                n = n/2;
                lon++;
            }
        } 
        lista.push_back(lon);
    }

    longitud = *max_element(lista.begin(), lista.end());
    cout<< j <<" " << k << " "<<longitud<<endl;
    }

    return 0;
}
