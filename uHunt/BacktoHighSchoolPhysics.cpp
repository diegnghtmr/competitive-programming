#include <iostream>
#include <ostream>
using namespace std;

int v = 0;
int t = 0;

int main() {
    while (cin>>v>>t) {
        double result = 0;
        if ((-100<=v && v<=100) && (0<=t && t<=200) ) {
            result = 2*t*v;
        }
        cout<<result<<endl;
    }
       return 0;
}


