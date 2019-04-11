#include "book.h"

Book::Book(int id, string bookName, string auth, string cat) {
    bookID = id;
    title = bookName;
    author = auth;
    category = cat;
    personPtr = nullptr;
}

string Book::getTitle() {
    return myBook;
}

string Book::getAuthor() {
    return myAuthor;
}

string Book::getCategory() {
    return myCaregory;
}

int Book::getId() {
    return myID;
}
void Book::setPersonPtr(Person * ptr) {
    personPtr = ptr;
}

Person * Book::getPersonPtr() {
    return personPtr;
}
