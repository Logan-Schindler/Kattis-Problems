#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	
	int firstA = str.find_first_of("a");
	str.erase(str.begin(), (str.begin() + firstA));
	
    cout << str << endl;
    return 0;
}