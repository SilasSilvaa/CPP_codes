#include <iostream>

/* namespaces provides a solution for preventing name conflicts
    in large projects. Each entity needs a unique name.
    A namespaces allows for indentically named entities
    as long as the namespaces are different.
*/

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    using namespace std;

    int x = 0;

    cout << x << endl;
    cout << first::x << endl;
    cout << second::x << endl;

    return 0;
}