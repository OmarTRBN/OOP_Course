#include <iostream>

using namespace std;

class DisSinif
{
private:
    int ozelUye;
public:
    DisSinif (int deger): ozelUye(deger) {}

    class IcSinif
    {
    public:
        void GosterDisSinif(DisSinif& disSinif)
        {
            cout << "IcSinif, Dissinifa erisim: " << disSinif.ozelUye << endl;
        }
    };

    void GosterICSinif()
    {
        IcSinif icSinif;
        icSinif.GosterDisSinif(*this);
    }
};


int main(int argc, const char** argv)
{
    DisSinif disNesne(15);
    disNesne.GosterICSinif();

    return 0;
}