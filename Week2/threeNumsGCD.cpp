#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    // Euclidean Algorithm
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    int result = gcd(num1, gcd(num2, num3));

    cout << "The greatest common divisor of " << num1 << ", " << num2 << ", and " << num3 << " is: " << result << endl;

    return 0;
}
