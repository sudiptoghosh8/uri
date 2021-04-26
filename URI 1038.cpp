#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
cout<<fixed;
    if(a==1)
    {

        cout<<setprecision(2)<<"Total: R$ "<<(b*4.00)<<endl;
    }
    else if(a==2)
    {
        cout<<setprecision(2)<<"Total: R$ "<<(b*4.50)<<endl;
    }
    else if(a==3)
    {
        cout<<setprecision(2)<<"Total: R$ "<<(b*5.00)<<endl;
    }
    else if(a==4)
    {
        cout<<setprecision(2)<<"Total: R$ "<<(b*2.00)<<endl;
    }
    else if(a==5)
    {
        cout<<setprecision(2)<<"Total: R$ "<<(b*1.50)<<endl;
    }

    return 0;
}
