#include <iostream>
#include <string>

using namespace std;
class Car{
    public:
        string brand;
        string model;
        int year;
        string status;
};

int main() {
    Car carObj1;
    carObj1.brand = "Bmw";
    carObj1.model = "XS";
    carObj1.year = 1999;
    carObj1.status = "bekas";
    
    Car carObj2;
    carObj2.brand = "fort";
    carObj2.model = "mustang";
    carObj2.year = 1999;
    
    Car mobil;
    mobil.brand = "toyota";
    mobil.model = "avanza";
    mobil.year = 2016;
    mobil.status = "baru";
    
    
   cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << " "  << carObj1.status << "\n";
   cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << " "  << carObj2.status << "\n";
   cout << mobil.brand << " " << mobil.model << " " << mobil.year << " "  << mobil.status << "/n";
        
    
    return 0;
}
