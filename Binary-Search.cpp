#include <iostream>

using namespace std;

int main()
{
    int Arr[101];
    int i;

    int n;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>Arr[i];
    }

    int left=0;
    int right=n;

    int mid=(left+right)/2;

    int ourNumber;
    cin>>ourNumber;

    bool flag = false;

    while(left<=right)
    {
        if(Arr[mid]==ourNumber)
        {
            flag = true;
            cout<<"Got it"<<endl;
            break;
        }
        else if(Arr[mid]>ourNumber)
        {
            right=mid-1;
            mid=(left+right)/2;
        }
        else
        {
            left=mid+1;
            mid=(left+right)/2;
        }
    }

    if(!flag)
        cout<<"Sorry! this number is not available"<<endl;
    return 0;
}
