#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "Equilateral Triangle\n";
    }
    else if (a == b || b == c || a == c) {
        cout << "Isosceles Triangle\n";
    }
    else cout << "Scalene Triangle\n";
    return 0;
}