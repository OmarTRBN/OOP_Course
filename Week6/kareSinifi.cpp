#include <iostream>

using namespace std;

class Dikdortgen;
class Kare
{
public:
    // Kare()
    // {
    //     kenarUzunlugu = 12;
    // }
    Kare(int kenar) : kenarUzunlugu(kenar){}
    void setKenar (int kenar);
    friend class Dikdortgen;     
private:
    int kenarUzunlugu;
};

class Dikdortgen
{
public:
    int Alan(Kare &k);
private:
};

int Dikdortgen::Alan(Kare &k)
{
    return k.kenarUzunlugu * k.kenarUzunlugu;
}

int main(int argc, char const *argv[])
{
    Kare K1(15);
    Dikdortgen D1;

    cout << D1.Alan(K1) << endl;
    return 0;
}
