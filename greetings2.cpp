#include <iostream>
#include <string> 
using namespace std;

int main(void){
    string s;
    cin >> s;
    int len = 2 * (s.length() -2);
    string dub;
    dub.push_back('h');
    for(int x = 0; x < len; x++){
        dub.push_back('e');
    }
    dub.push_back('y');
    cout << dub << endl;
    return 0;
}