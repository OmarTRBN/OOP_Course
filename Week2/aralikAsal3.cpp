#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int minNum, maxNum;
    bool isPrime = true;

    cout << "Enter the min number: ";
    cin >> minNum;
    cout << "\nEnter the max number: ";
    cin >> maxNum;

    minNum = abs(minNum);
    maxNum = abs(maxNum);

    if (minNum >= maxNum || minNum <= 1)
    {
        cout << "Incorrect entry! Program will shut down." << endl;
        return 1;
    }

    if (minNum == 2)
    {
        cout << "2 is a prime number!" << endl;
    }

    for (int i = max(3, minNum); i <= maxNum; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            isPrime = true;
            for (int j = 3; j <= sqrt(i); j += 2)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime == true)
        {
            cout << i << " is a prime number!" << endl;
        }
    }
    return 0;
}
