#include "Book.h"

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

using namespace BookNamespace;

int Book::bookCount = 0;

Book::Book(int year, char *name, char *author){
    cout<<"Constructor called!"<<endl;
    
    bookCount++;
    cout<<"Book count: "<<bookCount<<endl;
    
    this->author = new char[strlen(author)+1];
    strcpy(this->author, author);
    strcpy(this->name, name);
    this->ID        = bookCount;
    this->year      = year;

    this->isPrinted = 0;
}

Book::Book(const Book &b){
    cout<<"Copy constructor called!"<<endl;
    
    bookCount++;
    cout<<"Book count: "<<bookCount<<endl;
    
    this->author = new char[strlen(b.author)+1];
    strcpy(this->author, b.author);
    strcpy(this->name, b.name);
    this->ID        = bookCount;
    this->year      = b.year;
    this->isPrinted = b.isPrinted;
}

Book::Book(Book &&b){
    cout<<"Move constructor called!"<<endl;
    cout<<"Book count: "<<bookCount<<endl;
    
    strcpy(this->name, b.name);
    this->ID        = b.ID;
    this->author    = b.author;
    this->year      = b.year; 
    this->isPrinted = b.isPrinted; 
    b.author  = nullptr;
}

Book::~Book(){
    if(author == nullptr)
    	cout<<"Destructor called for NULL!"<<endl;
    else {
    	cout<<"Destructor called for "<<ID<<". "<<name<<"!"<<endl;
    	bookCount--;
    }
    cout<<"Book count: "<<bookCount<<endl;
    delete[] this->author;
}

Book::Book(){}

Book& Book::operator=(const Book &b){
    cout<<"Copy assignment called!"<<endl;
    
    bookCount++;
    cout<<"Book count: "<<bookCount<<endl;
    
    this->author = new char[strlen(b.author)+1];
    strcpy(this->author, b.author);
    strcpy(this->name, b.name);
    this->ID        = bookCount;
    this->year      = b.year;
    this->isPrinted = b.isPrinted;
    
    return *this;
}

Book& Book::operator=(Book &&b){
    cout<<"Move assignment called!"<<endl;
    cout<<"Book count: "<<bookCount<<endl;
    
    strcpy(this->name, b.name);
    this->ID        = b.ID;
    this->author    = b.author;
    this->year      = b.year; 
    this->isPrinted = b.isPrinted;
    b.author  = nullptr;

    return *this;
}


void Book::addAuthor(char* author){
    char *newAuthor = new char[strlen(this->author)+strlen(author)+2];
    strcpy(newAuthor, this->author);
    delete[] this->author;
    this->author = newAuthor;
    strcat(this->author, (char*)",");
    strcat(this->author, author);
}

float Book::getPrice(){
    float price;
    if(this->year < 1950) price = 50.00;
    else price = 25.00;
    return price;
}

void Book::getPrinted(){
    isPrinted = 1;
}

void Book::getOnline(){
    isPrinted = 0;
}

void Book::display(){
    if(author != nullptr){
        cout<<ID<<". "<<name<<" de "<<author<<" in "<< year<<endl;
    } else {
        cout<<"UNKNOWN BOOK"<<endl;
    }   
}

void Book::displaySummary(){
    if(author != nullptr){
        cout<<ID<<". "<<name<<endl;
    } else {
        cout<<"UNKNOWN BOOK"<<endl;
    }   
}


int Book::getBookCount(){
    return bookCount;
}

int Book::getYear(){
    return year;
}

char* Book::getName(){
    return name;
}

char* Book::getAuthor(){
    return author;
}


void Book::setYear(int year){
    this->year = year;
}

void Book::setName(char* name){
    strcpy(this->name, name);
}

void Book::setAuthor(char* author){
    strcpy(this->author, author);
}
