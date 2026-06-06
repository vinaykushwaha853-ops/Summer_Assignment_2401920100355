#include <iostream>
using namespace std;

class LibraryUser

{
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
};

class KidUser : public LibraryUser
{
public:
    int age;
    string bookType;
  void registerAccount()
    {
        if(age < 12)
            cout<<"You have successfully registered under Kids Account"<<endl;
        else
            cout<<"Sorry, Age must be less than 12 to register as  kid"<<endl;
    }

    void requestBook()
    {
        if(bookType == "Kids")
            cout<<"Book Issued successfully, please return the book within 10 days"<<endl;
        else
            cout<<"Oops, you are allowed to take only kids books"<<endl;
    }
};

class AdultUser : public LibraryUser
{
public:
    int age;
    string bookType;

    void registerAccount()
    {
        if(age > 12)
            cout<<"You have successfully registered under an Adult Account"<<endl;
        else
            cout<<"Sorry, Age must be greater than 12 to register as an adult"<<endl;
    }

    void requestBook()
    {
        if(bookType == "Fiction")
            cout<<"Book Issued successfully, please return the book within 7 days"<<endl;
        else
            cout<<"Oops, you are allowed to take only adult Fiction books"<<endl;
    }
};

int main()
{
    KidUser k;

    k.age = 10;
    k.registerAccount();

    k.bookType = "Kids";
    k.requestBook();

    cout<<endl;

    AdultUser a;

    a.age = 23;
    a.registerAccount();

    a.bookType = "Fiction";
    a.requestBook();

    return 0;
}
