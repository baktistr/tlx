#include <iostream>

using namespace std;

int main(){
    long N;
    long count = 0;
    cin >> N ;
    
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (count == 10)
            {
                count = 0;
            }
            if(j<=i)
                {
                    cout << count;
                    count++;
                }
            else
                cout << " ";
        }
        cout << endl;
    }
}