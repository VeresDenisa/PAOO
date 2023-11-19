#include "Manga.h"

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

using namespace MangaNamespace;


Manga::Manga(int noPages){
    cout<<"Constructor called! A manga has been created."<<endl;
    
    this->noPages   = 0;
    this->isPrinted = 0;
}


float Manga::getPrice(){
    float price = 100.00;
    if(this->noPages > 20) price = 40.00;
    else price = 20.00;
    return price;
}

void Manga::getPrinted(){
    isPrinted = 1;
}

void Manga::getOnline(){
    isPrinted = 0;
}

void Manga::display(){
    if(isPrinted){
        cout<<"There is a printed manga being displayed. It has "<<this->noPages<<" pages."<<endl;
    } else {
        cout<<"There is an online manga being displayed. It has "<<this->noPages<<" pages."<<endl;
    }   
}


void Manga::setNoPages(int noPages){
    this->noPages = noPages;
}
