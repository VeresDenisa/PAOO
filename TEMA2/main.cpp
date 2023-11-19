#include "Book.h"

#include <iostream>


int main(int argc, char* argv[])
{
    Book noapte(1879, (char*)"O noapte furtunoasa", (char*)"I.L.Caragiale");
    Book enigma(Book(1938, (char*)"Enigma Otiliei", (char*)"George Calinescu"));
    Book morometi(1955, (char*)"Morometii", (char*)"Marin Preda");
    
    noapte.display();
    enigma.display();
    morometi.display();
    
    Book b1;
    b1 = noapte;
    b1.setName((char*)"O noapte frumoasa");
    b1.display();
    noapte.display();
     
    Book b2;
    b2 = Book(enigma);
    b2.setName((char*)"Enigma Mihaelei");
    b2.display();
    enigma.display();    
    
    return 0;
}
