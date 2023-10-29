#pragma once

class Book{
    private:
        int   year;
        char  name[64];
        char* author;
        float price;
        bool  available;
    public:
        Book(int year, char *name, char *author, float price, bool available);
        Book(const Book &b);
        Book(Book &&b);
        ~Book();
        
        void setYear     (int   year);
        void setName     (char  *name);
        void setAuthor   (char  *author);
        void setPrice    (float price);
        void setAvailable(bool  available);
        
        int   getYear();
        char* getName();
        char* getAuthor();
        float getPrice();
        bool  getAvailable();
        
        void addAuthor(char* author);
        
        void display();
};
