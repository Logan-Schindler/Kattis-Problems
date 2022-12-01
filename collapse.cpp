#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <limits>
using namespace std;

int islands;
int needs[100001];
bool isLive[100001];
map<int, int> resIn[100001];
map<int, int> resOut[100001];

template<typename Map>
void PrintMap(Map& m)
{
    cout << "[ ";
    for (auto &item : m) {
        cout << item.first << ":" << item.second << " ";
    }
    cout << "]\n";
    cout << islands;
}

void dfs(int vtx){
    int sum = 0;
            for (auto &item : resIn[vtx]) {
                if(isLive[item.first]){
                    sum += item.second;
                }
            }
        if(sum < needs[vtx]){
            isLive[vtx] = false;
            for (auto &item : resOut[vtx]) {
                if(isLive[item.first]){
                    dfs(item.first);
                }
            }
        }
}

int main()
{
    
    cin >> islands;
    
    for(int x =1; x < islands+1; x++){
        isLive[x] = true;
    }
    
   
    for(int x = 0; x < islands; x++){
        cin >> needs[x+1];
        int connects;
        cin >> connects;
        for(int y = 0; y < connects; y++){
            int is1;
            int res1;
            cin >> is1 >> res1;
           resIn[x+1][is1] = res1;
        }
    }
    
    for(int x = 1; x < islands+1; x++){
        for (auto &item : resIn[x]) {
                resOut[item.first][x] = item.second;
            }
    }
    
    isLive[1] = false;
    
    for(int x = 1; x < islands+1; x++){
       if(isLive[x]){
        dfs(x);
       }
    }
    int survivor = 0;
    for(int x = 1; x < islands+1; x++){
        if(isLive[x]){
            survivor++;
        }
    }
    cout << survivor;
    cout << endl;
    //PrintMap(resOut[2]);
    
    
    
    
    
}