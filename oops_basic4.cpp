#include<bits/stdc++.h>
using namespace std;
// parent class 
class human{
    public:
    int height;
    int age;
    int weight;

    public:
    int getage(){
        return this->age;
    }
    void setweight(int w){
        this->weight=w;
    }


};
// child class 
class male : public human{
    public:
    string color;
    
    public:
    void sleep(){
        cout<<"sleeping";
    }
};

int main()
{
    male m;
    cout<<"age : "<<m.age<<endl;                     //m is accessing the age although it is the part of human class 
    cout<<"height : "<<m.height<<endl;
    cout<<"color : "<<m.color<<endl;
    cout<<"weight : "<<m.weight<<endl;

    m.sleep();




    return 0;
}