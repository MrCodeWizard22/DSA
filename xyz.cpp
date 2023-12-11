#include<bits/stdc++.h>
using namespace std; 

const int size = 100;


int fun(int key) {
    return key % size;
}

void insert(vector<int>& table, int key) {
    int index = fun(key);
    table[index] = key;
}

void remove(vector<int>& table, int key) {
    int index = fun(key);
    table[index] = -1; 
}

bool search(vector<int>& table, int key) {
    int index = fun(key);
    return table[index] == key;
}

int main() {
    vector<int> table(size, -1);
    int val;
    insert(table, 5);
    insert(table, 20);
    insert(table, 42);

    

    cout << "Key 5: "<<(search(table, 5) ? "Found" : "Not Found")<<endl;
    cout << "Key 10: "<<(search(table, 10) ? "Found" : "Not Found")<<endl;

    cout<<"enter the key to insert "<<endl;
    cin>>val;

    insert(table,val);
    cout << "Key"<<val<<(search(table, val) ? "Found" : "Not Found")<<endl;
    remove(table, 20);
    

    cout << "Key 20: " <<(search(table, 20) ? "Found" : "Not Found")<<endl;
    cout<<"enter the value to remove "<<endl;
    cin>>val;
    remove(table,val);
    cout << "Key"<<val<<(search(table, val) ? "Found" : "Not Found")<<endl;


    return 0;
}
