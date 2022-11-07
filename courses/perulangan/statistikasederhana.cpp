#include <iostream>
#include <cmath>

using namespace std;

int main (){
    long N;
    long bilangan;
    long min;
    long max;

    cin >> N;

    for (int i = 0; i<N; i++){
        cin >> bilangan;
        if (i==0){
            min = bilangan;
            max = bilangan;
        }
        else{
            if (bilangan < min)
            min = bilangan;
        if (bilangan > max)
            max = bilangan;
        }
    }
    cout << max << " " << min << endl;
}