#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int number;
	cin >> number;
	
	vector <int> v;
	for(int x = 0; x < number; x++){
	    int stor; 
	    cin >> stor;
	    v.push_back(stor);
	}
	
    sort(v.begin(), v.end());
    
    for(int x = v.size()-3; x >= 0; x -= 3){
        v.erase(v.begin() + x);
    }
    
    int sum = 0;
    for(int x = 0; x < v.size(); x++){
         sum += v.at(x);
    }
    
    cout << sum << endl;
    return 0;
    
}