#include <iostream>

int main()
{
    int sayi;

    // Kullanıcıdan sayıyı girmesini iste
    std::cout << "Bir sayi giriniz: ";
    std::cin >> sayi;

    std::cout << "Sayinin bolenleri: ";
    // Sayının bölenlerini bul ve ekrana bas
    for (int i = 1; i <= sayi; ++i)
    {
        if (sayi % i == 0)
        {
            std::cout << i << " ";
        }
    }

    std::cout << "\nSayinin carpanlari: ";
    // Sayının çarpanlarını bul ve ekrana bas
    for (int i = 2; i <= sayi; ++i)
    {
        while (sayi % i == 0)
        {
            std::cout << i << " ";
            sayi /= i;
        }
    }
    std::cout << "\n" ;

    return 0;
}
