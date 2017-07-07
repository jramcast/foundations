#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{

    cout << " ******* Linked Lists *******" << endl;
    LinkedList list;

    list.insert("4");
    list.insert("5");
    list.insert("23");
    list.print();
    cout << endl << " - Find value " << endl;
    cout << list.search("5")->item << endl;
    cout << "- Remove " << endl;
    list.remove("4");
    list.print();

    return 0;
}