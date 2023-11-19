#pragma once
#include "E_Book.h"

namespace BookNamespace{

class Book : public E_BookNamespace::E_Book{
    private:
        static int bookCount;
        int   ID;
        int   year;
        char  name[64];
        char* author;
    protected:
        int isPrinted;
    public:
        Book(int year, char *name, char *author);
        Book();
        ~Book();
        
        Book(const Book &b);
        Book(Book &&b);
        
        Book& operator=(const Book &b);
        Book& operator=(Book &&b);
        
        void setYear     (int   year);
        void setName     (char  *name);
        void setAuthor   (char  *author);
        
        int   getBookCount();
        int   getYear();
        char* getName();
        char* getAuthor();
        
        void addAuthor(char* author);
        
        virtual void getPrinted() override;
        virtual void getOnline() override;

        virtual float getPrice() override;
        virtual void display() override;
        
        void displaySummary();
};

}
