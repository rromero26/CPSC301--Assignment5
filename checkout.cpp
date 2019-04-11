// Name
// Section #
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "person.cpp"
#include "book.cpp"

using namespace std;

void printMenu() {
    cout << "----------Library Book Rental System----------" << endl;
    cout << "1.  Book checkout" << endl;
    cout << "2.  Book return" << endl;
    cout << "3.  View all available books" << endl;
    cout << "4.  View all outstanding rentals" << endl;
    cout << "5.  View outstanding rentals for a cardholder" << endl;
    cout << "6.  Open new library card" << endl;
    cout << "7.  Close library card" << endl;
    cout << "8.  Exit system" << endl;
    cout << "Please enter a choice: ";
}

void readBooks(vector<Book *> & myBooks) {
    ifstream myfile;
    myfile.open ("books.txt");

    string myLine;


    return;
}

int readPersons(vector<Person *> & myCardholders) {
    ifstream myfile2
    myfile2.open("persons.txt");

    string myLine2;


    return 0;
}

void readRentals(vector<Book *> & myBooks, vector<Person *> myCardholders) {


    return;
}

void openCard(vector<Person *> & myCardholders, int nextID) {


    return;
}

Book * searchBook(vector<Book *> myBooks, int id) {


    return nullptr;
}

int main()
{
    vector<Book *> books;
    vector<Person *> cardholders;

    int bookNum = 0;
    int cardNum = 0;

    int NextCardNum = 0;

    int choice;
    do
    {
        // If you use cin anywhere, don't forget that you have to handle the <ENTER> key that
        // the user pressed when entering a menu option. This is still in the input stream.
        printMenu();
        cin >> choice;
        switch(choice)
        {
            case 1:
                cardNum = 0;
                bookNum = 0;
                cout << "Please enter the card ID: ";
                cin >> cardNum;
                // Confirms that the card ID is valid
                cout << "Please enter the book ID: ";
                cin >> bookNum;
                // If the card ID is not active, handle the same as an invalid card ID.

                cout << "Rental Completed." << endl;
                break;

            case 2:
                bookNum = 0;
                cout << "Please enter the book ID to return: ";
                cin >> bookNum;
                // Confirms that the book ID is valid.

                // Updates the book object.

                break;

            case 3:
                //Searches the books vector and outputs all books that are available, if any.
                break;

            case 4:
                //Searches the cardholders vector and outputs a status report of the books that are currently checked out, if any
                break;

            case 5:
                cardNum = 0;
                cout << "Please enter the card ID: ";
                cin >> cardNum;
                // Confirms that the card ID is valid and active
                // Displays a list of books they currently have checked out.

                break;

            case 6:
                string userFirst;
                string userLast;
                bool userActive = 1;
                int userID =                          //????
                cout << "Please enter the first name: ";
                cin >> userFirst;
                cout << "Please enter the last name: ";
                cin >> userLast;

                //create Person Obj

                // inserts into the cardholders vector (use push_back).

                //Num is the next sequential card number if this is their first time opening a card. Otherwise the old card is reactivated

                break;

            case 7:
                int userAnswer;
                cardNum = 0;
                cout << "Please enter the card ID: ";
                cin >> cardNum;

                // Confirms that the card ID is valid and that it is not already inactive.

                cout << "Are you sure you want to deactivate card (y/n)?" << endl;
                cin >> userAnswer;

                // deactivate cardID
                break;

            case 8:
                // Must update records in files here before exiting the program
                break;

            default:
                cout << "Invalid entry" << endl;
                break;
        }
        cout << endl;
   } while(choice != 8);
      return 0;
}
