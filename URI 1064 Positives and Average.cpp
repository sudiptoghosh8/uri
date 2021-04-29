#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,t,i,a,b;
    int cnt;
    cnt=0;
    a=0;
    for(i=1; i<=6; i++)
    {
        cin>>n;
        if(n>=0)
        {
            cnt++;
            a+=n;


        }
    }
    cout<<cnt<<" valores positivos"<<endl;
    cout<<fixed;
    cout<<setprecision(1)<<a/cnt<<endl;

    return 0;
}
