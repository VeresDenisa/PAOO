#include "SchoolBook.h"

#include <iostream>
#include <cstring>

using namespace SchoolBookNamespace;
using namespace BookNamespace;

SchoolBook::SchoolBook(int year, char *name, char *author, int clasa): Book(year, name, author){
    std::cout<<"Constructor called! A school book was created."<<std::endl;
   
    this->clasa = clasa;
}

void SchoolBook::display(){
    Book::display();
    
    std::cout<<"Class: "<<this->clasa<<std::endl;
}
