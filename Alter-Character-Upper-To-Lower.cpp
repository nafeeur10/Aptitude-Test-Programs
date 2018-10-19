/*
   hELLO wORLD
   Hello World
*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    string Str;
    getline(cin,Str);

    for(int i=0; i<Str.length(); i++)
    {
        if(Str[i]>='a' && Str[i]<='z')
        {
            Str[i]=toupper(Str[i]);
            cout<<Str[i];
        }
        else if(Str[i]>='A' && Str[i]<='Z')
        {
            Str[i]=tolower(Str[i]);
            cout<<Str[i];
        }
        else
        {
            cout<<Str[i];
        }
    }

    //cout<<Str<<endl;
    return 0;
}
