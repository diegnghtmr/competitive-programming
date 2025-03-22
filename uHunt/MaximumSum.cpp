#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

int main() {

    int cantidad = 0;
    cin>>cantidad;
    vector<int> casos;
    int temp = 0;

    for (int i = 0; i<cantidad; i++) {
        cin>>temp;
        casos.push_back(temp);
    }

    for (int i = 0; i < casos.size(); i++) {
        int valor = casos[i];
        int filas = 0;
        int guerrerosRestantes = valor;
        int siguienteFila = 1;
        
        while (guerrerosRestantes >= siguienteFila) {
            guerrerosRestantes -= siguienteFila;  
            filas++;  
            siguienteFila++;          
        }

        cout << filas << endl;
    }


    return 0;
}
