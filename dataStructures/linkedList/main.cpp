#include <iostream>
#include <string>
#include "linkedList.h"

using namespace std;

int main() {

    LinkedList<string> list;

    list.insertNode("Your");
    list.insertNode("mom");
    list.insertNode("is");
    list.insertNode("a");
    list.insertNode("loser");

    list.printList();

    cout << "" << endl;

    list.deleteNode(5);

    list.insertNode("beautiful");
    list.insertNode("woman");

    list.printList();

    return 0;
}