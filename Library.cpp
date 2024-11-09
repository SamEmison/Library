/**
 * @file Library.cpp
 * @author Sam Emison
 * @date 2024-11-08
 * @brief Code for the functions in the library class
 * 
 * Has the code for the functions inside of the library class. Gives it functionality
 */

#include "Library.h"
#include <fstream>


//Constructor
Library::Library() : head(nullptr) {}

//Destructor
Library::~Library() {
  Book* current = head;
  while (current != nullptr) {
    Book* next = current->next;
    delete current;
    current = next;
  }
}


//Insert a book in a order, sorted by author name
void Library::insert_sorted(const std::string &title, const std::string &author, const std::string &isbn, int pages, float price, int year) {
  Book* new_book = new Book(title, author, isbn, pages, price, year);

  if (!head || head-> author > author) {
    new_book->next = head;
    head = new_book;
  }
  else {
    Book* current = head;
    while (current->next && current->next->author < author) {
      current = current->next;
    }

    new_book->next = current->next;
    current->next = new_book;
  }
}


//Find a book via title and return data
void Library::find_album(const std::string &title) const {
  Book* current = head;
  bool found = false;
  while (current) {
    if (current->title == title) {
      std::cout << current->author + " - " + current->isbn + " (" << current->year << ")\n";
      std::cout << "Price: " << current->price << std::endl;
      found = true;
    }
    current = current->next;
  }
  if (!found) {
    std::cout << "No books found with the title " << title << std::endl;
  }
}


//Find books via author and print their title
void Library::find_author(const std::string &author) const {
  Book* current = head;
  bool found = false;
  while (current) {
    if (current->author == author) {
      std::cout << current->title << " - " << current->isbn << " (" << current->year << ")\n";
      std::cout << "Price: " << current->price << std::endl;
      found = true;
    }
    current = current->next;
  }
  if(!found) {
    std::cout << "No books found by " << author << std::endl;
  }
}


//Delete a book via author and title
bool Library::deleteBook(const std::string &author, const std::string &title) {
  if (!head) return false;

  if (head->author == author && head->title == title) {
    Book* temp = head;
    head = head->next;
    delete temp;
    return true;
  }

  Book* current = head;
  while (current->next) {
    if (current->next->author == author && current->next->title == title) {
      Book* temp = current->next;
      current->next = current->next->next;
      delete temp;
      return true;
    }
    current = current->next;
  }

  return false;
}


//Writes the list to a file
bool Library::write_to_file(const std::string &filename) const {
  std::ofstream outfile(filename);
  if (!outfile.is_open()) {
    return false;
  }

  Book* current = head;
  while (current) {
    outfile << current->title << "\n" << current->author << "\n" << current->isbn << "\n";
    outfile << current->pages << "\n" << current->price << "\n" << current->year << "\n";
    
    current = current->next;
  }
  outfile.close();
  return true;
}

//Read books from file
bool Library::read_from_file(const std::string &filename) {
  std::ifstream file(filename);
  if (!file.is_open()) {
    return false;
  }

  std::string title, author, isbn;
  int pages, year;
  float price;
  while(std::getline(file, title) && std::getline(file, author) && std::getline(file, isbn) && file >> pages >> price >> year) {
    file.ignore();
    insert_sorted(title, author, isbn, pages, price, year);
  }

  file.close();
  return true;
}


//Print all books in the library
void Library::print() const {
  Book* current = head;
  while (current) {
    std::cout << "Title: " << current->title << "\n";
    std::cout << "Author: " << current->author << "\n";
    std::cout << "ISBN: " << current->isbn << "\n";
    std::cout << "Pages: " << current->pages << "\n";
    std::cout << "Price: " << current->price << "\n";
    std::cout << "Year: " << current->year << "\n\n";
    current = current->next;
  }
}

