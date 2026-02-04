// a=97  a=65
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int N;
    N = S.length();
    for (int i = 0; i < N; i++)
    {
        if (S[i] >= 97 && S[i] <= 122)
        {
            S[i] -= 32;
        }
        else if (S[i] >= 65 && S[i] <= 90)
        {
            S[i] += 32;
        }
    }

    cout<<S;

    return 0;
}