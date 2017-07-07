#include <iostream>
#include "BinarySearchTree.h"

using namespace::std;

void BinarySearchTree::insert(string x, BinarySearchTree* parent) {
    if (item == "") {
        item = x;
        left = NULL;
        right = NULL;
        parent = parent;
        return;
    }

    if (x < item) {
        left->insert(x, parent);
    } else {
        right->insert(x, parent);
    }
}

BinarySearchTree* BinarySearchTree::search(string x) {
    if (item == "") return NULL;

    if (item == x) return this;

    if (x < item) {
        return left->search(x);
    } else {
        return right->search(x);
    }
}

BinarySearchTree* BinarySearchTree::findMin() {
    BinarySearchTree* min;

    if (item == "") return NULL;

    min = this;
    while(min->left != NULL) {
        min = min->left;
    }
    return min;
}

BinarySearchTree* BinarySearchTree::findMax() {
    BinarySearchTree* max;

    if (item == "") return NULL;

    max = this;
    while(max->right != NULL) {
        max = max->right;
    }
    return max;
}

void BinarySearchTree::print() {
    if (item != "") {
        left->print();
        cout << item << " ";
        right->print();
    }
}



