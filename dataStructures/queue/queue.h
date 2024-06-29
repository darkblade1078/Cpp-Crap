#pragma once
#ifndef QUEUE_H
#define QUEUE_H

#include "qNode.h"

using namespace std;

template <typename T> 

class Queue {

    private:
        QNode<T> *front, *rear;
    
    public:

        Queue() {
            front = rear = NULL;
        }
    
        void enQueue(T data) {
            QNode<T>* temp = new QNode(data);
    
            if(rear == NULL) {
                front = rear = temp;
            }
    
            rear->next = temp;
            rear = temp;
        }
    
        void deQueue() {
        
            if(front == NULL)
                return;
    
            QNode<T>* temp = front;
            front = front->next;
    
            if(front == NULL)
                rear = NULL;
    
            delete (temp);
        }

        T getFront() {
            return front->data;
        }

        T getRear() {
            return rear->data;
        }
};

#endif