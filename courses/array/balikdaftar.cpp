#include <iostream>
#include <cmath>

using namespace std;

long n = 0;
long daftar[101];

int main (){
    string line;
    while (getline(cin, line)){
        daftar[n] = stoi(line);
        n++;
    }
    for (int j = n-1; j>=0; j-- ){
        cout << daftar[j] << endl;
    }
}