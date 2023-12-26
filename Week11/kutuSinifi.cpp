#include <iostream>
using namespace std;

class Kutu
{
private:
    double uzunluk, genislik, yukseklik, hacim;

public:
    double getHacim()
    {
        return hacim;
    }

    void setOzellikler(double uzn, double gen, double yuk)
    {
        uzunluk = uzn;
        genislik = gen;
        yukseklik = yuk;
        hacim = uzn * gen * yuk;
    }

    Kutu operator+(Kutu &b)
    {  
        Kutu kutu1;
        kutu1.hacim = this->getHacim() + b.getHacim();
        return kutu1;
    }

    Kutu& operator+=(Kutu &b)
    {
        this->hacim = this->hacim + b.hacim;
        return *this;
    }

};

int main()
{
    Kutu k1;
    Kutu k2;
    double hacim{};

    k1.setOzellikler(1.00, 1.00, 1.00);
    hacim = k1.getHacim();
    cout << "Kutu 1'in hacmi : " << hacim << endl;
   
    k2 = k1;
    hacim = k2.getHacim();
    cout << "Kutu 4'in hacmi : " << hacim << endl;

    k2 += k2;
    hacim = k2.getHacim();
    cout << "Kutu 2'in hacmi : " << hacim << endl;

    return 0;
}
