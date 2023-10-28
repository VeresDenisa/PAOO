#include "Book.h"

Book::Book(int ID, int year, string name, vector<string> author, float price, bool available){
    cout<<"Constructor executed!"<<endl;
    this->ID        = ID;
    this->year      = year;
    this->name      = name;
    this->author    = author;
    this->price     = price;
    this->available = available;
}

Book::~Book(){
    cout<<"Destructor executed!"<<endl;
}

Book::Book(Book &b){
    cout<<"Copy constructor executed!"<<endl;
    ID        = b.getID();
    year      = b.getYear();
    name      = b.getName();
    author    = b.getAuthor();
    price     = b.getPrice();
    available = b.getAvailable();
}

int Book::getID(){
    return ID;
}

int Book::getYear(){
    return year;
}

string Book::getName(){
    return name;
}

vector<string> Book::getAuthor(){
    return author;
}

float Book::getPrice(){
    return price;
}

bool Book::getAvailable(){
    return available;
}

void Book::display(){
    cout<<ID<<". "<<name<<" de ";
    for(int i = 0; i < author.size() - 1; i++)
        cout<<author[i]<<", ";
    cout<<author[author.size()-1]<<" in "<< year<<" -> "<<price<<" RON";
    if(available) cout<<" -- AVAILABLE";
    else cout<<" -- UNAVAILABLE";
    cout<<endl;
}