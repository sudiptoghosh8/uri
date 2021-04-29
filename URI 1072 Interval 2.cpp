#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,cnt,cnt1;
    cin>>t;
    cnt=0;
    cnt1=0;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        if(n>=10&&n<=20)
        {
            cnt++;
        }
        else
        {
            cnt1++;
        }
    }
    cout<<cnt<<" in"<<endl;
    cout<<cnt1<<" out"<<endl;
}
