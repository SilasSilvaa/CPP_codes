#include <iostream>

/*
    type coversion = conversion a value of one data type to another
                    Implicit = Automatic
                    Explicit = Precede value with new data type (int)
*/

int main()
{
    int x = 3.14;
    double y = (int)3.14;
    char z = 100;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    std::cout << (char)100 << std::endl;

    int correct = 8;
    int questions = 10;

    double score = correct / (double)questions * 100;

    std::cout << score << "%";

    return 0;
}