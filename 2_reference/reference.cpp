#include <iostream>

void change2three(int& p){
    p=3;
}


int main(){
    int number = 5;
    std::cout << number << std::endl;
    change2three(number);
    std::cout << number << std::endl;

}