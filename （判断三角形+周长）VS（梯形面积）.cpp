#include <bits/stdc++.h>
using namespace std;
double a, b, c, x;
int main() {
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > a) {
        cout << "Perimetro:";
        x = a + b + c;
    } else {
        cout << "Area:";
        x = (a + b) * c / 2;
    }
    printf("%.1lf", x);
    return 0;
}
