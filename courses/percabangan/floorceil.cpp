#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double N;
    cin >> N;
    if (N == trunc(N))
        cout << int(N) << " " << int(N) << endl;
    else if (N > 0)
        cout << int(trunc(N)) << " " << int(trunc(N)+1) << endl;
    else if (N < 0)
        cout << int(trunc(N)-1) << " " << int(trunc(N)) << endl;
    
}
