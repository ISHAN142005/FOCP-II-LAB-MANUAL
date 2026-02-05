/*
Q32. A stock market app tracks first and second highest stock values.
 Implement a solution to find the largest
and second largest number in an array of size 5.
*/

#include <iostream>
using namespace std;
int main()
{
    int price[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number  " << i + 1 << " here:";
        cin >> price[i];
    }
    int max1, max2;
    if (price[0] > price[1])
    {
        max1 = price[0];
        max2 = price[1];
    }
    else
    {
        max1 = price[1];
        max2 = price[0];
    }

    for (int i = 2; i < 5; i++)
    {
        if (price[i] > max1)
        {
            max2 = max1;
            max1 = price[i];
        }
        else if (price[i] > max2)
        {
            max2 = price[i];
        }
    }
    cout << "The highest stock value is:" << max1 << endl;

    cout << "The second highest stock value is:" << max2 << endl;

    return 0;
}
