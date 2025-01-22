#include <iostream>
#include <vector>

/*
    typedef = reserved keyword used to create an additional name
        (alias) for another data type.
        New indentifier for an existing type
        Helps with reability and resource typos
        Use when there is a clear benefit
        Replace with 'using' (work better w/ templates)
*/

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main()
{

    pairlist_t pairlist;
    text_t firstName = "Test";
    number_t number = 10;

    std::cout << firstName << std::endl;
    std::cout << number << std::endl;

    return 0;
}