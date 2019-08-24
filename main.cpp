#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <stdio.h>

using namespace std;

int main() {
    map<string, int> paises;
    int filas;
    cin >> filas;
    string temp;
    string resto;
    getline(cin,temp,'\n');
    for (int i = 0; i < filas; i++) {
        getline(cin,temp,' ');
        if (paises.empty()) {
            paises.insert(pair<string, int>(temp, 1));
        } else {
            if (paises.find(temp)->second != 0){
                paises[temp] = paises[temp] + 1;
            }
            else {
                paises.insert(pair<string, int>(temp, 1));
            }
        }
    getline(cin, resto);
    }
    for (auto it = paises.cbegin(); it != paises.cend(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
}
