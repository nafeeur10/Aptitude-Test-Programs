/*
    1
   22
  333
 4444
55555

*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int i, j, k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }

        for(k=0; k<i; k++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
