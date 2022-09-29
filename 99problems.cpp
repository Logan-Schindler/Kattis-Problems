#include <iostream>
using namespace std;

// https://open.kattis.com/problems/99problems

int main(){
long long price;
cin >> price;

long long stor = price % 100;
long long newPrice;
if(price < 99){
    newPrice = 99;
}
else{
if(stor < 49){
    newPrice = price - stor - 1;
}
else{
    newPrice = price + (100 - stor) -1;
}
}
cout << newPrice << endl;
return 0;
}
