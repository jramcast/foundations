#include <iostream>
#include "LinkedList.h"

using namespace::std;

void LinkedList::insert(string x) {
    LinkedList* newList = new LinkedList();
    newList->item = item;
    newList->next = next;
    item = x;
    next = newList;
}


LinkedList* LinkedList::search(string x) {
    if (item == x) {
        return(this);
    } else if (next) {
        return next->search(x);
    } else {
        return NULL;
    }
}

void LinkedList::remove(string x) {
    LinkedList* listWithElement;
    LinkedList* predecesorList;

    listWithElement = search(x);
    if (listWithElement != NULL) {
        predecesorList = getPredecesorList(x);
        if (predecesorList == NULL) {
            // remove first element
            item = listWithElement->next->item;
            next = listWithElement->next->next;
        } else {
            predecesorList->next = listWithElement->next;
        }
    }
}

LinkedList* LinkedList::getPredecesorList(string x) {
    if(next == NULL) {
        return NULL;
    }
    if (next->item == x) {
        return this;
    } else {
        return next->getPredecesorList(x);
    }
}


void LinkedList::print() {
    std::cout << item;
    if (next) {
        std::cout << ' ';
        next->print();
    }
}
