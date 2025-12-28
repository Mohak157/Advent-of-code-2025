#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *op[] = {"13", "-6", "-10", "19", "14", "6", "+", "-5", "C", "20", "C"};
    int sol[100];
    int top = -1, sum = 0;

    for (int i = 0; i < sizeof(op) / sizeof(op[0]); i++)
    {
        if (strcmp(op[i], "C") == 0)

        {

            top--;
        }
        else if (strcmp(op[i], "D") == 0)
        {
            top++;
            sol[top] = 2 * sol[top - 1];
        }
        else if (strcmp(op[i], "+") == 0)
        {
            top++;
            sol[top] = sol[top - 1] + sol[top - 2];
        }
        else
        {
            top++;
            sol[top] = atoi(op[i]);
        }
    }

    for (int i = 0; i <= top; i++)
    {
        sum = sol[i] + sum;
    }
    printf("the sum is :%d", sum);
}