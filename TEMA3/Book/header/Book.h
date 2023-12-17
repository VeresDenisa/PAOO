#pragma once
#include "Library.h"
#include <memory>

class Library;

class Book{
    private:
        char name[64];
    public:
        std::shared_ptr<Library> l;
        
        Book(char *name);
        Book();
        ~Book();
        
        Book(const Book &b);
        Book(Book &&b);
        
        Book& operator=(const Book &b);
        Book& operator=(Book &&b);
        
        void setName(char *name);   
       
        void display();
};

