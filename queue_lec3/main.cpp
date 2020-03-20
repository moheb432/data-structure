#include <iostream>
#include<c_queue.h>

int main()
{
 c_queue q1;
 q1.enqueue(3);
 std::cout<<q1.dequeue();
    return 0;
}
