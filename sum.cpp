#include<iostream>
#include<string.h>
using namespace std;
int main()
{  
    int j,i,k=0,n1,n2,flg;
    string s,ss;
    cout<<"enter string";
    cin>>s;
    cout<<"enter ss";
    cin>>ss;
    n1=s.length();
    n2=ss.length();
for(i=0;i<=n1-n2;i++)
{
for(j=i;j<i+n2;j++)
{
flg=1;
if (s[j]!=ss[j-i])
{
flg=0;
  break;
}
}
if (flg==1)
    cout<<"YES";
else
cout<<"NO";
}
}
