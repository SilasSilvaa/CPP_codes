#include <iostream>

int main()
{
    int students = 20;
    students += 1;
    students++;

    students -= 1;
    students--;

    students *= 2;
    students /= 2;

    std::cout << students << std::endl;

    return 0;
}