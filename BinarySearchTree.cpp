#include <iostream>
#include "BinarySearchTree.h"

using namespace::std;

void BinarySearchTree::insert(int x, BinarySearchTree* parent) {
    
    if (empty) {
        item = x;
        left = NULL;
        right = NULL;
        this->parent = parent;
        empty = false;
        return;
    }

    if (x < item) {
        if (!left) left = new BinarySearchTree();
        left->insert(x, this);
    } else {
        if (!right) right = new BinarySearchTree();
        right->insert(x, this);
    }

}

void BinarySearchTree::remove(int x) {

    if (empty) {
        return;
    }

    BinarySearchTree* doomedTree = search(x);

    if (doomedTree == NULL) {
        return;
    }

    if (doomedTree->left && doomedTree->right) {
        BinarySearchTree* min = doomedTree->right->findMin();
        int tempItem = min->item;
        min->remove(min->item);
        doomedTree->item = tempItem;
    } else if (doomedTree->left) {
        int tempItem = doomedTree->left->item;
        remove(doomedTree->left->item);
        doomedTree->item = tempItem;
    } else if (doomedTree->right) {
        int tempItem = doomedTree->right->item;
        remove(doomedTree->right->item);
        doomedTree->item = tempItem;
    } else {
        if (x < doomedTree->parent->item) {
            doomedTree->parent->left = NULL;
        } else {
            doomedTree->parent->right = NULL;
        }
        delete(doomedTree);
    }
}


BinarySearchTree* BinarySearchTree::search(int x) {
    if (empty) return NULL;

    if (item == x) return this;

    if (x < item) {
        return left->search(x);
    } else {
        return right->search(x);
    }
}

BinarySearchTree* BinarySearchTree::findMin() {
    BinarySearchTree* min;

    if (empty) return NULL;

    min = this;
    while(min->left != NULL) {
        min = min->left;
    }
    return min;
}

BinarySearchTree* BinarySearchTree::findMax() {
    BinarySearchTree* max;

    if (empty) return NULL;

    max = this;
    while(max->right != NULL) {
        max = max->right;
    }
    return max;
}

void BinarySearchTree::print() {
    if (!empty) {
        if (left) left->print();
        cout << item << " ";
        if (right) right->print();
    }
}



