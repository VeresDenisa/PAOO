#include "Library.h"
#include "Book.h"

#include <iostream>
#include <cstring>
#include <mutex>
#include <unistd.h>
#include <thread>

using std::cout;
using std::endl;

std::mutex libraryMutex;

void* Library::task(void* book){
    libraryMutex.lock();
    
    cout<<"Customer no "<<std::this_thread::get_id()<<" enters the library and  requests  book "<<(char*)book<<endl;
    int time = rand()%1000000;
    usleep(time);
    cout<<"Customer no "<<std::this_thread::get_id()<<" exits  the library after "<<time<<"ms with book "<<(char*)book<<endl;
    
    libraryMutex.unlock();
    return NULL;
}

void Library::requestBook(char* bookName){
    pthread_t thread;
    pthread_create(&thread, NULL, task, bookName);
    pthread_detach(thread);
}

Library::Library(char *name){
    cout<<"Library constructor called!"<<endl;
    strcpy(this->name, name);
}

Library::~Library(){
    cout<<"Library destructor called"<<endl;
}

Library::Library(){}

