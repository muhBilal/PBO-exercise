#include <iostream>
#include <string>

using namespace std;
class Car{
    public:
        string brand;
        string model;
        int year;
        string status;
        Car(string x, string y, int z){
            brand = x;
            model = y;
            status = z;
        }
};

int main() {
    Car carObj1("Bmw", "XS", 1901);
    Car carObj2("fort", "mustang", 900);
    
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    
    return 0;
}
