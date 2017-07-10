#include <iostream>
#include "LinkedList.h"
#include "BinarySearchTree.h"

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
    cout << endl;

    cout << " ******* Binary tree *******" << endl;

    BinarySearchTree tree;

    tree.insert(2, NULL);
    tree.insert(1, NULL);
    tree.insert(7, NULL);
    tree.insert(4, NULL);
    tree.insert(8, NULL);
    tree.insert(3, NULL);
    tree.insert(6, NULL);
    tree.insert(5, NULL);

    tree.remove(6);
    
    tree.print();

    return 0;
}