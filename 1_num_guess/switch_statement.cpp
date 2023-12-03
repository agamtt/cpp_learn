#include <iostream>

int main(){

    int user_input;

    std::cout << "Question Me!" << std::endl;
    std::cout << "1. name" << std::endl;
    std::cout << "2. age" << std::endl;    
    std::cout << "3. gender" << std::endl;

    std::cin >> user_input;
    switch(user_input){
        case 1:
            std::cout<<"Psi !"<<std::endl;
            break;
        case 2:
            std::cout<<"99 !"<<std::endl;
            break;
        case 3:
            std::cout<<"Male !"<<std::endl;
            break;
        default:
            std::cout<<"You don't have question."<<std::endl;
            break;
            
    }
    
    return 0;

        
}