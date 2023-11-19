#pragma once
#include "E_Book.h"

namespace MangaNamespace{

class Manga : public E_BookNamespace::E_Book{
        int noPages;
        int isPrinted;
    public:
        Manga(int noPages);
        
        void getPrinted() override;
        void getOnline() override;

        float getPrice() override;
        void display() override;

        void setNoPages(int noPages);
};

}