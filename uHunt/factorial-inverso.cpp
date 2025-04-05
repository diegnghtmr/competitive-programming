#include <iostream>
#include <string>
#include <cstdlib> 

using namespace std;

void read_int128(__int128 &num) {
    string s;
    cin >> s;
    num = 0;
    bool negative = s[0] == '-';
    for (size_t i = negative ? 1 : 0; i < s.size(); ++i) {
        if (isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
        }
    }
    if (negative) num = -num;
}

void print_int128(__int128 num) {
    if (num < 0) {
        cout << "-";
        num = -num;
    }
    if (num > 9) print_int128(num / 10);
    cout << static_cast<char>(num % 10 + '0');
}

int main() {
    __int128 number = 0;
    read_int128(number);

    __int128 encontrando = number;
    __int128 antonio = 0;
    __int128 divisor = 1;

    do {
        encontrando /= divisor;
        antonio++;
        divisor++;
    } while (encontrando != 1);

    print_int128(antonio);
    cout << endl;

    return 0;
}
