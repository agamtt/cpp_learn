#include <iostream>

int& function(){
    int a = 2;
    return a;
}

int main(){
    int b = function();
    b = 3;

    std::cout << "b : " << b << std::endl;
    
    return 0;
}