#include "Book.h"

int main()
{
    Book first(5, 1879, "O noapte furtunoasa", {"I.L.Caragiale"}, 34.89, false);
    Book second(first);
    
    first.display();
    second.display();
    
    return 0;
}
