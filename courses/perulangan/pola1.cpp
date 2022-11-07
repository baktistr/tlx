#include <iostream>

using namespace std;

int main(){
    long N, K;
    cin >> N >> K;
    
    for (int i = 1; i<=N; i++){
        if (i%K == 0)
            cout << "*";
        else
            cout << i;
        if (i==(N))
            cout << endl;
        else
            cout << " ";

    }
}