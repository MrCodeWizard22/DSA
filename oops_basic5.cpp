// multilevel inheritance
#include<bits/stdc++.h>
using namespace std;
// class one
class animal{
    public:
    int age ;
    string color;

    public:
    void speak(){
        cout<<"speaking "<<endl;
    }

};
// second class 
class dog:public animal{

};
class germansephard: public dog{

};
int main()
{
    germansephard g;
    g.speak();
    return 0;
}