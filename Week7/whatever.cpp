#include <iostream>

using namespace std;

void hesapla(int veri)
{
    class Klima
    {
    public:
        int temp;
    };
    Klima klimaList[5];
    for (size_t i = 0; i < sizeof(klimaList) / sizeof(Klima); i++)
    {
        klimaList[i].temp = veri;
        cout << "Veri: " << klimaList[i].temp << endl;
    }
}

int main()
{
    hesapla(15);
    return 0;
}