// learning the access of objects inside class 
#include<bits/stdc++.h>
using namespace std;
class hero{
    int health ;            //by default the members inside a class are private 
    int level;

    public:
    int gethealth(){
        return health;
    }

    int getlevel(){
        return level;
    }

    void sethealth(int h){
        health=h;
    }

    void setlevel(int l){
        level=l;
    }



};
int main()
{
    hero paul;
    paul.sethealth(70);         //we can give the values to health variable which is private 

    paul.setlevel(10);

    cout<<paul.gethealth()<<endl;

    cout<<paul.getlevel()<<endl;
    

    return 0;
}