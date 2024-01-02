#include <iostream>

using namespace std;

class Sayi
{
private:
    int deger;

public:
    Sayi(int inputNum = 0)
    {
        deger = inputNum;
    }

    void setDeger(int inputNum)
    {
        deger = inputNum;
    }

    int getDeger()
    {
        return deger;
    }

    Sayi operator+(Sayi numIn)
    {
        Sayi toplam;
        toplam.setDeger(deger + numIn.getDeger());
        return toplam;
    }

    // Sayi &operator++(Sayi numIn)
    // {

    //     return *this;
    // }
};

int main(int argc, char const *argv[])
{
    Sayi num1(9);
    Sayi num2(61);
    Sayi sumnumyum;

    sumnumyum = num1 + num2;

    cout << sumnumyum.getDeger() << endl;

    return 0;
}