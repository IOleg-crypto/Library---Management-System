#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "cpp_libraries.h"

class Book
{
public:
    std::string name;
    std::string author;

    // special strings
    std::istringstream ss;
    int shelf = 0;

    void setBook();
    void SetAuthor();
    void SetShelf();
    void getAuthor();
    void getShelf();
    void getBook();
    void PrintBook();
};
#endif
