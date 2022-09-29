#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	long long cakeLen, cutHeight, cutWidth;
	cin >> cakeLen >> cutHeight >> cutWidth;
	
	
	long long area1 = cutHeight * cutWidth;
	long long area2 = (cakeLen - cutHeight) * cutWidth;
	long long area3 = cutHeight * (cakeLen - cutWidth);
	long long area4 = (cakeLen - cutHeight) * (cakeLen - cutWidth);
	
	int answer = max(max(area1, area2), max(area3, area4));
	cout <<(4 *  answer) << endl;
	return 0;
}