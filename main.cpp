/**
 * @file main.cpp
 * @author Sam Emison + Cole Belew
 * @date 2024-11-07
 * @brief Main
 * 
 * The main for the program. Calls functions and provides the interactable part of the program
 */

#include <iostream>
#include "Library.h"

using namespace std;

int main() {
  Library lib;
  //Variables
  int choice;
  string title, author, isbn;
  int pages, year;
  double price;

  do { //Menu for commands
    cout << "\nLibrary System Menu: " << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Display All Books" << endl;
    cout << "3. Find Book Via Author" << endl;
    cout << "4. Find Book Via Title" << endl;
    cout << "5. Delete Book" << endl;
    cout << "6. Read Books from a File" << endl;
    cout << "7. Write Books to File" << endl;
    cout << "8. Exit" << endl;
    cin >> choice;
    cin.ignore();

    switch (choice) { //Start of options
    case 1: //Adds a book
      cout << "Enter Book Title: ";
      getline(cin, title);
      cout << " " << endl;
      
      cout << "Enter Author: ";
      getline(cin, author);
      cout << " " << endl;
      
      cout << "Enter ISBN: ";
      getline(cin, isbn);
      cout << " " << endl;

      cout << "Enter Number of Pages: ";
      cin >> pages;
      cout << " " << endl;

      cout << "Enter Price: ";
      cin >> price;
      cout << " " << endl;

      cout << "Enter Year of Publication: ";
      cin >> year;
      cout << " " << endl;

      lib.insert_sorted(title, author, isbn, pages, price, year);
      cout << "Book added successfully!" << endl;
      break;

    case 2: //Display books
      cout << "\nAll Books in the Library..." << endl;
      lib.print();
      break;

    case 3: //Find book via author
      cout << "Enter Author's Name: ";
      getline(cin, author);
      lib.find_author(author);
      break;

    case 4: //Find book via title
      cout << "Enter Book Title: ";
      getline(cin, title);
      lib.find_album(title);
      break;

    case 5: //Delete Book
      cout << "Enter Author's Name: ";
      getline(cin, author);
      cout << "Enter Book Title: ";
      getline(cin, title);
      if (lib.deleteBook(author, title)) {
	cout << "Book Deleted Successfully!" << endl;
      }
      else{
	cout << "Book Not Found" << endl;
      }
      break;

    case 6: //Read from a file
      {
	string filename;
	cout << "Enter the filename to read from: ";
	cin >> filename;
	if (lib.read_from_file(filename)) {
	  cout << "Book Read from File Successfully!" << endl;
	}
	else {
	  cout << "Error Reading File" << endl;
	}
      }
      break;
      

    case 7: //Write to a file
      {
	string filename;
	cout << "Enter the filename to write to: ";
	cin >> filename;
	if (lib.write_to_file(filename)) {
	  cout << "Books Written to File Successfully!" << endl;
	}
	else {
	  cout << "Error Writing to File" << endl;
	}
      }
      break;

    case 8: //Exit code
      cout << "Exiting the Program... Goodbye!" << endl;
      break;

    default:
      cout << "Invalid Choice... Try Again." << endl;
    }
  } while(choice != 8);

  return 0;
}
