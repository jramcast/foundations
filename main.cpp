#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList list;

    std::cout << list.next;

    list.insert(4);

    list.insert(5);

    list.insert(23);
    
    list.print();

}