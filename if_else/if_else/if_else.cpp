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

void kiyaslama_function(int b , int c) {

    if (b > c) {
        std::cout << " birinci sayi ikinci sayiden buyuktur.";
    }

    else if (b < c) {
        std::cout << " ikinci sayi birinci sayiden buyuktur.";
    }

    else {
        std::cout << " iki sayi esit";
    }


}

int main()
{

 b =  kullanicidan_sayi_al();
 c =  kullanicidan_sayi_al();
 kiyaslama_function(b, c);
 


    return 0;
}


