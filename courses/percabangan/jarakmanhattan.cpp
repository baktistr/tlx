#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << (abs(x1-x2) + abs(y1-y2));
}