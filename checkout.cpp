// Ryan Romero    CWID: 889823894
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
//------------------------------------------------------------------------------
void readBooks(vector<Book *> & myBooks) {
    ifstream myfile;
    myfile.open ("books.txt");

    //TEMP VALUES
    int aID;
    string nameBook;
    string author;
    string category;

    while(!myfile.eof()){
      cin >> aID;
      cin >> nameBook;
      cin >> author;
      cin >> category;

      book temp(aID, nameBook, author, category);
      myBooks.push_back(temp);
    }

    return;
}
//------------------------------------------------------------------------------

int readPersons(vector<Person *> & myCardholders) {
    ifstream myfile2
    myfile2.open("persons.txt");

    //TEMP VALUES
    int cardNum;
    bool isActive;
    string firstName;
    string lastName;
    int index = 0;

    while(!myfile2.eof()){
      cin >> cardNum;
      cin >> isActive;
      cin >> firstName;
      cin >> lastName;

      Person temp2(cardNum, isActive, firstName, lastName);
      myCardholders.push_back(temp2);
      index ++;
    }

    index ++;     // index +1 so it ready for next active cardholder
    return index;
}
//------------------------------------------------------------------------------
void readRentals(vector<Book *> & myBooks, vector<Person *> myCardholders) {
    ifstream myFile3
    myFile3.open("rentals.txt");

    //TEMP VALUES
    int bookID =
    int cardID =

    while(!myFile3.eof()){
      cin >> bookID;
      cin >> cardID;

    }
      vector<book>iterator it = myBooks.begin();
      //CODE HERE????

    return;
}
//------------------------------------------------------------------------------
void openCard(vector<Person *> & myCardholders, int nextID) {
    bool isActive = true;
    string firstN;
    string lastN;

    cout << "Enter first name: ";
    cin >> FirstN;
    cout << "Enter last name: ";
    cin >> lastN;

    Person newUser(nextID, isActive, firstN, lastN);
    myCardholders.push_back(newUser);
    return;
    //REMINDER! INCREMENT INDEX AFTER CALLING openCard
}
//------------------------------------------------------------------------------
Book * searchBook(vector<Book *> myBooks, int id) {
    vector<book>iterator it = myBooks.begin();
    while(it != myBooks.end()){
      if(it->getID() == id)
        {return it;}
      it++;
    }
    return nullptr;
    //REMEMBER! If return nullptr, print out error message
}
//------------------------------------------------------------------------------
int main()
{
    vector<Book *> books;
    vector<Person *> cardholders;

    int bookNum = 0;
    int cardNum = 0;

    int NextCardNum = 0;


    readBooks(books);
    NextCardNum = readPersons(cardholders);
    readRentals(books, cardholders)

    int choice = 0;
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
                cin.ignore();

                // Confirms that the card ID is valid
                vector<Person *>::iterator index = cardholders.begin();
                vector<Person *>::iterator myIT = nullptr;
                while(index != cardholders.end()){
                  if(*index.getId() == cardNum){
                    myIT = index;
                  }
                  index++
                }
                if (myIT == nullptr){
                  cout << "Card ID not found." << endl;
                  break;
                }

                else if(myIT != nullptr){
                    cout << "Cardholder: " << *myIT.fullName() << endl;
                    cout << "Please enter the book ID: ";
                    cin >> bookNum;
                    cin.ignore();

                    vector<Book *>::iterator index2 = books.begin();
                    vector<Book *>::iterator myIT2 = nullptr;

                    while(index2 != books.end()){
                        if(*index2.getId() == bookNum){
                            myIT2 = index2;
                        }
                        index2++
                    }

                    if (myIT2 == nullptr){
                        cout << "Book ID not found." << endl;
                        break;
                    }
                    else if (myIT2 != nullptr){
                        cout << "Title: " << *myIT2.getTitle() << endl;
                        *myIT2.setPersonPtr(*myIT);
                        cout << "Rental Completed." << endl;
                    }
                }

                break;

            case 2:
                bookNum = 0;
                cout << "Please enter the book ID to return: ";
                cin >> bookNum;
                cin.ignore();
                vector<Book *>::iterator index = books.begin();
                vector<Book *>::iterator myIT = nullptr;

                while(index != books.end()){
                    if(*index.getId() == bookNum){
                        myIT = index;
                    }
                    index++
                }
                if (myIT != nullptr){
                  cout << "Title: " << *myIT.getTitle() << endl;
                  Person *tempPtr = nullptr;
                  *myIT.setPersonPtr(tempPtr);
                  cout << "Return Completed." << endl;
                }
                else if(myIT == nullptr){
                  cout << "Book ID not found." << endl;
                }

                break;

            case 3:
                vector<Book *>::iterator index = books.begin();

                if (index != book.end()){
                  while (index != book.end()){
                    cout << "Book ID: " << *index.getId() << endl;
                    cout << "Title: " << *index.getTitle() << endl;
                    cout << "Author: " << *index.getAuthor() << endl;
                    cout << "Cardholder: " << *index.getPersonPtr() << endl;
                    cout << "Card ID: " << *index.getPersonPtr().getId() << endl;
                    cout << endl;

                    index++;
                  }

                }
                else if(index == book.end()){
                  cout << "No available books." << endl;
                }

                break;

            case 4:
                vector<Book *>::iterator index = books.begin();
                if (index != book.end()){
                    while (index != book.end()){
                        if(*index.getPersonPtr() != nullptr)){
                            cout << "Book ID: " << *index.getId() << endl;
                            cout << "Title: " << *index.getTitle() << endl;
                            cout << "Author: " << *index.getAuthor() << endl;
                            cout << "Cardholder: " << *index.getPersonPtr() << endl;
                            cout << "Card ID: " << *index.getPersonPtr().getId() << endl;
                            cout << endl;
                        }
                    index++;
                    }
                }
                else if(index == book.end()){
                    cout << "No outstanding rentals." << endl;
                }

                break;

            case 5:
                cout << "Please enter the card ID: ";
                cin >> cardNum;
                cin.ignore();

                vector<Person *>::iterator index = cardholders.begin();
                vector<Person *>::iterator myIT = nullptr;

                while(index != cardholders.end()){
                  if(*index.getId() == cardNum){
                    myIT = index;
                  }
                  index++
                }
                if (myIT == nullptr){
                  cout << "Card ID not found." << endl;
                  break;
                }

                else{
                  vector<Book *>::iterator index2 = books.begin();
                  while (index2 != books.end()){
                    if(*index2.getPersonPtr == *myIT){
                      cout << "Book ID: " << *index.getId() << endl;
                      cout << "Title: " << *index.getTitle() << endl;
                      cout << "Author: " << *index.getAuthor() << endl;
                      cout << endl;
                    }
                    index2++;
                  }
                }
                break;

            case 6:
                string userFirst;
                string userLast;
                bool userActive = true;
                cout << "Please enter the first name: ";
                cin >> userFirst;
                cin.ignore();
                cout << "Please enter the last name: ";
                cin >> userLast;
                cin.ignore();

                cardholders.push_back(Person(NextCardNum, userActive, userFirst, userLast));

                NextCardNum++;

                //Num is the next sequential card number if this is their first time opening a card. Otherwise the old card is reactivated

                break;

            case 7:
                int userAnswer;
                cardNum = 0;
                cout << "Please enter the card ID: ";
                cin >> cardNum;
                cin.ignore();

                cout << "Are you sure you want to deactivate card (y/n)?" << endl;
                cin >> userAnswer;
                cin.ignore();

                ector<Person *>::iterator index = cardholders.begin();
                vector<Person *>::iterator myIT = nullptr;
                while(index != cardholders.end()){
                  if(*index.getId() == cardNum){
                    myIT = index;
                  }
                  index++
                }
                if (myIT == nullptr){
                  cout << "Card ID not found." << endl;
                  break;
                }

                else if(myIT != nullptr){
                  bool temp = false;

                  if(*myIT.isActive() == false){
                    cout << "Card ID is already inactive." << endl;
                  }
                  else{
                    *myIT.setActive(temp);
                    cout << "Card ID deactivated." << endl;
                  }
                }
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
};
