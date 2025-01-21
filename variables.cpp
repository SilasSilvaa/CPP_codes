#include <iostream>

int main()
{
    // integers
    int x = 5;
    int y = 5;
    int sum = x + y;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum << std::endl;

    // doubles
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << std::endl;
    std::cout << gpa << std::endl;
    std::cout << temperature << std::endl;

    // single character
    char grade = 'A';
    char initial = 'B';

    std::cout << grade << std::endl;
    std::cout << initial << std::endl;

    // boolean
    bool student = true;
    bool power = false;

    std::cout << student << std::endl;
    std::cout << power << std::endl;

    // string
    std::string name = "Test";
    std::string day = "Friday";

    std::cout << name << std::endl;
    std::cout << day << std::endl;

    // constant
    const double PI = 3.14159; // not be change
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm" << std::endl;

    return 0;
}