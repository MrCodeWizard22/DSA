#include <bits/stdc++.h>
using namespace std;

bool pall(int num) {
    string str = to_string(num);
    stack<char> stk;

    for (int i= 0; i <str.length()/2;i++) {
        stk.push(str[i]);
    }
    int start;

    if(str.length()%2==0)
    start =str.length()/2;
    else 
    start=str.length()/2+1;

    for (int i =start;i<str.length() && !stk.empty(); i++) {
        if (stk.top() != str[i]) {
            return false;
        }
        stk.pop();
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    if (pall(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
