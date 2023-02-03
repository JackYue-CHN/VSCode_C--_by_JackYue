#include <bits/stdc++.h>
using namespace std;
double m,h,bmi;
int main()
{
  cin>>m>>h;
  bmi=m/(h*h);
  if(bmi<18.5) printf("Underweight");
  else if(bmi<24) printf("Normal");
  else cout<<bmi<<endl<<"Overweight";
  return 0;
}

