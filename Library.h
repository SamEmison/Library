#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <iostream>

struct Book {
  std::string title;
  std::string author;
  std::string isbn;
  int pages;
  float price;
  int year;
  Book* next;

  //Constructor to initialize a Book
  Book(const std::string &title, const std::string &author, const std::string &isbn, int pages, float price, int year, Book* next = nullptr)
        : title(title), author(author), isbn(isbn), pages(pages), price(price), year(year), next(next) {}
};

class Library {
 private:
  Book* head;

 public:
  Library(); //Constructor
  ~Library(); //Destructor

  //Functionality to manage the books
  void instert_sorted(const std::string &title, const std::string &author, std::string &isbn, int pages, float price, int year);
  std::string findTitle(const std::string &title) const;
  void findAuthor(const std::string &author) const;
  bool deleteBook(const std::string &author, const std::string &title);
  bool write_to_file(const std::string &filename) const;
  bool read_from_file(const std::string &filename);
  void print() const;
};

#endif //LIBRARY_H
