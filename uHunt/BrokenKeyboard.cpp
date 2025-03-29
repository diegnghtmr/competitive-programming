#include <iostream>
#include <ostream>
#include <deque>

using namespace std;

int main() {
    string palabra;

    while (cin >> palabra) {
        deque<char> caracteres;
        string resultado = "";
        bool inicio = false;
        int antonio = 0;

        for (size_t i = 0; i < palabra.size(); i++) {
            if (palabra[i] == '[') {
                inicio = true;
                antonio = 0;  
            } else if (palabra[i] == ']') {
                inicio = false; 
            } else {
                if (inicio) {
                    if (antonio <= caracteres.size()) {
                        caracteres.insert(caracteres.begin() + antonio, palabra[i]);
                        antonio++;
                    } else {
                        caracteres.push_back(palabra[i]);
                    }
                } else {
                    caracteres.push_back(palabra[i]);
                }
            }
        }

        for (char p : caracteres) {
            resultado += p;
        }

        cout << resultado << endl;

        caracteres.clear();
        resultado.clear();
    }
    
    return 0;
}

