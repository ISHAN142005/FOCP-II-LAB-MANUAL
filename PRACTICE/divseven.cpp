#include <iostream>
using namespace std;

int main()
{
    int num = 51;

    while(true)
    {
        if(num % 7 == 0)
        {
            cout << "First number greater than 50 divisible by 7 is: " << num;
            break;
        }
        num++;
    }

    return 0;
}