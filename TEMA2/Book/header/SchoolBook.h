#pragma once
#include "Book.h"

namespace SchoolBookNamespace {

class SchoolBook : public BookNamespace::Book{
    private:
        int clasa;
    public:
        SchoolBook(int year, char *name, char *author, int clasa);
        
        void display() override;
};

}


