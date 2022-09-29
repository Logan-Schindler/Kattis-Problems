#include <iostream>
# include <string>
using namespace std;

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