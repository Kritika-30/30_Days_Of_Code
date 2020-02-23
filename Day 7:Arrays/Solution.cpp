#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,i;

    cin>>N;

    int a[N]={0};
    for (i=0;i<N;i++)
    {
        cin>>a[i];
    }
    reverse(a,a+N);

    for (i=0;i<N;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
    
}
