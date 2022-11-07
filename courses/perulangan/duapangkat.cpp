#include <iostream>
#include <cmath>

using namespace std;

int main (){
    long N;
    cin >> N;
    if (N == 1)
        cout << "ya" << endl;
    else
    {
        while (N>1){
            if (N%2 == 1){
                cout << "bukan" << endl;
                N = 1;
            } 
            N = N/2;
            if (N == 1)
                cout << "ya" << endl;
        }
    }  
    
}