#include <iostream> 
#include <string>

int main(){
    // Printing data
    std::cout << "Hello C++" << std::endl;
    
    int age = 21;
    std::cout << "Age : " << age << std::endl;

    std::cerr << "Error message : Something is wrong" << std::endl;
    std::clog << "Log message : Something happend " << std::endl;
   
    // Getting input
    int age1;
    std::string name;
    std::string full_name;
    std::cout << "Type your name and age" << std::endl;

    std::cin >> name;
    std::cin >> age1;
    //std::cin >> name >> age1;

    std::cout << "Hello " << name << " you are " << age1 << std::endl;

    std::cout << "Full name" << std::endl;
    std::getline(std::cin, full_name);

    return 0;
}