#pragma once
#include <iostream>
class list
{
public:
    struct node
    {

        int data;
        node *next = nullptr;
    };
    node *head = new node;
    node *tail = new node;
    list()
    {
        head = NULL;
        tail = nullptr;
    }
    ~list()
    {
        delete head;
        delete tail;
    }
    // insert function ********************************
    void insert(int val)
    {
        node *aux = new node;
        aux->data = val;
        if (head == nullptr)
        {
            head = aux;
            tail = aux;
            head->data = val;
            tail->data = val;
        }
        else
        {
            tail->next = aux;
            tail = aux;
        }
        }
    // delete functiion ***************************
    void remove(int val)
    {

        node *aux = head;
        while (aux->next->data != val)
        {
            aux = aux->next;
            if (aux->next == nullptr)
            {
                std::cout << "the val is not found in the list ";
                return;
            }
        }
        aux->next = aux->next->next;
    }
    // display function **************************************
    void display()
    {
        node *aux = head;
        for (aux = head; aux != tail; aux = aux->next)
        {
            std::cout << aux->data;
        }
    };
};