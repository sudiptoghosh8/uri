#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        if((n%2==0)&&n>0)
        {
             cout<<"EVEN POSITIVE"<<endl;
        }
        else if((n%2==0)&&n<0)
        {
            cout<<"EVEN NEGATIVE"<<endl;
        }

        else if((n%2!=0)&&n>0)
        {
           cout<<"ODD POSITIVE"<<endl;
        }
        else if((n%2!=0)&&n<0)
        {
            cout<<"ODD NEGATIVE"<<endl;
        }
        else
        {
            cout<<"NULL"<<endl;
        }
    }
return 0;
}
