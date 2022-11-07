#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    long N;
    long bilangan;
    string prime = "YES";

    cin >> N;
    for (int i = 0; i<N; i++){
        prime = "YES";
        cin >> bilangan;
        for (int j = 2; j*j<=(bilangan); j++){
            if (bilangan%j*j == 0){
                prime  = "NO";
                break;
            }
        }
        if ((prime == "YES") && (bilangan != 1))
        {
            cout << "YA" << endl;
        }
        else
            cout << "BUKAN" << endl;
        
    }
    
}