#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x = n/2;
    int y = n/2;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n-1;j++)
        {
            if((i == 1 || i == n) && j == n/2)
            {
                cout<<"*";
            }
            else if(j == x)
                cout<<"/";
            else if(j == y)
                cout<<"\\";
            else 
                cout<<" ";
        }
        if(i == n/2)
        {
            int t = x;
            x = y;
            y = t;
        }
        else
        {
            x--;
            y++;
        }
        cout<<endl;
    }
}