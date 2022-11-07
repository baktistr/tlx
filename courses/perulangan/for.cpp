#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long N, bebek;
    long result = 0;
    cin >> N;
    for (int i = 0; i<N; i++){
        cin >> bebek;
        result = result + bebek;
    }
    cout << result << endl;
}