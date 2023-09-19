// multiple inheritance 
#include<bits/stdc++.h>
using namespace std;
class animal{
    public:
    int age;
    string color;

    public:
    void bark()
    {
        cout<<"barking "<<endl;

        

    }

};
class human{
    public:
    int height;

    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};
class hybrid: public animal, public human{              //hybrid class made which will inherit both animal and human publically

};
int main()

{
    hybrid h;
    h.bark();                                           //accessing the function of animal class 

    h.speak();                                          //accessing the function of human class 
    return 0;
}