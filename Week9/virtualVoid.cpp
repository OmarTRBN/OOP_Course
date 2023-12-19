#include <iostream>

using namespace std;

class Memeli
{
public:
    virtual void ucur()
    {
        cout << "Bazi memeliler ucar" << endl;
    }
};

class Yarasa : public Memeli
{
public:
    void ucur() override
    {
        cout << "Yarasalar hem memeli hem ucar" << endl;
    }
};

int main()
{
    Yarasa y1;
    y1.ucur();
    y1.Memeli::ucur();

    void (Yarasa::*fptr)() = &Yarasa::ucur;
    cout << fptr << endl;

    return 0;
}