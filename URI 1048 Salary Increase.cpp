#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,b;
    cin>>n;
    if(n>=0&&n<=400.00)
    {
        b=0;
        b=0.15*n;
        cout<<fixed;
        cout<<setprecision(2)<<"Novo salario: "<<(n+b)<<endl;
        cout<<fixed;
        cout<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(n>=400.01&&n<=800.00)
    {
        b=0;
        b=0.12*n;
       cout<<fixed;
        cout<<setprecision(2)<<"Novo salario: "<<(n+b)<<endl;
       cout<<fixed;
        cout<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(n>=800.01&&n<=1200.00)
    {
        b=0;
        b=0.10*n;
       cout<<fixed;
        cout<<setprecision(2)<<"Novo salario: "<<(n+b)<<endl;
       cout<<fixed;
        cout<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    if(n>=1200.01&&n<=2000.00)
    {
        b=0;
        b=0.07*n;
       cout<<fixed;
        cout<<setprecision(2)<<"Novo salario: "<<(n+b)<<endl;
       cout<<fixed;
        cout<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if(n>2000.00)
    {
        b=0;
        b=0.04*n;
        cout<<fixed;
        cout<<setprecision(2)<<"Novo salario: "<<(n+b)<<endl;
        cout<<fixed;
        cout<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }
    return 0;
}
