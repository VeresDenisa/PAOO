#pragma once

namespace E_BookNamespace{

class E_Book{
    public:
        virtual void getPrinted() = 0;
        virtual void getOnline() = 0;

        virtual float getPrice() = 0;
        virtual void display() = 0;
};

}