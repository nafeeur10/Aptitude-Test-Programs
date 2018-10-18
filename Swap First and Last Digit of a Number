#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter Number: "<<endl;
    int n;
    cin>>n;

    int intArray[10000];
    int i, temp = n;

    int cnt = 0, r;

    while(temp)
    {
        r = temp%10;
        intArray[cnt]=r;
        cnt++;
        temp = temp/10;
    }

    int sum = intArray[0]*pow(10,cnt-1)+intArray[cnt-1]*pow(10, 0);

    int j = 1;

    for(i=cnt-2; i>0; i--)
    {
        sum+=(intArray[i]*pow(10, i));
        j++;
    }

    cout<<sum<<endl;

    return 0;
}
