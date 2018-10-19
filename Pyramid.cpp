/*
        1
       2 2
      3 3 3 
     4 4 4 4
    5 5 5 5 5 
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
        for(j=0; j<(n-i); j++)
        {
            cout<<" ";
        }

        for(k=0; k<i; k++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
