#include "E_Book.h"
#include "Book.h"
#include "HorrorBook.h"
#include "SchoolBook.h"
#include "Manga.h"

#include <iostream>
#include <memory>

using std::unique_ptr;
using std::shared_ptr;
using std::weak_ptr;

using namespace BookNamespace;
using namespace HorrorBookNamespace;
using namespace E_BookNamespace;
using namespace MangaNamespace;
using namespace SchoolBookNamespace;

int main(int argc, char* argv[])
{
    std::cout<<"----- Initialization -----"<<std::endl;
    
    SchoolBook fizica(2012, (char*)"Fizica", (char*)"Valentina Udrescu", 11);
    Book enigma(Book(1938, (char*)"Enigma Otiliei", (char*)"George Calinescu"));
    
    std::cout<<"----- Smart Pointers -----"<<std::endl;
    std::cout<<"----- Unique Pointer -----"<<std::endl;
    
    unique_ptr<HorrorBook> dracula(new HorrorBook(1897, (char*)"Dracula", (char*)"Bram Stoker", 'H', (char*)"Violence, Blood"));
    dracula->display();
    
    unique_ptr<HorrorBook> dracula2;
    dracula2 = std::move(dracula);
    dracula2->display();
    
    std::cout<<"----- Shared Pointer -----"<<std::endl;
    
    shared_ptr<Book> noapte(new Book(1879, (char*)"O noapte furtunoasa", (char*)"I.L.Caragiale"));
    noapte->display();
    
    shared_ptr<Book> noapte2;
    noapte2 = noapte;
    noapte->display();
    noapte2->display();
    
    std::cout<<"----- Weak Pointer -----"<<std::endl;
    
    shared_ptr<Book> morometi(new Book(1955, (char*)"Morometii", (char*)"Marin Preda"));
    morometi->display();
    
    weak_ptr<Book> morometi2(morometi);
    morometi->display();
    
    std::cout<<"----- Ending -----"<<std::endl;
    
    return 0;
}
