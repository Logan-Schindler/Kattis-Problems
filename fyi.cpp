#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// https://open.kattis.com/problems/fyi

int main()
{
	int phoneNum;
	cin >> phoneNum;
	
	phoneNum = phoneNum / 10000;
	if(phoneNum == 555){
	    cout << "1" << endl;
	}
	else{
	    cout << "0" << endl;
	}
	return 0;
}
