#include <iostream>

using namespace std;

int main(){

    long N, M, P;
    long A[101][101], B[101][101], C[101][101];
    long jumlah = 0;

    cin >> N >> M >> P;
    
    for (int i = 0; i<N; i++){
        for (int j = 0; j<M; j++){
            cin >> A[i][j];
        }
    }

    for (int i = 0; i<M; i++){
        for(int j = 0; j<P; j++){
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < P; j++){
            for(int k = 0; k < M; k++){
                jumlah = jumlah + A[i][k] * B[k][j];
            }
            C[i][j] = jumlah;
            jumlah = 0;
        }
    }

    for (int i = 0; i<N; i++){
        for (int j = 0; j<P; j++){
            cout << C[i][j];
            if (j<P-1)
                cout << " ";
            else
                cout << endl;
        }
    }

}
