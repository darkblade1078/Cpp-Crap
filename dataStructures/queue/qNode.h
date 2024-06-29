#pragma once
#ifndef QNODE_H
#define QNODE_H

using namespace std;

template <typename T> 

class QNode {
    public:

        T data;
        QNode<T>* next;

        //constructor
        QNode() {
            data = NULL;
            next = NULL;
        }

        //constructor if user has data to put in
        QNode(T newData) {
            data = newData;
            next = NULL;
        }
};

#endif