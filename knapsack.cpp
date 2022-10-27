#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <limits>
using namespace std;



int main()
{
	int cap;
	while(cin >> cap){
	int numObj;
	cin >> numObj;
	int value[numObj];
	int weight[numObj];
	for(int x = 0;x < numObj; x++){
	    int tempV;
	    int tempW;
	    cin >> tempV >> tempW;
	    value[x] = tempV;
	    weight[x] = tempW;
	}
	
	int m[numObj+1][cap+1];
	
	//This sets up the base case
	for(int x = 0; x < numObj+1; x++){
	   m[x][0] = 0;
	}
	for(int y = 0; y < cap+1; y++){
	    m[0][y] = 0;
	}
	
	
	//This will do the recursion
	for(int x = 1; x < numObj+1; x++){
	    for(int y = 1; y < cap+1; y++){
	        if(weight[x-1] > y){
	            m[x][y] = m[x-1][y];
	        }
	        else{
	            m[x][y] = max(m[x-1][y], value[x-1] + m[x-1][y-weight[x-1]]);
	        }
	    }
	}
	
	vector<int> storage;
	int counter = 0;
	int xLook = numObj;
	int yLook = cap ;
	while(true){
		if(xLook == 0 || yLook == 0){
			break;
		}
		if(m[xLook][yLook] == m[xLook-1][yLook]){
			xLook--;
		}
		else{
			storage.push_back(xLook-1);
			yLook = yLook-weight[xLook-1];
			xLook--;
			counter++;
		}
	}
	
	cout << counter << endl;
	for(int x = storage.size()-1; x > -1; x--){
		cout << storage.at(x) << " ";
	}
	cout  << endl;
	/*
	for(int x = 0; x < numObj+1; x++){
	    cout << "||";
	    for(int y = 0; y < cap+1 ; y++){
	       cout << m[x][y];
	    }
	}
	*/
	}
	
}