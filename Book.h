/**
 * @file Book.h
 * @author Sam Emison + Cole Belew
 * @date 2024-11-07
 * @brief Class for Book
 * .
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



/**
 * Gets the title of the book
 *
 * @pre 
 * @return std::string 
 * @post Returns the title
 * 
 */
  std::string getTitle() const;
  

/**
 * Gets the author's name
 *
 * @pre 
 * @return std::string 
 * @post Returns the authors name
 * 
 */
  std::string getAuthor() const;
  

/**
 * Gets the pages
 *
 * @pre 
 * @return int 
 * @post Returns pages
 * 
 */
  int getPages() const;
  

/**
 * Gets the isbn number
 *
 * @pre 
 * @return std::string 
 * @post Returns the isbn
 * 
 */
  std::string getISBN() const;
  

/**
 * Gets the price of the book
 *
 * @pre 
 * @return float 
 * @post Returns the price
 * 
 */
  float getCoverPrice() const;
  

/**
 * Gets the year the book was published
 *
 * @pre 
 * @return int 
 * @post Returns the year
 * 
 */
  int getYear() const;


/**
 * Sets the title of the book
 *
 * @param const std::string& title 
 * @pre 
 * @return void 
 * @post Ensures it doesnt change
 * 
 */
  void setTitle(const std::string& title);


/**
 * Sets the author of the book
 *
 * @param const std::string& author 
 * @pre 
 * @return void 
 * @post Ensures it doesnt change 
 * 
 */
  void setAuthor(const std::string& author);


/**
 * Sets the page numbers of the book
 *
 * @param int pages 
 * @pre 
 * @return void 
 * @post Ensures it doesnt change
 * 
 */
  void setPages(int pages);


/**
 * Sets the isbn number of the book
 *
 * @param const std::string& isbn 
 * @pre 
 * @return void 
 * @post Ensures it doesnt change
 * 
 */
  void setISBN(const std::string& isbn);


/**
 * Sets the price of the book
 *
 * @param float coverPrice 
 * @pre 
 * @return void 
 * @post Ensures it doesnt change
 * 
 */
  void setCoverPrice(float coverPrice);


/**
 * Sets the year the book was published
 *
 * @param int year 
 * @pre 
 * @return void 
 * @post Ensures it doesnt change
 * 
 */
  void setYear(int year);
};

#endif // BOOK_H
