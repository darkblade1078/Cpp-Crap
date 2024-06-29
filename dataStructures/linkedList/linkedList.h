#pragma once
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

using namespace std;

template <typename T> 

class LinkedList {

    Node<T>* head;

    public:

        //constructor
        LinkedList() {
            head = NULL;
        }

        //method for inserting a new node into the linked list
        void insertNode(T data) {
            Node<T>* newNode = new Node(data);

            //if there is no node in the linked list, then make the new node the had
            if(head == NULL) {
                head = newNode;
                return;
            }

            Node<T>* temp = head;

            //keeps going until there is a empty next
            while(temp->next != NULL) {

                temp = temp->next;
            }

            //insert the node at the very end
            temp->next = newNode;
        }

        //print out the linked list
        void printList() {

            Node<T>* temp = head;

            // returns this is the linked list is empty :skull:
            if (head == NULL) { 
                cout << "List empty" << endl; 
                return; 
            } 

            //keeps printing nodes until it reaches the end
            while(temp != NULL) {
                cout << temp->data << " "; 
                temp = temp->next; 
            }
        }

        //delete a node from the linked list
        void deleteNode(int nodeOffset) {

            Node<T> *temp1 = head, *temp2 = NULL;
            int length = 0;

            //return if there is no nodes in the lsit
            if(head == NULL) {
                cout << "List empty" << endl;
                return;
            }

            //cycle until we find a node
            while(temp1 != NULL) {
                temp1 = temp1->next;
                length++;
            }

            //return if we're out of range of the list
            if(length < nodeOffset) {
                cout << "Index out of range" << endl;
                return;
            }

            temp1 = head;

            //delete and update the head
            if(nodeOffset == 1) {
                head = head->next;
                delete temp1;
                return;
            }

            // find the node that needs to be deleted
            while(nodeOffset-- > 1) {

                temp2 = temp1;
                temp1 = temp1->next;
            }

            temp2->next = temp1->next;

            //so long node
            delete temp1;
        }
};

#endif