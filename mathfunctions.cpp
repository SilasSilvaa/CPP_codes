#include <iostream>
#include <cmath>

double hypotenuse()
{
    std::cout << "Enter size a" << std::endl;
    double a;
    std::cin >> a;

    std::cout << "Enter size b" << std::endl;
    double b;
    std::cin >> b;

    return sqrt((pow(a, 2) + pow(b, 2)));
}

int main()
{
    double x = 3.14;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(x, y);
    // z = sqrt(4);
    // z = abs(-3);
    // z = round(x);
    // z = ceil(x);
    // z = floor(x);

    z = hypotenuse();

    std::cout << "Side c = " << z;

    return 0;
}