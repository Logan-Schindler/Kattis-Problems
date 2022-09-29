#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

// https://open.kattis.com/problems/3dprinter

int main()
{
	int statues;
	cin >> statues;
	int days = 1;
	
	while (statues > 1){
	    if(statues % 2 == 0){
	        statues = statues / 2;
	    }
	    else{
	        statues = statues / 2;
	        statues +=1;
	    }
	    days++;
	}
	cout << days << endl;
	return 0;
}
