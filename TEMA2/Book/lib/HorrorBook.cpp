#include "HorrorBook.h"

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

using namespace HorrorBookNamespace;
using namespace BookNamespace;

HorrorBook::HorrorBook(int year, char *name, char *author, char rating, char *warning): Book(int year, char *name, char *author){
    cout<<"Constructor called! A horror book was created."<<endl;
    
    this->rating = rating;
    strcpy(this->warning, warning);
}

void HorrorBook::display(){
    Book::display();
    
    cout<<"Rating: "<<this->rating<<endl;
}
void HorrorBook::displayWarnings(){
    cout<<"Warnings: "<<this->warning<<endl;
}
