#pragma once
#include "Book.h"

namespace HorrorBookNamespace {

class HorrorBook : public BookNamespace::Book{
    private:
        char rating;
        char *warning; 
    public:
        HorrorBook(int year, char *name, char *author, char rating, char *warning);
        
        void display() override;
        void displayWarnings();
};

}


