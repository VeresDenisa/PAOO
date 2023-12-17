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
    
    shared_ptr<Book> fizica = std::make_shared<Book> ((char*)"Fizica");
    shared_ptr<Book> enigma = std::make_shared<Book> ((char*)"Enigma Otiliei");
    
    shared_ptr<Library> library = std::make_shared<Library> ((char*)"Carturesti");
    
    std::cout<<"Shared pointer use count: "<<library.use_count()<<std::endl;
    
    enigma->l = library;
    library->love = enigma;
    
    std::cout<<"Shared pointer use count: "<<library.use_count()<<std::endl;
    
    fizica->l = library;
    library->hate = fizica;
    
    std::cout<<"Shared pointer use count: "<<library.use_count()<<std::endl;
    
    std::cout<<"----- Threads -----"<<std::endl;
    
    library->requestBook((char*)"Fizica");
    library->requestBook((char*)"Matematica");
    library->requestBook((char*)"Povesti");
    library->requestBook((char*)"Basme");
       
    sleep(4);
    
    std::cout<<"----- Finished Threads -----"<<std::endl; 
    
    fizica.reset();
    enigma.reset();
    
    std::cout<<"Shared pointer use count: "<<library.use_count()<<std::endl;
    
    library.reset();
    std::cout<<"Shared pointer use count: "<<library.use_count()<<std::endl;
    
    std::cout<<"----- Ending -----"<<std::endl; 
    return 0;
}
