/**
 * @file Book.h
 * @author Sam Emison + Cole Belew
 * @date 2024-11-07
 * @brief Class for Book
 * 
 * Stated in class definition
 */

#ifndef BOOK_H
#define BOOK_H

#include <string>


/**
 * Class for getting the information on the books
 *
 * @class BOOK Book.h "Library/Book.h"
 * @brief 
 *
 */
class BOOK {
 private:
  std::string title;
  std::string author;
  int pages;
  std::string isbn;
  float coverPrice;
  int year;

 public:
  //Constructor
  Book(const std::string& title, const std::string& author, std::string& pages, const std::string isbn, float coverPrice, int year);


  std::string getTitle() const;
  std::string getAuthor() const;
  int getPages() const;
  std::string getISBN() const;
  float getCoverPrice() const;
  int getYear() const;

  void setTitle(const std::string& title);
  void setAuthor(const std::string& author);
  void setPages(int pages);
  void setISBN(const std::string& isbn);
  void setCoverPrice(float coverPrice);
  void setYear(int year);
};

#endif // BOOK_H
