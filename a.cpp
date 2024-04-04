#include<bits/stdc++.h>
using namespace std;

string s;

int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        int x = s[i] - 'a';
        x += 3;
        if (x > 25) x -= 26;
        cout << (char) (x + 'a');
    }
    cout << '\n'; // 最後記得要換行
}