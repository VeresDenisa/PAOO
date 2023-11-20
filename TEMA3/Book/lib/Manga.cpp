#include "Manga.h"

#include <iostream>
#include <cstring>

using namespace MangaNamespace;

Manga::Manga(int noPages){
    std::cout<<"Constructor called! A manga has been created."<<std::endl;
    
    this->noPages   = 0;
    this->isPrinted = 0;
}


float Manga::getPrice(){
    return (this->noPages > 20)?40.00:20.00;
}

void Manga::getPrinted(){
    isPrinted = 1;
}

void Manga::getOnline(){
    isPrinted = 0;
}

void Manga::display(){
    if(isPrinted){
        std::cout<<"There is a printed manga being displayed. It has "<<this->noPages<<" pages."<<std::endl;
    } else {
        std::cout<<"There is an online manga being displayed. It has "<<this->noPages<<" pages."<<std::endl;
    }   
}


void Manga::setNoPages(int noPages){
    this->noPages = noPages;
}
