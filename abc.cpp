#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// https://open.kattis.com/problems/abc

int main(){
    int a, b ,c;
    cin >> a >> b >> c;
    
    vector <int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    
    string order;
    cin >> order;
    if (order.compare("ABC")==0){
        cout << v.at(0) << " " << v.at(1) << " " << v.at(2) << endl;
    }
    if(order.compare("ACB")==0){
        cout << v.at(0) << " " << v.at(2) << " " << v.at(1) << endl;
    }
    if (order.compare("BAC")==0){
        cout << v.at(1) << " " << v.at(0) << " " << v.at(2) << endl;
    }
    if (order.compare("BCA")==0){
        cout << v.at(1) << " " << v.at(2) << " " << v.at(0) << endl;
    }
    if (order.compare("CAB")==0){
        cout << v.at(2) << " " << v.at(0) << " " << v.at(1) << endl;
    }
    if (order.compare("CBA")==0){
        cout << v.at(2) << " " << v.at(1) << " " << v.at(0) << endl;
    }
    return 0;
}
