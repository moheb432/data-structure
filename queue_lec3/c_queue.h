#ifndef C_QUEUE_H
#define C_QUEUE_H


class c_queue
{
public :

/*c_queue{
std::cout<< "please enter the queue size "
std::cin<<size;
}*/
  bool isempty();
  bool isfull();
  void enqueue(int x);
  int  dequeue();
  int size;
  private  :
int front =-1;
  int rear=-1;
  int array[5];
  };

#endif // C_QUEUE_H
