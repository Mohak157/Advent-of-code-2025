#include <iostream>
using namespace std;

int main()
{
    int input = 27611, r, s, result;

    while (input >= 10)
    {
        s = 0;
        while (input > 0)
        {

            r = input % 10;
            s = s + r;
            input = input / 10;
        }

        input = s;
    }
    cout << "The sum is :" << s;
}
