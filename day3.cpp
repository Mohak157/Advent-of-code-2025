#include <iostream>
using namespace std;

int main()
{
    int prices[] = {139, 127, 130, 148, 158, 178, 195, 179, 197, 177, 187};
    int size = sizeof(prices) / sizeof(prices[0]);
    int max = prices[0], min = prices[0];
    for (int i = 0; i < size; i++)
    {

        if (prices[i] < min)
        {
            min = prices[i];
        }
    }
    for (int i = 0; i < size; i++)
    {

        if (prices[i] > max)
        {
            max = prices[i];
        }
    }

    cout << "The best time to buy the stock at price  :" << min << endl;
    cout << "The best time to sel lthe stock at price  :" << max << endl;

    cout << "The profit is : " << max - min;
}