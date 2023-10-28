#include <iostream>
#include <vector>

using namespace std;

class Book{
    private:
        int            ID;
        int            year;
        string         name;
        vector<string> author;
        float          price;
        bool           available;
    public:
        Book(int ID, int year, string name, vector<string> author, float price, bool available);
        Book();
        ~Book();
        Book(Book &b);
        
        void setID       (int            ID);
        void setYear     (int            year);
        void setName     (string         name);
        void setAuthor   (vector<string> author);
        void setPrice    (float          price);
        void setAvailable(bool           available);
        
        int            getID();
        int            getYear();
        string         getName();
        vector<string> getAuthor();
        float          getPrice();
        bool           getAvailable();
        
        void display();
};