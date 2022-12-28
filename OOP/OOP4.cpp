#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class student
{
    string name;
    int roll;

public:
    void set_data()
    {
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the roll no. : ";
        cin >> roll;
    }
    void display()
    {
        cout << "Enter Name:" << name << endl;
        cout << "Enter Roll no.:" << roll << endl;
    }
};
int main()
{
    student *s;
    fstream f;     //??
    int size;

    f.open("Student_Data.txt", ios::in | ios::out);  //???
    cout << "Enter the number of student :";
    cin >> size;
    s=new student[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter information of " << i + 1 << " student : "<<endl;
        s[i].set_data();
        f.write((char*)&s[i], sizeof(s[i]));      //???
        cout<<endl;
    }

    f.seekg(0);

    for (int i = 0; i < size; i++)
    {
        f.read((char*)&s[i], sizeof(s[i]));
        s[i].display();
        cout<<endl;
    }
    f.close();
    delete []s;
    return 0;
}
//seekg() is a function in the iostream library that allows you to seek an arbitrary position in a file. It is included in the <fstream> header file and is defined for istream class. It is used in file handling to sets the position of the next character to be extracted from the input stream from a given file. 

