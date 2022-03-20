#include <iostream>
using namespace std;

class Student{
public:
    string name;
    string major;
    double gpa;
    Student(string aName,string aMajor,double aGpa){
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }
};

int main()
{
    Student student1("Njoroge Francis","Computer science",4.09);
    Student student2("Muchemi","Business",3.21);
    cout<<student1.name<<endl<<student1.major<<endl<<student1.gpa<<endl;
    cout<<student2.name<<endl<<student2.major<<endl<<student2.gpa<<endl;

    return 0;
}
