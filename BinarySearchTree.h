#include <string>

using namespace std;

class BinarySearchTree {

    public:
        string item;
        BinarySearchTree* parent = NULL;
        BinarySearchTree* left = NULL;
        BinarySearchTree* right = NULL;

        void   insert(string item, BinarySearchTree* parent);
        BinarySearchTree*   search(string item);
        BinarySearchTree*   findMin();
        BinarySearchTree*   findMax();
        void                print();
};