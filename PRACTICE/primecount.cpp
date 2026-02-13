/*
26.
Write a program to generate and display the first n prime numbers using a
combination of for and while loops.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter how many prime numbers you want: ";
    cin >> n;

    int count = 0;
    int num = 2;

    while (count < n)
    {
        bool isPrime = true;

        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << num << " ";
            count++;
        }

        num++;
    }

    cout << endl;
    return 0;
}