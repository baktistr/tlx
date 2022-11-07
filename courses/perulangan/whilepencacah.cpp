#include <iostream>
#include <cmath>

using namespace std;

int main (){
    string line;
    long jumlah = 0;
    while (getline(cin, line)){
        jumlah = jumlah + stoi(line);
    }
    cout << jumlah;
}