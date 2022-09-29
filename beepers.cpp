#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <limits>
#include <cstdlib>
using namespace std;

static int minDist = INT_MAX;
static int dist[11][11];

//Sets all the values of dist to zero.
void clearDist(){
    for(int x = 0; x < 11; x++){
        for(int y = 0; y < 11; y++){
            dist[x][y] = 0;
        }
    }
}

//This will set up the vector that will be used for permutations.
void startPerm(vector<int> &pi, int &numBeep){
    for(int x = 0; x < numBeep+1; x++){
        pi.push_back(x);
    }
}

//This will initialize the dist array so that it has the correct distances from all of the beepers to each other.
void setDist(int beepers[], int &numBeep){
    for(int x = 0; x < numBeep+1; x++){
        for(int y = 0; y < numBeep+1; y++){
            int xDiff = abs(beepers[2*x] - beepers[2*y]);
            int yDiff = abs(beepers[(2*x)+1] - beepers[(2*y)+1]);
            dist[x][y] = xDiff + yDiff;
        }
    }
}

    //This will look at every single permutation of size numBeep and will calculate which of 
    //these permuation results in the smallest possible path.
void perm(vector<int> &pi,int count, int &numBeep){
     
     if(count == numBeep){
        int d = dist[pi[numBeep]][pi[0]];
        for(int x =0; x < numBeep; x++){
            d  = d +  dist[pi[x]][pi[x+1]];
        }
        if(d < minDist){
            minDist = d;
        }
     }
     else{
         for(int j = count; j < numBeep; j++){
             swap(pi[count],pi[j]);
             perm(pi,count+1, numBeep);
             swap(pi[count],pi[j]);
         }
        
     }
}


int main(){
    //This Part of the code will tell us how many scenarios we will have to run for Karel.
    int numScen;
    cin >> numScen;
    for(int x = 0; x < numScen; x++){
    
    minDist = INT_MAX;
    clearDist();
     
    //This Part of the code reads in all of the x and y beeper locations into an array.   
    int xMax, yMax, xKarel, yKarel, numBeep;
    cin >> xMax >> yMax >> xKarel >> yKarel >> numBeep;

    //beeprs holds the x and y coordinates for all of the beepers and karel
    int beepers[2*(numBeep +1)];
    beepers[0] = xKarel;
    beepers[1] = yKarel;
    
    for(int g = 1; g < numBeep+1; g ++){
        int x,y;
        cin >> x >> y;
        beepers[2 * g] = x;
        beepers[(2 * g) +1] = y;
    }
    
    //This part of the code will fill in the double array, dist, where the first row will be the distance from karel to all
    //the other beepers, the second row will be the distances from the first beepers to all of the other beepers and so on.
    
    setDist(beepers, numBeep);
    
    
    //initialize array for the permutations 
    vector<int> pi;
    startPerm(pi,numBeep);
    
    perm(pi, 0, numBeep);
    
    cout << minDist << endl;
    }
}