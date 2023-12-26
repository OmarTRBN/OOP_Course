#include <iostream>

using namespace std;

class Temel
{
public:
    virtual void fonkisyon()
    {
        cout << "Temel fonkisyon" << endl;
    }
};

class Turetilmis: public Temel
{
    void fonkisyon()
    {
        cout << "Turetilmis fonkisyon" << endl;
    }

    void fonkisyon2()
    {
        cout << "Turetilmis fonkisyon2" << endl;

    }
};

int main(int argc, char const *argv[])
{
    Temel *ptr;

    Turetilmis turemis;
    ptr = &turemis;
    ptr->fonkisyon();
    // ptr->fonkisyon2();
    return 0;
}
