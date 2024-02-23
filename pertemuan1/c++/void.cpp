#include <iostream>

using namespace std; 

class MyClass {
    public:
        void MyMethod(){
            cout << "Hello World";
        }
};

int main(){
    MyClass myObj;
    myObj.MyMethod();
    return 0;
}