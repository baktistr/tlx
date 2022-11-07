#include <iostream>

using namespace std;

int main(){
    long N, K;
    cin >> N ;
    
    for (int i = 0; i<N; i++){
        for (int j = N-1; j>=0; j--){
            
            if(j<=i)
                {
                    cout << "*";
                }
            else
                cout << " ";
        }
        cout << endl;
    }
}