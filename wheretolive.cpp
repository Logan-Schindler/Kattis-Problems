#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <limits>
using namespace std;

// https://open.kattis.com/problems/wheretolive

int main()
{
	int cities;
	double xSum;
	double ySum;
	
	while(cin >> cities){
	if(cities != 0){    
	xSum = 0;
	ySum = 0;
	int xVar[cities];
	int yVar[cities];
	
	for(int i = 0; i < cities; i++){
	    int xStor;
	    int yStor;
	    cin >> xStor >> yStor;
	    xVar[i] = xStor;
	    yVar[i] = yStor;
	}
	

	for(int i = 0; i < cities; i++){
	    xSum += xVar[i]; 
	}
	

	for(int i = 0; i < cities; i++){
	    ySum += yVar[i]; 
	}
	
	xSum = xSum / cities;
	ySum = ySum / cities;
	if(xSum - ((int) xSum) <= .5){
	    xSum = (int) xSum;
	}
	else{
	    xSum = (int)(xSum + 1);
	}
	
	if(ySum - ((int) ySum) <= .5){
	    ySum = (int) ySum;
	}
	else{
	    ySum = (int)(ySum + 1);
	}
	cout << xSum << " " << ySum << endl;
	}
	}
}