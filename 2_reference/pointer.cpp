#include <iostream>

void change2three(int* p){
    *p = 3;
}

int main(){
    int number = 5;
    std::cout << "Original Num :" << number << std::endl;
    change2three(&number);
    std::cout << "Num After Call :" << number << std::endl;
    return 0;
}