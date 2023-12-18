#pragma once
#include "Book.h"
#include <memory>
#include <mutex>

class Book;

class Library{    
    private:
        char name[100];
        
        static void* task(void* book);
    public:
        std::weak_ptr<Book> hate;
        std::weak_ptr<Book> love;
        
        void requestBook(char* bookName);
        
        Library(char *name);
        Library();
        ~Library();
};

