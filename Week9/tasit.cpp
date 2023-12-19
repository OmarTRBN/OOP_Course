#include <iostream>

using namespace std;

class Tasit
{
private:
    bool rearDrive;
    string marka;
    string model;
public:
    Tasit(const string mrk, const string mdl) : marka(mrk), model(mdl) {}
    void bilgileriGoster()
    {
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Rear drive: " << rearDrive << endl;
    }
    void sur()
    {
        cout << "Araba suruluyor." << endl;
    }
    void dur()
    {
        cout << "Tasit durdu." << endl;
    }
};

class SporAraba : public Tasit
{
private:
    int maxHiz;
public:
    SporAraba(const string mrk, const string mdl, int h) : Tasit (mrk, mdl) , maxHiz(h){}
    void hizliSur()
    {
        cout << "Tasit max hiz: " << maxHiz << " erisildi." << endl;
    }
};

class AraziTasiti : public Tasit
{
private:
    bool rearDrive;
public:
};


int main(int argc, char const *argv[])
{    
    SporAraba SA1("Ferrari", "Enzo", 320);
    SA1.bilgileriGoster();
    SA1.hizliSur();
    return 0;
}
