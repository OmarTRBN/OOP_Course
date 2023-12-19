#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int minNum, maxNum;

    cout << "Enter the minimum number: ";
    cin >> minNum;
    cout << "Enter the maximum number: ";
    cin >> maxNum;

    cout << "Prime numbers between " << minNum << " and " << maxNum << " are:" << endl;

    for (int num = minNum; num <= maxNum; ++num)
    {
        if (isPrime(num))
        {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}
