#pragma once
#ifndef NODE_H
#define NODE_H

using namespace std;

template <typename T> 

class Node {
    public:

        T data;
        Node<T>* next;

        //constructor
        Node() {
            data = NULL;
            next = NULL;
        }

        //constructor if user has data to put in
        Node(T newData) {
            data = newData;
            next = NULL;
        }

        //set the data inside the Node
        void setData(T newData) {
            data = newData;
        }
};

#endif