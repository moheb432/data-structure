/*queue is used specially for printer and */
#include "c_queue.h"
#include <iostream>
class c_queue;

bool c_queue::isempty(){

    if (front==-1 && rear==-1 ){return true;}
    else{return false; }

}

bool c_queue::isfull(){
    if ((rear+1)%5==front)
    {
        return true;
    }

else{
        return false;
    }


}

void c_queue::enqueue(int x){
    if (isfull())
    {
        std::cout<<"the queue is full\n";
    return;
    }
      else if ( isempty()){
        rear=0;front=0;
    }
    else
    {
        rear=(rear+1)%5;
    }


    array[rear]=x;

}

int c_queue::dequeue(){
    if (isempty())
    {
    std::cout<<"the queue is empty\n";
    return -1;
    }
    else if  (front==rear)
    {
    int x=array[front];
    front=-1;rear=-1;
    return x;
    }

    else
    {
    int x=array[front];
    front=(front+1)%5;
      return x;
    }

}
