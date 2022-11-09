#include <iostream>

using namespace std;

int main(){

    long N,M;
    long matriks[101][101];
    long new_matriks[101][101];
    long temp;

    cin >> N >> M;
    for (int i = 0; i<N; i++){
        for (int j = 0; j<M; j++){
            cin >> matriks[i][j];
            // cout << i << j << " "<< matriks[i][j] << endl;
        }
    }
    cout << endl;
    for (int j = 0; j<M; j++){
        for (int i = 0; i<N; i++){
            new_matriks[j][i] = matriks[N-1-i][j];
            // cout << new_matriks[j][i] << endl;
            cout << new_matriks[j][i];
            if (i<N-1)
                cout << " ";
            else
                cout << endl;
        }
    }



}