#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <limits>
#include <cstdlib>
#include <map>
#include <string>
#include <string_view>
using namespace std;

template<typename Map>
int largestElement(Map& m)
{
    int maxIter = 0;
    int maxKey = INT_MAX;
    for (auto &item : m) {
        if(item.second >= maxIter){
            if(item.second > maxIter){
                maxIter = item.second;
                maxKey = item.first;
            }
            else if(item.second == maxIter && item.first < maxKey){
                maxIter = item.second;
                maxKey = item.first;
            }
        }
    }
    return maxKey;
}

template<typename Map>
void PrintMap(Map& m)
{
    cout << "[ ";
    for (auto &item : m) {
        cout << item.first << ":" << item.second << " ";
    }
    cout << "]\n";
}

int main()
{
    int numIn;
    int numOut;
    cin >> numIn >> numOut;
    int inputs[numIn];
    int outputs[numOut];
    map<int, int> times;
    
    //These two for loops store the inputs and outputs into two seperate arrays.
    //this loops gets the input values.
    for(int x = 0; x < numIn; x++){
        int stor;
        cin >> stor;
        inputs[x] = stor;
    }
    //This loop stores the output values.
    for(int x = 0; x < numOut; x++){
        int stor;
        cin >> stor;
        outputs[x] = stor;
    }
    
    for(int x = 0; x < numIn; x++){
        for(int y = 0; y < numOut; y++){
            if(inputs[x] < outputs[y]){
                
            int diff = outputs[y] - inputs[x];
            if(times.count(diff) != 0){
                times[diff] +=1;
            }
            else{
                times[diff] = 1;
            }
            }
        }
    }
    
    int maxKey= 0;
    int maxIter= 0;
    for(auto x: times){
        if(x.second > maxIter){
            maxKey = x.first;
            maxIter = x.second;
        }
    }
    cout << maxKey << endl;
    
    //PrintMap(times);
    //cout << largestElement(times) << endl;
    
    return 0;
}