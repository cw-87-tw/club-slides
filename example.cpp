#include <bits/stdc++.h>
using namespace std;

int a, b, c, res;

int main() {
    cin >> a >> b >> c;
    res = (b * b) - 4 * a * c;
    if (res > 0) {
        cout << "Two different roots x1=" << (-b + sqrt(res)) / 2 / a << " , x2=" << (-b - sqrt(res)) / 2 / a << '\n';
    }
    else if (res == 0) {
        cout << "Two same roots x=" << -b / 2 / a << '\n';
    }
    else cout << "No real root\n";
    return 0;
}