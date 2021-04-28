#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,sum;
    cin>>x>>y;
    sum=0;
    if(x>y)
    {
        swap(x,y);

    }
    if(x%2==0)
    {
        for(int i=x+1; i<y; i+=2)
        {
            sum+=i;
        }
        cout<<sum<<endl;
    }
    else
    {
        for(int i=x+2; i<y; i+=2)
        {
            sum+=i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
