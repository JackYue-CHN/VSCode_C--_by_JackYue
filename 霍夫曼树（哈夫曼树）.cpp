#include <bits/stdc++.h>
using namespace std;
int s;
typedef struct
{
	double weight;
	int parent,lchild,rchild;
	char value;
}HNodeType;
typedef struct
{
	int bit[101],start;
}HCodeType;
HNodeType HuffNode[10001];
HCodeType HuffCode[10001];
void HuffmanTree(int n)
{
	for(int i = 0;i <= 2 * n - 1;i++)
	{
		HuffNode[i].weight = 0;
		HuffNode[i].weight = -1;
		HuffNode[i].lchild = -1;
		HuffNode[i].rchild = -1;
	}
	for(int i = 0;i < n;i++)
		cin >> HuffNode[i].value >> HuffNode[i].weight;
	double m1,m2;
	int x1,x2;
	for(int i = 0;i < n - 1;i++)
	{
		m1 = m2 = 100001;
		x1 = x2 = -1;
		for(int j = 0;j < n + i;j++)
		{
			if(HuffNode[j].parent == -1 && HuffNode[j].weight < m1)
			{
				m2 = m1;
				x2 = x1;
				m1 = HuffNode[j].weight;
				x1 = j;
			}
			else if(HuffNode[j].parent == -1 && HuffNode[j].weight < m2)
			{
				m2 = HuffNode[j].weight;
				x2 = j;
			}
		}
		HuffNode[x1].parent = HuffNode[x2].parent = n + i;
		HuffNode[n + i].weight = m1 + m2;
		HuffNode[n + i].lchild = x1;
		HuffNode[n + i].rchild = x2;
	}
}
void HuffmanCode(int n)
{
	HCodeType cd;
	int c,p;
	for(int i = 0;i < n;i++)
	{
		c = i;
		p = HuffNode[c].parent;
		cd.start = n - 1;
		while(p != -1)
		{
			if(HuffNode[p].lchild == c) cd.bit[cd.start] = 0;
			else cd.bit[cd.start] = 1;
		}
		cd.start--;
		c = p;
		p = HuffNode[c].parent;
		for(int j = cd.start + 1;j < n;j++)
			HuffCode[i].bit[j] = cd.bit[j];
		HuffCode[i].start = cd.start;
	}
}
int main()
{
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> s;
	HuffmanTree(s);
	HuffmanCode(s);
	for(int i = 0;i < s;i++)
	{
		for(int j = 0;j < s;j++)
			cout << HuffCode[i].bit[j];
		cout << '\n';
	}
	return 0;
}
