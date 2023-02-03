#include <bits/stdc++.h>
using namespace std;
int a[100010], n;
void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++ ) scanf("%d", &a[i]);
    quick_sort(a, 1, n);
    for (int i = 1; i <= n; i ++ ) printf("%d ", a[i]);
    return 0;
}

//作者：Jack676
//链接：https://www.acwing.com/activity/content/code/content/5381760/
//来源：AcWing
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。