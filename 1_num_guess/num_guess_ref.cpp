#include <iostream>

int main(){

    int lucky_number = 3;
    std::cout << "Try to guess my Secret Number" <<std::endl;
    int user_input;

    while(1){
        std::cout << "input :";
        std::cin >> user_input;
        if(lucky_number == user_input){
            std::cout << "you correct!~~" <<std::endl;
            break;
        }else{
            std::cout<< "please re-try." << std::endl;
        }
    }

    return 0;
}