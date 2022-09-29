#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int lines;
    int potTime;
    cin >> lines >> potTime;
    
    int maxPot = 0;
    for (int x = 0; x < lines; x++){
        int a;
        cin >> a;
        if(a >= maxPot){
            maxPot = a;
        }
    }
    int result = maxPot - ((lines -1) * potTime);
    if (result > 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}