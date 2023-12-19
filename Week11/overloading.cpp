#include <iostream>
using namespace std;

class VeriYaz
{
public:
    void yaz(int i)
    {
        cout << "int i = " << i << endl;
    }

    void yaz(double i)
    {
        cout << "double i = " << i << endl;
    }

    void yaz(char *i)
    {
        cout << "char i = " << i << endl;
    }

};

int main(int argc, char const *argv[])
{
    VeriYaz obj;

    char character[] = "Merhaba Dunya";
    int integer = 23;
    double doub = 20.4;

    obj.yaz(character);
    obj.yaz(integer);
    obj.yaz(doub);
    return 0;
}
