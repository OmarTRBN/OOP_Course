#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sayi;

    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    for (int i=sayi-1; i>=0; i--)
    {
        if (sayi%i == 0)
        {
            cout << sayi << "bir asal sayidir!" << endl;
        } 
    }
    return 0;
}
