#include <iostream>
# include <string>
using namespace std;

// https://open.kattis.com/problems/aaah

int main(){
    string jon;
    string doc;
    cin >> jon >> doc;
    
    int jonLen = jon.length();
    int docLen = doc.length();
    
    if (jonLen < docLen){
        cout << "no" << endl;
    }
    else{
        cout << "go" << endl;
    }
}
