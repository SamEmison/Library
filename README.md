/**
 * @file README.md
 * @author Sam Emison adn Cole Belew
 * @date 2024-11-06
 * @brief Library Assignment
 * 
 * A program that sorts a set of books as a digital library. It sorts by last name and has a variety of funtions
 */

This program allows for the user to do a variety of funtions that would be helpful for a library of books.
When the user runs make, the executable will be ./test.
Upon running ./test the user will be prompted with a list of commands that can be run.

1. Add a Book
        Simply asks for information about the book and sorts it into the list.
2. Display Books
        Prints books into the terminal for the user to see
3. Find Book Via Author
        Asks for the user to input an author and will find the book associated with them and display its data.
4. Find Book Via Title
   	Asks the user to input the title and it will find the author and display the books data.
5. Delete Book
        Asks the user to input the author and title, checks if the book is present and then deletes it.
6. Read The Books From a File
   	Asks the user to input a file, then reads from the file and sorts the books
7. Write Books to File
   	Writes the books to a file. Reccommend command 2 before to check books beforehand.
8. Exits program
   	 Just simply exits

Included in the file is a book.txt file that contains 2 books.
Any .txt file can be used as long as it contains this format (With no space in between books)

The Catcher in the Rye
J.D. Salinger
1234567890
277
9.99
1951
To Kill a Mockingbird
Harper Lee
0987654321
324
7.99
1960

Which uses this as the format:
(Title)
(Author; Last Name, First Name)
(ISBN Number) (Reads as a string so can contain dashes)
(Page Number)
(Price)
(Year Published)

Review of work:
We personally think that the code went pretty smoothly. A lot of code was repurposed from Sam's previous assingment so we really just had to get that to work for this format. Overall it didn't take long to come up with a working build.

Challenges:
The biggest challenge we ended up facing was getting the code to write and print the same way. We ended up having the code for printing to be right but we had left out a piece of code for writing which caused the code to be written to the file as:

The Catcher in the Rye
J.D. Salinger
1234567890
277
9.99
1951
To Kill a Mockingbird
Harper Lee
0987654321
324
7.99
1960

Which caused errors when reading it back during testing. Luckily it was a pretty simple fix and otherwise there were no issues for either Me or Cole during the project. 