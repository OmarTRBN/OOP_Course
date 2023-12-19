#include <iostream>

class Disarisi
{
private:
    int x;
public: 
    Disarisi();
    int getVeri_D();

    class Icerisi{
    private:
        int y;
    public:
        Icerisi();
        int getVeri_I();
    };
};

Disarisi::Disarisi()
{
    x = 5;
}

Disarisi::Icerisi::Icerisi()
{
    y = 10;
}

int Disarisi::getVeri_D()
{
    return x;
}

int Disarisi::Icerisi::getVeri_I()
{
    return y;
}

int main(int argc, const char** argv)
{
    Disarisi outside;
    Disarisi::Icerisi ictaraf;
    return 0;
}