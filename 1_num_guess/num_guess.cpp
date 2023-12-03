#include <iostream>

int main(){
    std::cout << "guess my secret num..." << std::endl;

    int correct_num;

    while(1){
        std::cout << "Input : ";
        std::cin >> correct_num;
        if(correct_num==3){
            std::cout << "You Correct!" << std::endl;
            break;
        }else{
            std::cout << "re-try" <<std::endl;
        }

    }
    return 0;
}