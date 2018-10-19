/* Armstrong number
Example: 153
Length: 3
153 = 1^3 + 5^3 + 3^3
370, 371, 407
*/ 

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, num;
    cin>>n;
    num = n;
    int len = (int)(log10(n)+1);

    int sum = 0;

    while(n)
    {
        int r = n%10;
        int d = (int)(pow(r,len)+0.5);
        sum+=d;
        n/=10;
    }

    if(sum==num)
        cout<<"Armstring Number"<<endl;
    else
        cout<<"Not Armstring Number"<<endl;
    return 0;
}
