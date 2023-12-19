#include <iostream>
#include <iomanip>

using namespace std;

class KutuSinifi
{
protected:
    float Derinlik;
    float Genislik;
    float Uzunluk;
public:
    void setHacim(float genislik, float unuzluk, float derinlik);
    float getHacim();
};

class Bavul : public KutuSinifi
{
    public:
        void setBavulHacim(float genislik, float unuzluk, float derinlik);
    private:
};

void KutuSinifi::setHacim(float genislik, float unuzluk, float derinlik)
{
    Genislik = genislik;
    Uzunluk = unuzluk;
    Derinlik = derinlik;
}

float KutuSinifi::getHacim()
{
    return (Derinlik * Genislik * Uzunluk);
}

int main(int argc, char const *argv[])
{
    float g, u, d;
    KutuSinifi Cube;

    cout << "Enter dimensions (g u d) with spaces in between: ";
    cin >> g >> u >> d;
    
    Cube.setHacim(g, u, d);
    float hacim = Cube.getHacim();

    cout << endl << "The volume is " << setprecision(10) << hacim << endl;

    // Now with subclass
    Bavul omarsBavul;
    omarsBavul.setHacim(g, u, d);
    cout << omarsBavul.getHacim() << " is Omar's Bavul's size. Hmmm, that's not interesting at all. \nNothing to see here! " << endl;

    return 0;
}
