#include <bits/stdc++.h>
using namespace std;
stack <int> s;
int T, tmp;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    s.push(-1);
    while (T--) {
        cin >> tmp;
        while (tmp >= s.top()) s.pop();
        cout << s.top() << " ";
        s.push(tmp);
    }
    return 0;
}
