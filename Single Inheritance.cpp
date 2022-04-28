// Single Inheritance: Inheritence in which there is a single Base class and a single class is derived from it.
#include <iostream>
using namespace std;

class c1{
    protected:
    int num1;
    public:
    c1(){
        num1 = 10;
    }
};
class c2: public c1{     //c1 is inherited in public mode
    private:
    int num2;
    public:
    c2(){
        num2 = 20;
    }
    void show(){
        
        cout << "\nNum1: " << num1;
        cout << "\nNum2: " << num2;
    }
};
int main()
{
    cout << "Bhavya's Code\n";
    cout << ".................\n";
    c2 a;
    a.show();
    
/* We just made object of c2 class and called show function for it.
   It has access to data member of both class.    */
   
    return 0;
}
