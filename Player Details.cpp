//Hybrid Inheritance: It is combination of Multiple Inheritance, Single Inheritance, and Hierarchical Inheritance.

#include <iostream>
#include <string.h>
using namespace std;

class player{
    protected:
    string name;
    int age;
    public:
    void getDetail(){
        cout << "Enter player's name: ";
        cin.clear();
        cin.sync();
        cin.ignore();
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }
    void show(){
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};
class physique: public player{
    protected:  
    float height, weight;
    public:
    void getDetail(){
        cout << "Enter height(in cm): ";
        cin >> height;
        cout << "Enter weight(in kg): ";
        cin >> weight;
    }
    void show(){
        cout << "\nHeight: " << height;
        cout << "\nWeight: " << weight;
    }
};
class location{
    protected:
    string city;
    int pin;
    public:
    void getDetail(){
        cout << "Enter city name: ";
        cin.clear();
        cin.sync();
        cin.ignore();
        getline(cin, city);
        cout << "Enter pincode: ";
        cin >> pin;
    }
    void show(){
        cout << "\nCity name: " << city;
        cout << "\nPincode: " << pin;
    }
};
class game: public physique, public location{
    private:
    string gname;
    public:
    void getDetail(){
        //cin.clear();
       // cin.sync();
        player :: getDetail();
        physique :: getDetail();
        location :: getDetail();
        cin.clear();
        cin.sync();
        cin.ignore();
        cout << "Enter name of game: ";
        getline(cin, gname);
    }
    void show(){
        player :: show();
        physique :: show();
        location :: show();
        cout << "\nName of game: " << name;
    }
};
int main(){
    cout << "Bhavya's Code\n";
    cout << ".................\n";
    game g;
    cout << "Enter player's details: \n";
    g.getDetail();
    cout << "\nDetails: \n";
    g.show();
    return 0;
}
