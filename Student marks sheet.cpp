//Multiple Inheritance: In Multiple Inheritance there are multiple classes inherited in a single class.
#include <iostream>
#include <string.h>
using namespace std;

class studentDetail{
    protected:
    string name;
    public:
    void getName(){
        cout << "Enter name of student: ";
        cin.clear();
        cin.sync();
        getline(cin, name);
    }
};
class maths{
    protected:
    float m1, m2;
    public:
    void getM(){
        cout << "For Mathematics";
        cout << "\nEnter Marks of trem 1: ";
        cin >> m1;
        cout << "Enter Marks of trem 2: ";
        cin >> m2; 
    }
};
class english{
    protected:
    float e1, e2;
    public:
    void getE(){
        cout << "For English";
        cout << "\nEnter Marks of trem 1: ";
        cin >> e1;
        cout << "Enter Marks of trem 2: ";
        cin >> e2; 
    }
};
class science{
    protected:
    float s1, s2;
    public:
    void getS(){
        cout << "For Science";
        cout << "\nEnter Marks of trem 1: ";
        cin >> s1;
        cout << "Enter Marks of trem 2: ";
        cin >> s2; 
    }
};

// Classes named maths, english, science, studentDetail are inherited in one class named studentMarks

class studentMarks: public maths, public english, public science, public studentDetail{
    public:
    void show(){
        cout << "Student's Name: " << name;
        cout << "\nMathematics\nTerm 1: " << m1 <<"\nTerm 2: " << m2;
        cout << "\nEnglish\nTerm 1: " << e1 <<"\nTerm 2: " << e2;
        cout << "\nScience\nTerm 1: " << s1 <<"\nTerm 2: " << s2;
        cout << "\nPercentage: " << ((s1+ s2+ m1 + m2 + e1 + e2)/6) << " %";
    }
};
int main()
{
    cout << "Bhavya's Code\n";
    cout << ".................\n";
    studentMarks s;
    s.getName();
    s.getM();
    s.getE();
    s.getS();
    cout << "\nDetails: \n";
    s.show();

    return 0;
}
