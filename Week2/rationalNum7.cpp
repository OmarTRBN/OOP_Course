#include <iostream>
#include <cmath>

using namespace std;

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

void simplifyFraction(int &numerator, int &denominator)
{
    int commonDivisor = gcd(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;
}

int main()
{
    int numerator1, denominator1, numerator2, denominator2;

    cout << "Enter the first rational number (numerator denominator): ";
    cin >> numerator1 >> denominator1;

    cout << "Enter the second rational number (numerator denominator): ";
    cin >> numerator2 >> denominator2;

    // Toplamı hesapla
    int totalNumerator = numerator1 * denominator2 + numerator2 * denominator1;
    int totalDenominator = denominator1 * denominator2;

    // Toplamı en sade haliyle yazdır
    simplifyFraction(totalNumerator, totalDenominator);

    cout << "Toplam: " << totalNumerator << " / " << totalDenominator << endl;

    return 0;
}
