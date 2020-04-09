#include <iostream>
#include "c_queue.h"
#include "c_queue.cpp"

int main()
{
 c_queue q1;
 q1.enqueue(3);
 q1.enqueue(5);
 q1.enqueue(10);
 q1.enqueue(3);
 q1.enqueue(3);
 
 std::cout<<q1.dequeue()<<std::endl;
 
 std::cout<<q1.dequeue()<<std::endl;
    return 0;
}
