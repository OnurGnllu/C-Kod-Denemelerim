
#include <iostream>

//class start
class employee{
private:
    int age;
    std::string name;

public:
    void setage(int age1) {
        age = age1;
    }
    int getage() {
        return age;
    }

};
//class end


//structor start
struct persondetail{
private:
    int idcode;
public:
    void setidcode(int idcode1) {
        idcode = idcode1;
    }
    int getidcode() {
        return idcode;
    }

};
//structor end


int main()
{
    employee employee1;
    employee1.setage(21);
    std::cout << employee1.getage()<< "\n";

    persondetail persondetail1;
    persondetail1.setidcode(1);
    std::cout << persondetail1.getidcode() << "\n";

    return 0;
}

