#include <string>

using namespace std;

class BinarySearchTree {

    public:
        int item;
        bool empty = true;
        BinarySearchTree* parent = NULL;
        BinarySearchTree* left = NULL;
        BinarySearchTree* right = NULL;

        void   insert(int item, BinarySearchTree* parent);
        void   remove(int item);
        BinarySearchTree*   search(int item);
        BinarySearchTree*   findMin();
        BinarySearchTree*   findMax();
        void                print();
};