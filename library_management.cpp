#include "cpp_libraries.h"
#include "functions.h"
#include "vars.h"

void Book::addBook()
{
    std::cout << "Enter the name of the book : ";
    std::cin >> name;
    std::cout << "\nEnter the name of the author : ";
    std::cin >> author;
    std::cout << "\nEnter the shelf number : ";
    std::cin >> shelf;
}

void Book::PrintBook(Book *p)
{
    Book *book = &*p;

    std::cout << "The name of the book is : " << p->name << std::endl;
    std::cout << "The name of the author is : " << p->author << std::endl;
    std::cout << "The shelf number is : " << p->shelf << std::endl;

    std::cout << "Do you want add more books? (y/n) : ";
    std::cin >> add_more;

    switch (add_more)
    {
    case 'y':
        std::cout << "How to many books do you want to add : ";
        std::cin >> number_books;

        for (int i = 0; i < number_books; i++)
        {
            addBook();
            std::cout << '\n'
                      << std::endl;
            PrintBook(book);
        }

        break;

    case 'n':
        std::cout << "See you next time! Goodbye";
        break;
    default:
        break;
    }
}

int main()
{
    Book *book = new Book();
    std::cout << "-----------------------Welcome to our library------------------------------" << std::endl;
    std::cout << "Do you want some books? (y/n) : ";
    std::cin >> checker;
    switch (checker)
    {
    case 'y':
        book->addBook();
        book->PrintBook(book);
        break;
    case 'n':
        std::cout << "See you next time! Goodbye";
        break;
    default:
        break;
    }

    delete book;
}