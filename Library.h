/**
 * @file Library.h
 * @author Sam Emison + Cole Belew
 * @date 2024-11-08
 * @brief Class file for library
 * 
 * Holds all of the functions for Library
 */

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


/**
 * Contains the class and the functions for the library. How it works
 *
 * @class Library Library.h "Library/Library.h"
 * @brief 
 *
 */
class Library {
 private:
  Book* head;

 public:
  Library(); //Constructor
  ~Library(); //Destructor

  //Functionality to manage the books

/**
 * Inserts the books into a sorted order by last name
 *
 * @param const std::string &title 
 * @param const std::string &author 
 * @param const std::string &isbn 
 * @param int pages 
 * @param float price 
 * @param int year 
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void insert_sorted(const std::string &title, const std::string &author, const std::string &isbn, int pages, float price, int year);


/**
 * Finds the title based on via author name
 *
 * @param const std::string &title 
 * @pre 
 * @return void 
 * @post Returns the authors name
 * 
 */
  void find_album(const std::string &title) const;


/**
 * Finds the authors name via title of the book
 *
 * @param const std::string &author 
 * @pre 
 * @return void 
 * @post Returns the authors name
 * 
 */
  void find_author(const std::string &author) const;


/**
 * Deletes a book from the selection
 *
 * @param const std::string &author 
 * @param const std::string &title 
 * @pre 
 * @return bool 
 * @post Book is deleted
 * 
 */
  bool deleteBook(const std::string &author, const std::string &title);


/**
 * Writes the list of books to a file
 *
 * @param const std::string &filename 
 * @pre 
 * @return bool 
 * @post Writes to file of users choice
 * 
 */
  bool write_to_file(const std::string &filename) const;


/**
 * Reads books from a file and adds them into the sort
 *
 * @param const std::string &filename 
 * @pre 
 * @return bool 
 * @post Takes in the data from the file and adds it its list
 * 
 */
  bool read_from_file(const std::string &filename);


/**
 * Prints the list into the terminal
 *
 * @pre 
 * @return void 
 * @post Prints the list 
 * 
 */
  void print() const;
};

#endif //LIBRARY_H
