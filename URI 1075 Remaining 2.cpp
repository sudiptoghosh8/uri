#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;
    cin>>n;
    cout<<2<<endl;
    for(i=n+1;i<=10000;i++)
    {
        if(i%n==2)
        {
            cout<<i<<endl;
        }
    }
return 0;
}
