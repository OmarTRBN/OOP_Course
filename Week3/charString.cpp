#include <iostream> //cout, cin ve endl
using namespace std;
int main()
{
    // 20 Karakter Saklayan Bir Dizi (null Dahil)
    char string1[20];

    // 6 Karakter Rezerve Edilen İkinci Bir Dizi (null Dahil)
    char string2[] = "Dunya";
    
    cout << "Adinizi Giriniz: ";
    cin >> string1; // string1 İçerisinde Adınız Saklanır
    cout << "Adiniz: " << string1 << endl;
    cout << "Merhaba " << string2 << endl;
    cout << "Karakterleri Arasina 1 Bosluk Birakilmis Adiniz:\n";

    // null Karakterine Rastlayıncaya kadar Döngüyü İşlet
    for (int i = 0; string1[i] != '\0'; i++)
        cout << string1[i] << ' ';

    cout << endl;

    return 0;
}