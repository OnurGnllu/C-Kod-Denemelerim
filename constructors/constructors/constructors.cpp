
#include <iostream>

//class start
class employee {
private:
    int age;
    std:: string name;

public:
    //constructor buradan baslar
     employee(int yas , std::string isim) {
        age = yas;
        name = isim;
    }
     //constructor burada biter

    void setage(int age1) {
        age = age1;
    }
    int getage() {
        return age;
    }

};
//class end



int main()
{
    //constructor yapisi
    employee employee1(21, "onur");
    std::cout << employee1.getage();




    return 0;
}

