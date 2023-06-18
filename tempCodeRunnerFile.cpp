 list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);

    for(int i:l){
        cout<<" "<<i;
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase";
    for(int i:l)
    cout<<" "<<i;
    cout<<endl;