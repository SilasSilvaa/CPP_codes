#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age:" << std::endl;
    std::cin >> age;

    if (age >= 18 && age <= 100)
    {
        std::cout << "Welcome";
    }
    else if (age < 0)
    {
        std::cout << "You haven't  been born yet!";
    }
    else if (age > 100)
    {
        std::cout << "You're still alive?";
    }
    else
    {
        std::cout << "You're not old enough to enter";
    }

    return 0;
}