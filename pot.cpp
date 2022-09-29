#include <iostream>
#include <algorithm>
#include <cmath>

int main(void){
    int a;
    std::cin >> a;
    long long sum = 0;
    for(int x = 0; x < a; x++){
        long long temp;
        std::cin >> temp;
        
        long long num = temp / 10;
        long long exp = temp %10;
        
        
        sum += pow(num, exp); 
        
    }
     std::cout << sum << std::endl;   
    return 0;  
}