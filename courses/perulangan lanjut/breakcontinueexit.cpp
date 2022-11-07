#include <iostream>
#include <cmath>

using namespace std;

int main (){
    long N;
    cin >> N;

    for (int i = 1; i<=N; i++){
        if ((i%10 != 0) && (i!=42))
            cout << i << endl;
        else if (i==42)
            {
                cout << "ERROR" << endl; 
                break;
            }
    }
}