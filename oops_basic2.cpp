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

hero(){
    cout<<"a constructor made"<<endl;
}

};

int main()
{
    // statically 
    hero A;

    // dynamically 
    hero *h=new hero;

    return 0;
}