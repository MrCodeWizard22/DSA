// recursion is when a function calls itself directly or indirectly or when the solution of a big problem depends on small segments
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0)                    //base case
    return 1;                       //it is mandatory to write return statement in base case


    else 
    return n*factorial(n-1);             //no need of else statement here
}
int main()
{
    int n;
    cin>>n;
    int fact=factorial(n);
    cout<<fact<<endl;
    return 0;
}