// learning about list,stack,queue,priority_queue
#include <iostream>
#include <list>
#include <stack>
#include <queue>
#include <set>
using namespace std;
int main()
{
    // list<int> l;
    // l.push_back(1);
    // l.push_back(2);
    // l.push_front(3);

    // for(int i:l){
    //     cout<<" "<<i;
    // }
    // cout<<endl;
    // l.erase(l.begin());
    // cout<<"after erase";
    // for(int i:l)
    // cout<<" "<<i;
    // cout<<endl;

    // // stack
    // // stack basically follows the last in first out concept

    // stack<string>s;
    // s.push("hello");
    // s.push("world");
    // s.push("new");
    // cout<<s.top()<<endl;                    //printing topmost element of stack
    // s.pop();                                //  poping out the top element
    // cout<<s.top()<<endl;

    // cout<<s.empty()<<endl;                  //checking wether the stack is empty or not will return either 0 or 1

    // // Queue
    // // queue basically follows the first in first out concept
    // queue <string> q;
    // q.push("learn");
    // q.push("to");
    // q.push("code");
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;

    // // priority_queue
    // // always give the maximum or minimum element if we want top element i.e. any value in and largest/smallest(for max/min)out as the topmost

    // priority_queue <int> max;               //   max type priority queue
    // priority_queue <int, vector<int>, greater<int>> min;                    //that's how min type priority_queue is made
    // max.push(2);
    // max.push(4);
    // max.push(1);
    // max.push(0);
    // max.push(3);
    // int n=max.size();
    // for (int i=0;i<n;i++){
    //     cout<<max.top()<<"  ";
    //     max.pop();
    // }
    // cout<<endl;

    // min.push(2);
    // min.push(4);
    // min.push(1);
    // min.push(0);
    // min.push(3);
    // int m=min.size();
    // for (int i=0;i<n;i++){
    //     cout<<min.top()<<"  ";
    //     min.pop();
    // }
    // cout<<endl;
    // cout<<min.empty()<<endl;

// Set
//  stores the data in sequence repeted values are considered only one time 

    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    s.insert(9);
    s.insert(9);
    s.insert(9);
    for (int i : s)
        cout << " " << i;

    cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
     cout<<"after erase"<<endl;

    return 0;
}