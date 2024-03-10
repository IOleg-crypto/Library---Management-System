#include "cpp_libraries.h"
#include "functions.h"
#include "vars.h"
#define DEBUG_MEMORY 1

#ifndef DEBUG_MEMORY 0 // DEBUG_MEMORY == 0
void *operator new(size_t size)
{
    std::cout << "Allocating " << size << " bytes of memory";
    void *ptr = malloc(size);
    return ptr;
}
void operator delete(void *ptr)
{
    std::cout << "Freeing memory";
    free(ptr);
}
#endif

void Book::SetAuthor()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter the name of the author : ";
    std::getline(std::cin, author);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << std::endl;
}
void Book::getAuthor()
{
    std::cout << "The name of the author is : " << author << std::endl;
}
void Book::SetShelf()
{
    std::cout << "Enter the shelf number : ";
    std::cin >> shelf;
    std::cout << std::endl;
}
void Book::getShelf()
{
    std::cout << "The shelf number is : " << shelf << std::endl;
}
void Book::setBook()
{
    std::cout << "Enter the name of the book : ";
    std::cin >> name;
    std::cout << std::endl;
}
void Book::getBook()
{
    std::cout << "The name of the book is : " << name << std::endl;
}

void Book::PrintBook()
{

    std::cout << "Do you want add more books? (y/n) : ";
    std::cin >> add_more;

    switch (add_more)
    {
    case 'y':
        std::cout << "How to many books do you want to add : ";
        std::cin >> number_books;

        for (int i = 0; i < number_books; i++)
        {
            setBook();
            SetShelf();
            SetAuthor();
            getBook();
            getAuthor();
            getShelf();
            PrintBook();
            std::cout << std::endl;
        }
        break;
    case 'n':
        std::cout << "See you next time! Goodbye";
        exit(0);
        break;
    default:
        break;
    }
}

int main()
{
    Book *book = new Book();
    std::cout << "-----------------------Welcome to our library------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "Do you want some books? (y/n) : ";
    std::cin >> checker;
    switch (checker)
    {
    case 'y':
        book->setBook();
        book->SetShelf();
        book->SetAuthor();
        book->getBook();
        book->getAuthor();
        book->getShelf();
        book->PrintBook();
        break;
    case 'n':
        std::cout << "See you next time! Goodbye";
        exit(0);
        break;
    default:
        break;
    }
}