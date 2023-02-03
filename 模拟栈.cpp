#include <bits/stdc++.h>
using namespace std;
stack <int> s;
int T, tmp;
string op;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        cin >> op;
        if (op == "push") {
            cin >> tmp;
            s.push(tmp);
        } else if (op == "query") cout << s.top() << '\n';
        else if (op == "pop") s.pop();
        else cout << (s.empty() ? "YES" : "NO") << '\n';
    }
    return 0;
}
