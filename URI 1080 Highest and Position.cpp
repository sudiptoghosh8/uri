#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, i, max=0, pos=0;
    for(i=1; i<=100; i++)
    {
        scanf("%d",&N);
        if(N>max)
        {
            max=N;
            pos=i;
        }
    }
    printf("%d\n%d\n",max,pos);
    return 0;
}
