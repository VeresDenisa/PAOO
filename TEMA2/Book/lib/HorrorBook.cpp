#include "HorrorBook.h"

#include <iostream>
#include <cstring>

using namespace HorrorBookNamespace;
using namespace BookNamespace;

HorrorBook::HorrorBook(int year, char *name, char *author, char rating, char *warning): Book(year, name, author){
    std::cout<<"Constructor called! A horror book was created."<<std::endl;
    
    this->rating = rating;
    this->warning = new char[strlen(warning)+1];
    strcpy(this->warning, warning);
}

void HorrorBook::display(){
    Book::display();
    
    std::cout<<"Rating: "<<this->rating<<std::endl;
}
void HorrorBook::displayWarnings(){
    std::cout<<"Warnings: "<<this->warning<<std::endl;
}
