// this keyword learning
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

hero(int health){                               //health parameter having the same name as of the health in class 
    this->health=health;
    cout<<"this "<<this<<endl;

}

};

int main()
{
    // statically 
   hero A(10);

    // dynamically 
    hero *h=new hero(5);
    cout<<"address of A"<<& A<<endl;
    cout<<(*h).gethealth();



    return 0;
}