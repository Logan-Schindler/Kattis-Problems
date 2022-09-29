#include <iostream>
using namespace std;

int main(){
    double cost;
    cin >> cost;
    
    int lawn;
    cin >> lawn;
    double area = 0;
    for (int x = 0; x < lawn; x++){
        double l, w;
        cin >> l >> w;
        
        area += (l*w);
    }
    double total = cost * area;
    cout.precision(10);
    cout << total << endl;
}