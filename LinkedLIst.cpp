#include <iostream>
#include "LinkedList.h"

void LinkedList::insert(int x) {
    LinkedList* newList = new LinkedList();
    newList->item = item;
    newList->next = next;
    item = x;
    next = newList;
}

LinkedList* LinkedList::search(int x) {
    if (item == x) {
        return(this);
    } else {
        return next->search(x);
    }
}


void LinkedList::print() {
    std::cout << item;
    if (next) {
        next->print();
    }
}
