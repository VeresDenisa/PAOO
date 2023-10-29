#include "Book.h"

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int Book::bookCount = 0;

Book::Book(int year, char *name, char *author, float price, bool available){
    cout<<"Constructor called!"<<endl;
    
    bookCount++;
    cout<<"Book count: "<<bookCount<<endl;
    
    this->author = new char[strlen(author)+1];
    strcpy(this->author, author);
    strcpy(this->name, name);
    this->ID        = bookCount;
    this->year      = year;
    this->price     = price;
    this->available = available;
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
    this->price     = b.price;
    this->available = b.available;
}

Book::Book(Book &&b){
    cout<<"Move constructor called!"<<endl;
    cout<<"Book count: "<<bookCount<<endl;
    
    strcpy(this->name, b.name);
    this->ID        = b.ID;
    this->author    = b.author;
    this->year      = b.year;
    this->price     = b.price;
    this->available = b.available;   
    b.author  = nullptr;
    b.name[0] = '\0';
    b.ID      = 0;
    b.year    = 0;
    b.price   = 0.0;
    b.available = false;
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


void Book::addAuthor(char* author){
    char *newAuthor = new char[strlen(this->author)+strlen(author)+2];
    strcpy(newAuthor, this->author);
    delete[] this->author;
    this->author = newAuthor;
    strcat(this->author, (char*)",");
    strcat(this->author, author);
}

void Book::display(){
    if(author != nullptr){
        cout<<ID<<". "<<name<<" de "<<author<<" in "<< year<<" -> "<<price<<" RON";
        if(available) cout<<" -- AVAILABLE";
        else cout<<" -- UNAVAILABLE";
        cout<<endl;
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

float Book::getPrice(){
    return price;
}

bool Book::getAvailable(){
    return available;
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

void Book::setPrice(float price){
    this->price = price;
}

void Book::setAvailable(bool available){
    this->available = available;
}
