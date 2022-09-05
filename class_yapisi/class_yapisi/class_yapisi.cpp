//classların structlardan farkı icerisinde fonksiyonda cağırabiliyoruz.
#include <iostream>

class employee {
public:
    int id;
    std::string name;
    std::string department;

    void texter(employee employee) {
    
        std::cout << employee.id<< "\n"; //this->id ile ayni
        std::cout << this->name << "\n";
        std::cout << this->department << "\n";
    
    }

};
int main()
{
    employee employee1;
    employee1.id = 1;
    employee1.department = "engineer";
    employee1.name = "onur";
    employee1.texter(employee1);

    
    return 0;
}