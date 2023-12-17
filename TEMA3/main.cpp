#include "Book.h"
#include "Library.h"

#include <iostream>
#include <memory>
#include <unistd.h>

using std::unique_ptr;
using std::shared_ptr;
using std::weak_ptr;


int main(int argc, char* argv[])
{
    std::cout<<"----- Initialization -----"<<std::endl;
    
    Book fizica((char*)"Fizica");
    Book enigma(Book((char*)"Enigma Otiliei"));
    
    shared_ptr<Library> library = std::make_shared<Library> ((char*)"Carturesti");
    enigma.l = library;
    
    library->requestBook((char*)"Fizica");
    library->requestBook((char*)"Matematica");
    library->requestBook((char*)"Povesti");
    library->requestBook((char*)"Basme");
       
    sleep(5);
    
    std::cout<<"----- Ending -----"<<std::endl; 
    return 0;
}
