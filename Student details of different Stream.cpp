// Hierarchical Inheritance: In hierarchical inheritance there is a single base class and multiple class is derived from that single base class
#include <iostream>
#include <string.h>
using namespace std;

class studentDetails{
    protected:
    string stuname, fname, mname, roll;
    public:
    void getDetail(){
        cout << "\nEnter Name: ";
        cin.clear();
        cin.sync();
        getline(cin, stuname);
        cout << "Enter Father's Name: ";
        getline(cin, fname);
        cout << "Enter Mother's Name: ";
        getline(cin, mname);
        cout << "Enter Roll No.: ";
        getline(cin, roll);
    }
    void show(){
        cout << "\nStudent's name: " << stuname;
        cout << "\nFather's name: " << fname;
        cout << "\nMother's name: " << mname;
        cout << "\nRoll No.: " << roll;
    }
};
class cse: public studentDetails{
    private:
    string sub1, sub2, sub3;
    public:
    void getDetail(){
        studentDetails:: getDetail();
        cout << "Enter subject 1 name: ";
        cin.clear();
        cin.sync();
        getline(cin, sub1);
        cout << "Enter subject 2 name: ";
        getline(cin, sub2);
        cout << "Enter subject 3 Name: ";
        getline(cin, sub3);
    }
    void show(){
        studentDetails:: show();
        cout << "\n1) Subject name: " << sub1;
        cout << "\n2) Subject name: " << sub2;
        cout << "\n3) Subject name: " << sub3;
    }
};
class medical: public studentDetails{
    private:
    string sub1, sub2, sub3;
    public:
    void getDetail(){
        studentDetails:: getDetail();
        cout << "Enter subject 1 name: ";
        cin.clear();
        cin.sync();
        getline(cin, sub1);
        cout << "Enter subject 2 name: ";
        getline(cin, sub2);
        cout << "Enter subject 3 Name: ";
        getline(cin, sub3);
    }
    void show(){
        studentDetails:: show();
        cout << "\n1) Subject name: " << sub1;
        cout << "\n2) Subject name: " << sub2;
        cout << "\n3) Subject name: " << sub3;
    }
};
class bba: public studentDetails{
    private:
    string sub1, sub2, sub3;
    public:
    void getDetail(){
        studentDetails:: getDetail();
        cout << "Enter subject 1 name: ";
        cin.clear();
        cin.sync();
        getline(cin, sub1);
        cout << "Enter subject 2 name: ";
        getline(cin, sub2);
        cout << "Enter subject 3 Name: ";
        getline(cin, sub3);
    }
    void show(){
        studentDetails:: show();
        cout << "\n1) Subject name: " << sub1;
        cout << "\n2) Subject name: " << sub2;
        cout << "\n3) Subject name: " << sub3;
    }
};

int main()
{
    cout << "Bhavya's Code\n";
    cout << ".................\n";
    cout << "\nEnter details of cse student";
    cse c;
    c.getDetail();
    cout << "\nDetails of cse student";
    c.show();
    cout << "\n\nEnter details of medical student";
    medical m;
    m.getDetail();
    cout << "\nDetails of medical student";
    m.show();
    cout << "\n\nEnter details of bba student";
    bba b;
    b.getDetail();
    cout << "\nDetails of bba student";
    b.show();
    return 0;
}
