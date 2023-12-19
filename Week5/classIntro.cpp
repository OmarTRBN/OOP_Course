#include <iostream>

using namespace std; 
class Tarih{
// Degiskenlere dorgudan erisim yapilabilmesi istenmez
// Dolayisiyla data hiding kullanilir
private:
    // Bu scope'takilere erisilmez
    int Yil;
    int Ay;
    int Gun;
public:
    // buradakiler erisilebilir
    void TarihDegistir(int gun, int ay, int yil)
    {
        Gun = gun;
        Ay = ay;
        Yil = yil;
    }
    void printTarih()
    {
        cout << Gun << "." << Ay << "." << Yil;
    }

    bool setTarih(int g, int a, int y);
    void getTarih();
};

// Namespace tanimlayarak
bool Tarih::setTarih(int g, int a, int y)
{
    if (g < 1 || g > 31 || a < 1 || a > 12 || y < 1)
    {
        return false;
    }
    else
    {
        Gun = g;
        Ay = a;
        Yil = y;

        return true;
    }    
}

void Tarih::getTarih()
{
    cout << Gun << "." << Ay << "." << Yil;
}

int main(int argc, char const *argv[])
{
    Tarih bugun;
    // bugun.TarihDegistir(31, 10, 2023);
    // bugun.printTarih();

    bugun.setTarih(31, 10, 2023);
    bugun.getTarih();     

    /* WIH POINTERS */

    cout << endl << "Now with pointers!" << endl;
    Tarih* ptr_bugun = &bugun;
    cout << ptr_bugun << endl;
    ptr_bugun->setTarih(25, 9, 2020);
    ptr_bugun->getTarih();
    cout << endl;

    return 0;
}