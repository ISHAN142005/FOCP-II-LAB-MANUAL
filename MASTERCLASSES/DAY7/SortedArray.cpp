#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int numbersA[] = {1, 9, 3, 8, 5, 10};
    int numbersB[] = {7, 4, 2, 6};

    int sizeA = sizeof(numbersA) / sizeof(numbersA[0]);
    int sizeB = sizeof(numbersB) / sizeof(numbersB[0]);

    int combined[sizeA + sizeB];

    for (int i = 0; i < sizeA; i++)
    {
        combined[i] = numbersA[i];
    }

    for (int i = 0; i < sizeB; i++)
    {
        combined[sizeA + i] = numbersB[i];
    }

    sort(combined, combined + sizeA + sizeB);

    cout << "Sorted Merged Array: ";
    for (int i = 0; i < sizeA + sizeB; i++)
    {
        cout << combined[i] << " ";
    }
    cout << endl;

    return 0;
}
