#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    long N;
    long bilangan;
    long faktor;

    cin >> N;
    for (int i = 0; i<N; i++){
        faktor = 0;
        cin >> bilangan;
        for (int j = 2; j*j<=(bilangan); j++){
            if (bilangan%j*j == 0){
                faktor ++;
                if (faktor >= 2){
                    break;
                }
            }
        }
        if ((faktor < 2) || (bilangan == 1))
        {
            cout << "YA" << endl;
        }
        else
            cout << "BUKAN" << endl;
        
    }
    
}