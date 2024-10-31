#include "Book.h"

Products::Fun::Book::Book()
{
    author = "undefined";
    genre = "undefined";
    pages = 0;
}

Products::Fun::Book::Book(string name, string author, float price, string manufacturer, string genre, int pages, int age):Product( name,  price,  manufacturer,  age)
{
    this->author = author;
    this->genre = genre;
    this->pages = pages;
}

void Products::Fun::Book::setAuthor(string author)
{
    this->author = author;
}

void Products::Fun::Book::setGenre(string genre)
{
    this->genre = genre;
}

void Products::Fun::Book::setPages(int pages)
{
    this->pages = pages;
}

string Products::Fun::Book::getAuthor() const
{
    return author;
}

string Products::Fun::Book::getGenre() const
{
    return genre;
}

int Products::Fun::Book::getPages() const
{
    return pages;
}

void Products::Fun::Book::show() const
{
    cout << "\tBook\n";
    cout << "Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Genre: " << genre << endl;
    cout << "Pages: " << pages << endl;
    cout << "Age: " << age << endl;
}

float Products::Fun::Book::calcPrice() const
{
    float total = price;
    if (pages >= 100)
    {
        total += total * ((pages / 100 * 5) / 100.0);
    }
    if (age <= 10)
    {
        total += total * 0.1;
    }
    return total;
}
