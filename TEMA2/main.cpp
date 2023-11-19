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
    
    std::cout<<"----- Copy operator -----"<<std::endl;
    
    Book b1;
    b1 = noapte;
    b1.setName((char*)"O noapte frumoasa");
    b1.display();
    noapte.display();
    
    std::cout<<"----- Move operator -----"<<std::endl;
     
    Book b2;
    b2 = Book(enigma);
    b2.setName((char*)"Enigma Mihaelei");
    b2.display();
    enigma.display();    
    
    std::cout<<"----- Inheritance -----"<<std::endl;
    
    E_Book &noapteS = noapte;
    noapte.display();
    noapteS.display();
    
    HorrorBook dracula(1897, (char*)"Dracula", (char*)"Bram Stoker", 'H', (char*)"Violence, Blood");
    Book &draculaS = dracula;
    HorrorBook &dracula2 = dracula;
    dracula.display();
    dracula2.display();
    draculaS.display();
    
    SchoolBook fizica(2012, (char*)"Fizica", (char*)"Anca Udrescu", 11);
    fizica.display();
    
    std::cout<<"----- Ending -----"<<std::endl;
    
    return 0;
}
