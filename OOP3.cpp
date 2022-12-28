#include <iostream>
#include <string>
using namespace std;

#define max 100

class NegativeNUM
{};

class publication
{
protected:
    string title;    //??what is string
    float price;
};

class book : public publication
{
private:
    int pagecount;

public:
    void set_data()
    {
        cout << "\nEnter the title of book : ";
        cin >> title;
        cout << "Enter the price of book : ";
        cin >> price;
        cout << "Enter the number of book : ";
        cin >> pagecount;
    }
    void get_data()
    {
        cout << "\nTitle of book : " << title << endl;
        if(price<0)
        {    
            try
            {
                throw NegativeNUM();
            }
            catch(NegativeNUM)
            {
                cout<<"Price can not be negative"<<endl;
                price=0;
            }
        }
        if(pagecount<0)
        {    
            try
            {
                throw NegativeNUM();
            }
            catch(NegativeNUM)
            {
                cout<<"Page count can not be negative"<<endl;
                pagecount=0;
            }
        }
        
        cout << "Price of book : " << price << endl;
        cout << "Number of pages : " << pagecount << endl;
    }
};
class tape : public publication
{
private:
    int playing_time;

public:
    void set_data()
    {
        cout << "\nEnter the title of tape : ";
        cin >> title;
        cout << "Enter the price of book : ";
        cin >> price;
        cout << "Enter the playing time of tape in minutes : ";
        cin >> playing_time;
    }
    void get_data()
    {
        cout << "\nTitle of tape : " << title << endl;
        if(price<0)
        {    
            try
            {
                throw NegativeNUM();
            }
            catch(NegativeNUM)
            {
                cout<<"Price can not be negative"<<endl;
                price=0;
            }
        }
        if(playing_time<0)
        {    
            try
            {
                throw NegativeNUM();
            }
            catch(NegativeNUM)
            {
                cout<<"Play time can not be negative"<<endl;
                playing_time=0;
            }
        }
        cout << "Price of tape: " << price << endl;
        cout << "Playing time of tape in minutes : " << playing_time << endl;
    }
};

int main()
{
    book b[max];
    tape t[max];      int choice=0,bookCount=0,tapeCount=0;  
    while (choice!=5)
    {
        cout<<"**************Publishing Company****************"<<endl
    <<"1. Add book "<<endl
    <<"2. Add tape: "<<endl
    <<"3. Display book "<<endl
    <<"4. Display tape"<<endl
    <<"5. Exit:"<<endl
    <<"Enter Choice : "<<endl;
    cin>>choice; 

    switch(choice) 
    { 
        case 1: 
        { 
            cout<<"Add Book: "<<endl; 
            b[bookCount].set_data();  
            bookCount++; 
            break; 
        } 
        case 2: 
        {
            cout<<"Add Tape: \n"; 
            t[tapeCount].set_data();           
            tapeCount++; 
            break; 
        } 
        case 3: 
        { 
            cout<<"Books"<<endl; 
            for(int j=0;j<bookCount;j++) 
            { 
                b[j].get_data(); 
            } 
            break; 
        } 
        case 4: 
        { 
            cout<<"Tapes"<<endl; 
            for(int j=0;j<tapeCount;j++) 
            {    
                t[j].get_data(); 
            }    
            break; 
        } 
        case 5: 
        { 
            break;
        } 
        default: 
        { 
            cout<<"Invalid"<<endl; 
            break;
        } 
    } 
    }
    return 0;
}