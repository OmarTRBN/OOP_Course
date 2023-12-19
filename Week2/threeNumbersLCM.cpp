#include <iostream>

using namespace std;

// Function to calculate the greatest common divisor using Euclidean algorithm
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the least common multiple using the formula:
// LCM(a, b, c) = (a * b * c) / (gcd(a, b) * gcd(b, c) * gcd(c, a))
long long lcm(int a, int b, int c)
{
    long long gcdAB = gcd(a, b);
    long long gcdBC = gcd(b, c);
    long long gcdCA = gcd(c, a);

    long long lcmABC = (long long)a * b * c / (gcdAB * gcdBC * gcdCA);
    return lcmABC;
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

    // Calculate the least common multiple using the lcm function
    long long result = lcm(num1, num2, num3);

    cout << "The least common multiple of " << num1 << ", " << num2 << ", and " << num3 << " is: " << result << endl;

    return 0;
}
