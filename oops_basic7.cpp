// function ambiguity 
#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    void fun(){
        cout<<"fun named function is called in class - a"<<endl;            //a class have  fun
    }

};
class b{
    public:
    void fun(){
        cout<<"fun named function is called in class - b"<<endl;          // b class also have the same function
    }
};
class c:public a , public b{


};
int main()
{
    c obj;
    obj.a::fun();                                                       //:: scope resolution operator eliminates inheritance function embiguity

    obj.b::fun();

    return 0;
}