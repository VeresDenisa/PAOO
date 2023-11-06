#include "Book.h"

#include <iostream>

namespace firstBookStore{
    void display(){
        std::cout<<"FIRST namespace"<<std::endl;
    }
}

using namespace firstBookStore;

int main(int argc, char* argv[])
{
    Book noapte(1879, (char*)"O noapte furtunoasa", (char*)"I.L.Caragiale", 34.89, false);
    Book enigma(Book(1938, (char*)"Enigma Otiliei", (char*)"George Calinescu", 50.00, true));
    Book morometi(1955, (char*)"Morometii", (char*)"Marin Preda", 25.00, true);
    
    firstBookStore::display();
    
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
