#include "Book.h"

#include <iostream>

int main()
{
    Book noapte(1879, (char*)"O noapte furtunoasa", (char*)"I.L.Caragiale", 34.89, false);
    Book enigma(1938, (char*)"Enigma Otiliei", (char*)"George Calinescu", 50.00, true);
    Book morometi(1955, (char*)"Morometii", (char*)"Marin Preda", 25.00, true);
    
    noapte.display();
    enigma.display();
    morometi.display();
    
    morometi.addAuthor((char*)" Mircea Vladimirescu"); 
    morometi.display();
    
    Book b1 = noapte;
    b1.display();
    b1.setName((char*)"O noapte frumoasa");
    b1.setAuthor((char*)"Ardelean Ioan");
    noapte.display();
    b1.display();
     
    Book b2(enigma);
    b2.display();
    b1.setName((char*)"Enigma Mihaelei");
    b2.setYear(2023);
    enigma.display();
    b2.display();
    
    Book b3(std::move(morometi));
    b3.display();
    //morometi.display();
    
    return 0;
}
