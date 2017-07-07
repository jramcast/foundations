#include <string>

using namespace std;

class LinkedList {

    public:
        string item;
        LinkedList* next = NULL;

        void        insert(string item);
        void        remove(string item);
        LinkedList* search(string item);
        void        print();

    private:
        LinkedList* getPredecesorList(string item);
};