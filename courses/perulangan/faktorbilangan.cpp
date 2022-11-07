#include <iostream>
#include <cmath>

using namespace std;

int main (){
    long N;
    cin >> N;
    for (int i = N; i >= 1; i-- ){
        if (N%i == 0)
            cout << i << endl;
    }
}