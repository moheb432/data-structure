#ifndef C_QUEUE_H
#define C_QUEUE_H


class c_queue
{
public :

  bool isempty();
  bool isfull();
  void enqueue(int x);
  int  dequeue();
  private  :
int front =-1;
  int rear=-1;
  int array[5];
  };

#endif // C_QUEUE_H
