#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,a,b,c,m;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        m=0.0;
        n=0.0;
        cin>>a>>b>>c;

        m=(a*2.0)+(b*3.0)+(c*5.0);
        cout<<fixed;
    cout<<setprecision(1)<<(m/10.0)<<endl;
    }

    return 0;
}

