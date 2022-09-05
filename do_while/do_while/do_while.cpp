#include <iostream>
// using namespace std; bunun yerine std:: kullandık.
int b;
int c;


//fonksiyonlar mainin üstüne tanımlaniyor.
int kullanicidan_sayi_al() {
    int a;
    std::cout << " sayi giriniz= ";
    std::cin >> a;
    return a;

}



bool sayilar_esitmi(int x, int y) {
    if (x == y) {
        return true;
     
    }
    else {
        return false;
    }
}
int main()
{
    // do while yapısı while döngüsü sürdükçe  do içerisindekini dener.
    do {
        b = kullanicidan_sayi_al();
        c = kullanicidan_sayi_al();
    }

    while (!sayilar_esitmi(b,c)); //sayilar eşit değilse do dakini yap.

    std::cout << "giris basarili";

    return 0;
}


