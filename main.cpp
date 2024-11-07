#include <iostream>
#include "Library.h"

using namespace std;

int main() {
  Library lib;
  int choice;
  string title, author, isbn;
  int pages, year;
  double price;

  do{
    cout << end;
    cout << "Library System Menu: " << endl;
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

    switch (choice) {
    case 1:
      cout << "Enter Book Title: ";
      cin >> title;
      
      cout << "Enter Author: ";
      cin >> author;
      
      cout << "Enter ISBN: ";
      cin >> isbn;

      cout << "Enter Number of Pages: ";
      cin >> pages;

      cout << "Enter Price: ";
      cin >> price;

      cout << "Enter Year of Publication: ";
      cin >> year;

      lib.insert_sorted(title, author, isbn, pages, price, year);
      cout << "Book added successfully!" << endl;
      break;

    case 2:
      cout << "All Books in the Library..." << endl;
      lib.print();
      break;

    case 3:
      cout << "Enter Author's Name: ";
      cin >> author;
      lib.find_author(author);
      break;

    case 4:
      cout << "Enter Book Title: ";
      cin >> title;
      lib.findTitle(title);
      break;

    case 5:
      cout << "Enter Author's Name: ";
      cin >> author;
      cout << "Enter Book Title: ";
      cin >> title;
      if (lib.deleteBook(author, title)) {
	cout << "Book Deleted Successfully!" << endl;
      }
      else{
	cout << "Book Not Found" << endl;
      }
      break;

    case 6:
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

    case 7:
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

    case 8:
      cout << "Exiting the Program... Goodbye!" << endl;
      break;

    default:
      cout << "Invalid Choice... Try Again." << endl;
    }
  } while(choice != 8);

  return 0;
}
