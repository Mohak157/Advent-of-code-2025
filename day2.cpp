#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string input = "ffxkVZQtqMnMcLR";
    int changes = 0;

    for (int i = 1; i < input.length(); i++)
    {
        input[i] = toupper(input[i]);
        input[i - 1] = toupper(input[i - 1]);
        if (input[i] != input[i - 1])
        {
            changes++;
        }
    }
    cout << "The repetitions are:" << changes;
}
