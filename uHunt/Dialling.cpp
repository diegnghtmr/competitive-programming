#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string toDigits(const string &s) {
    string r;
    for (char c : s) {
        if (c=='a'||c=='b'||c=='c') r.push_back('2');
        else if (c=='d'||c=='e'||c=='f') r.push_back('3');
        else if (c=='g'||c=='h'||c=='i') r.push_back('4');
        else if (c=='j'||c=='k'||c=='l') r.push_back('5');
        else if (c=='m'||c=='n'||c=='o') r.push_back('6');
        else if (c=='p'||c=='q'||c=='r'||c=='s') r.push_back('7');
        else if (c=='t'||c=='u'||c=='v') r.push_back('8');
        else r.push_back('9');
    }
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    unordered_map<string,vector<string>> dict;
    dict.reserve(n);
    dict.max_load_factor(0.7f);
    for(int i=0;i<n;i++){
        string w;
        cin>>w;
        dict[toDigits(w)].push_back(w);
    }
    while(m--){
        string p;
        cin>>p;
        if(dict.find(p)==dict.end()){
            cout<<0<<"\n";
        } else {
            auto &v=dict[p];
            cout<<v.size();
            for(auto &x:v) cout<<" "<<x;
            cout<<"\n";
        }
    }
    return 0;
}

