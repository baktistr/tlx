#include <iostream>
#include <cmath>

using namespace std;

long N;
long bilangan;
long frekuensi[1001];
long maks = 0;

int main (){
    cin >> N;
    for (int i = 0; i<N; i++){
        cin >> bilangan;
        frekuensi[bilangan]++;
    }
    for (int j = 1; j<1001; j++){
        if (frekuensi[j]>=frekuensi[maks])
            maks = j;
    }
    cout << maks;
}