// peak index in a montain array
#include<iostream>
using namespace std;
int main()
{
  int a[100];
    int n,temp,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){

        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                    temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){

        if((a[i+1]-a[i])>1)
        {

            s=a[i]+1;
            break;
        }
    }
    cout<<s<<endl;
    return 0;
}