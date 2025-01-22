#include <iostream>

// cout << (insertion operator)
// cin >> (extration operator)

int main()
{
    std::string name;
    int age;

    std::cout << "What's your age?" << std::endl;
    std::cin >> age;

    std::cout << "What's your full name?" << std::endl;
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << std::endl;
    std::cout << "Your are " << age << " years old";

    return 0;
}