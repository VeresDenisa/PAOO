#include "Library.h"
#include "Book.h"

#include <iostream>
#include <cstring>
#include <mutex>
#include <unistd.h>

using std::cout;
using std::endl;

std::mutex libraryMutex;

void* Library::task(void* book){
    libraryMutex.lock();
    
    usleep(rand()%1000000);
    cout<<(char*)book<<endl;
    
    libraryMutex.unlock();
    return NULL;
}

void Library::requestBook(char* bookName){
    pthread_t thread;
    pthread_create(&thread, NULL, task, bookName);
    pthread_detach(thread);
}

Library::Library(char *name){
    cout<<"Constructor called!"<<endl;
    strcpy(this->name, name);
}

Library::~Library(){
    cout<<"Destructor called"<<endl;
}

Library::Library(){}

