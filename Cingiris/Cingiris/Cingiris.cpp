#include <iostream>
// using namespace std; bunun yerine std:: kullandık.

int a;
int b;


int main()
{
    std::cout << "birinci sayiyi giriniz = ";
    std::cin >> a;

    std::cout << "ikinci sayiyi giriniz = ";
    std::cin >> b;

    std::cout << "a+b = " << a + b << "\n";


    return 0;
}
