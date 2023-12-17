#include "Book.h"
#include "Library.h"

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

Book::Book(char *name){
    cout<<"Book constructor called!"<<endl;
    strcpy(this->name, name);
}

Book::Book(const Book &b){
    cout<<"Copy constructor called!"<<endl;
    strcpy(this->name, b.name);
}

Book::Book(Book &&b){
    cout<<"Move constructor called!"<<endl;
    strcpy(this->name, b.name);
}

Book::~Book(){
    cout<<"Book destructor called"<<endl;
}

Book::Book(){}

Book& Book::operator=(const Book &b){
    cout<<"Copy assignment called!"<<endl;
    strcpy(this->name, b.name);
    return *this;
}

Book& Book::operator=(Book &&b){
    cout<<"Move assignment called!"<<endl;
    strcpy(this->name, b.name);
    return *this;
}


void Book::display(){
    cout<<"Cartea "<<name<<endl;
}

void Book::setName(char* name){
    strcpy(this->name, name);
}
