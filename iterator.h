//
// Created by hhhel on 16.06.2022.
//

#ifndef FOURTH_TASK_ITERATOR_H
#define FOURTH_TASK_ITERATOR_H
#include <iostream>
#include "hashtable.h"

class Iterator{
private:
    int index;
    int length;
    int buffer;
    Node* elem;
    Node* arr;
public:
    Iterator(HashTable&);
    void start();
    void next();
    bool finish();
    int getValue();
};

#endif //FOURTH_TASK_ITERATOR_H
