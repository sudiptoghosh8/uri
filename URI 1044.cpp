#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,tmp;
    while(cin>>a>>b)
    {

if(a < b){
         tmp = a;
         a = b;
         b = tmp;

    if(a%b == 0)
    {
        cout<<"Sao Multiplos"<<endl;
    }
    else
    {
        cout<<"Nao sao Multiplos"<<endl;
    }
}
    }
return 0;
}
