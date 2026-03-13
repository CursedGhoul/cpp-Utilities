#include <iostream>
#include <string>

int main() {
    std::string user_input;
    std::cout << "Enter a script to run (OoE for odd or even): " << std::endl;
    std::cin >> user_input;
    if (user_input == "OoE") {
            long long user_number;
        std::cout << "Enter a number to check if it's even or odd: " << std::endl;
        std::cin >> user_number;
        if (user_number % 2 == 0) {
            std::cout << "Number is even" << std::endl;
        }
        else {
            std::cout << "Number is odd" << std::endl;
        }
    }
    else {
        std::cout << "idk what the hell you just typed";
    }
    
    return 0;
}
