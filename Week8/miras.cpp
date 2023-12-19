#include <iostream>

using namespace std;
class kutu{
    public :
     static int nesnesayisi ;
    kutu( double g =2 , double d = 0 , double y =2);
    double hacim();
    private :
    double genislik , derinlik , yukseklik ;
};
kutu :: kutu( double g , double d , double y){
    cout<<"yapici fonkion cagirliyor ..."<<endl;
    genislik = g;
    derinlik=d ;
    yukseklik =y;
    nesnesayisi++;
}
double kutu ::hacim(){return genislik*derinlik*yukseklik ;}

int kutu::nesnesayisi=0 ;

int main()
{
    
    kutu kutu1(2.3 ,3.32,4.5);
    cout<<"kutu hacmi :"<<kutu1.hacim()<<endl ;
    kutu kutu2(2.3 ,3.32,4.5);
    cout<<"kutu hacmi :"<<kutu2.hacim()<<endl ;
   // cout<<"kutu 1 deki  deger :"<<kutu1.nesnesayisi<<endl ;
    //cout<<"kutu 2 deki  deger :"<<kutu2.nesnesayisi<<endl ;
    cout<<" olusturan toplam nesne sayisi :"<<kutu::nesnesayisi<<endl ;
    return 0;
}