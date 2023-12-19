#include <iostream> //cout ve endl
using namespace std;

int main()
{
    int toplam = 0;

    // Dizinin Boyutunu Saklayan Sabit Değişken
    const int DIZI_BOYUTU = 10; // const Silinirse Ne olur?

    int a[DIZI_BOYUTU] = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};

    for (int i = 0; i < DIZI_BOYUTU; i++)
        toplam += a[i];

    cout << "Dizi Elemanlarinin Toplami: " << toplam << endl;

    return 0;
}