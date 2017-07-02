#include <string>

class LinkedList {

    public:
        int item;
        LinkedList* next = NULL;

        void insert(int item);
        LinkedList* search(int item);
        void print();
}; 