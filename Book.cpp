#include "Book.h"

//Constructor
Book::Book(const std::string& title, const std::string& author, int pages, const std::string& isbn, float coverPrice, int year)
  : title(title), author(author), pages(pages), isbn(isbn), coverPrice(coverPrice), year(year) {}

//Getters
std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
int Book::getPages() const { return pages; }
std::string Book::getISBN() const { return isbn; }
float Book::getCoverPrice() const { return coverPrice; }
int Book::getYear() const { return year; }

//Setters
void Book::setTitle(const std::string& title) { this->title = title; }
void Book::setAuthor(const std::string& author) { this->author = author; }
void Book::setPages(int pages) { this->pages = pages; }
void Book::setISBN(const std::string& isbn) { this->isbn = isbn; }
void Book::setCoverPrice(float coverPrice) { this->coverPrice = coverPrice; }
void Book::setYear(int year) { this->year = year; }
