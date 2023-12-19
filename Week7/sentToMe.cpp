#include <iostream>
//Class Constructor with param
using namespace std;
class Kare; //Classın protitipini oluşturduk
class Dikdörtgen{
public:
    Dikdörtgen(int uzun, int genis):uzunluk(uzun),genislik(genis){}

    // Oluşturma zamanında yapılacak işlemler. Dikdörtgen burda kurucu/yapıcı fonksiyon.(Önünde bir işaret yok ve classla aynı adda)
    // Dikdörtgen(int uzun, int genis) da uzun ve genis kurucu fonksiyoun parametreleridir.
    // (yıkıcı fonksiyonunun başında ~olsaydı yıkıcı olurdu).
    // uzunluk(uzun) bu ifade uzunlıuk=uzunluk demek
    void AlanHesapla(const Kare& kare);
    // Kare adlı veri tipinin kare isimli değişkeninin pointer adresi. constt yazılmasının nedeni başka adreslerle karışmaması
private:
    int uzunluk;
    int genislik;
};

class Kare
{
public:
    Kare(int kenar):kenarUzunlugu(kenar){}
    friend void Dikdörtgen::AlanHesapla(const Kare& kare);
private:
    int kenarUzunlugu;
};

void Dikdörtgen::AlanHesapla(const Kare& kare)
{
    int alan = kare.kenarUzunlugu * kare.kenarUzunlugu;
    // std::cout "using namespace std;" Bunu yazmasaydık coutu baştaki gibi yazmak zorunda kalırdık
    cout<<"Dikdortgenin Alani: "<< alan << endl;
}

int main()
{
    Dikdörtgen D1(15,20);
    //D1 nesnesi parametreleri almış
    Kare K1(20);
    D1.AlanHesapla(K1);
    //Friend ile Diktörtgen için yazılan fonksiyonu karede kullandık

    return 0;
}