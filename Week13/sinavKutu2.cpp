#include <iostream>

using namespace std;

class Kutu
{
private:
    int gn, yk, uz;

public:
    Kutu (int g=1, int y=1, int u=1)
    {
        gn = g;
        yk = y;
        uz = u;
    }

    void setDeger(int g, int y, int u)
    {
        gn = g;
        yk = y;
        uz = u;
    }

    void getDeger()
    {
        cout << "genislik: " << gn << endl;
        cout << "yukseklik: " << yk << endl;
        cout << "uzunluk: " << uz << endl;
    }

    int hacimHesapla()
    {
        return gn * yk * uz;
    }

    void karsilastir(Kutu &kutuObjPtr)
    {
        int hacim1 = this->hacimHesapla();
        int hacim2 = kutuObjPtr.hacimHesapla();

        if (kutuObjPtr.hacimHesapla() > this->hacimHesapla())
        {
            cout << "Ikinci kutu daha buyuktur. " << endl;
        }
        else if (kutuObjPtr.hacimHesapla() < this->hacimHesapla())
        {
            cout << "Birinci kutu daha buyuktur. " << endl;
        }
        else 
        {
            cout << "Kutularin hacimleri esittir. " << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    Kutu kutuObj1;
    Kutu kutuObj2;
    kutuObj1.setDeger(9, 9, 4);
    kutuObj2.setDeger(3, 2, 1);

    cout << "Kutu 1 hacmi: " << kutuObj1.hacimHesapla() << endl;
    cout << "Kutu 2 hacmi: " << kutuObj2.hacimHesapla() << endl;

    kutuObj1.karsilastir(kutuObj2);

    return 0;
}
