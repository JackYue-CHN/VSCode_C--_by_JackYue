#include <bits/stdc++.h>
using namespace std;
int a[100000001],n,i;
inline int Prrr(int R[],int l,int h)
{
    int i = l,j = h,p = R[l];
    while(i < j)
    {
        while(i < j && R[j] > p) j--;
        while(i < j && R[i] <= p) i++;
        if(i < j) swap(R[i++],R[j--]);
    }
    if(R[i] > p)
    {
        swap(R[i - 1],R[l]);
        return i - 1;
    }
    swap(R[i],R[l]);
    return i;
}
inline void QuickSort(int R[],int l,int h)
{
    if(l < h)
    {
        int mid = Prrr(R,l,h);
        QuickSort(R,l,mid - 1);
        QuickSort(R,mid + 1,h);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(i = 1;i <= n;i++) cin >> a[i];
    QuickSort(a,1,n);
    for(i = 1;i <= n;i++) cout << a[i] << " ";
    putchar('\n');
    return 0;
}
