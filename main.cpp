#include <iostream>

using namespace std;

class Book{
    private:
        int ID;
        string name;
        string author;
    public:
        Book(int i, string s, string a);
        ~Book();
        Book(Book &b);
        
        void setID(int i);
        void setName(string s);
        void setAuthor(string a);
        
        int    getID();
        string getName();
        string getAuthor();
        
        void display();
};

Book::Book(int i, string s, string a){
    cout<<"Constructor executed!"<<endl;
    ID = i;
    name = s;
    author = a;
}

Book::~Book(){
    cout<<"Destructor executed!"<<endl;
}

Book::Book(Book &b){
    cout<<"Copy constructor executed!"<<endl;
    ID = b.ID;
    name = b.name;
    author = b.author;
}

int Book::getID(){
    return ID;
}




int main()
{
    Book first(5, "O noapte furtunoasa", "I.L.Caragiale");
    Book second(first);
    
    return 0;
}
