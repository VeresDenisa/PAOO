#pragma once
#include "Book.h"
#include <memory>

class Book;

void goToLibrary(int id);

class Library{
    private:
        char name[100];
        
        static void* task(void* book);
    public:
        std::unique_ptr<Book> b;
        
        void requestBook(char* bookName);
        
        Library(char *name);
        Library();
        ~Library();
};

