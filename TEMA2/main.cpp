#include "E_Book.h"
#include "Book.h"
#include "HorrorBook.h"
#include "SchoolBook.h"
#include "Manga.h"

#include <iostream>

using namespace BookNamespace;
using namespace HorrorBookNamespace;
using namespace E_BookNamespace;
using namespace MangaNamespace;
using namespace SchoolBookNamespace;

int main(int argc, char* argv[])
{
    std::cout<<"----- Initialization -----"<<std::endl;

    Book noapte(1879, (char*)"O noapte furtunoasa", (char*)"I.L.Caragiale");
    Book enigma(Book(1938, (char*)"Enigma Otiliei", (char*)"George Calinescu"));
    Book morometi(1955, (char*)"Morometii", (char*)"Marin Preda");
    
    noapte.display();
    enigma.display();
    morometi.display();
    
    std::cout<<"----- Copy assignment -----"<<std::endl;
    
    Book b1;
    b1 = noapte;
    b1.setName((char*)"O noapte frumoasa");
    b1.display();
    noapte.display();
    
    std::cout<<"----- Move assignment -----"<<std::endl;
     
    Book b3 = Book(std::move(enigma)); 
    b3.setName((char*)"Enigma Teodorei");
    b3.display();
    enigma.display();  
    
    Book b2;
    b2 = Book(b3);
    b2.setName((char*)"Enigma Mihaelei");
    b2.display();
    b3.display();   
    
    std::cout<<"----- Inheritance -----"<<std::endl;
    
    SchoolBook fizica(2012, (char*)"Fizica", (char*)"Valentina Udrescu", 11);
    fizica.display();
    
    E_Book &noapteS = noapte;
    noapte.display();
    noapteS.display();
    
    HorrorBook dracula(1897, (char*)"Dracula", (char*)"Bram Stoker", 'H', (char*)"Violence, Blood");
    Book &draculaS = dracula;
    HorrorBook &dracula2 = dracula;
    
    std::cout<<"----- Display with virtual -----"<<std::endl;
    
    dracula.display();
    dracula2.display();
    draculaS.display();
    
    std::cout<<"----- Display without virtual -----"<<std::endl;
    
    dracula.displaySummary();
    dracula2.displaySummary();
    draculaS.displaySummary();
    
    std::cout<<"----- Price virtual -----"<<std::endl;
    
    std::cout<<"Price: "<<dracula.getPrice()<<std::endl;
    std::cout<<"Price: "<<dracula2.getPrice()<<std::endl;
    std::cout<<"Price: "<<draculaS.getPrice()<<std::endl;
    
    std::cout<<"----- Ending -----"<<std::endl;
    
    return 0;
}
