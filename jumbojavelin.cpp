#include <iostream>
using namespace std;
int main(void){
    int num;
    cin >> num;
    long long len = 1;
    for(int x = 0; x< num; x++){
        long long temp;
        cin >> temp;
        
        len += (temp -1);
    }
    cout << len << endl;
    return 0;
}