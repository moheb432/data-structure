#ifndef STACK_LEC2_H
#define STACK_LEC2_H
#include <iostream>

class stack_lec2
{
  public :
stack_lec2()
{
  std::cout<<"\nplease enter the size of the stack \n";
  std::cin>>size;
};
    ~ stack_lec2()
    {
     delete []array;
    };
    void  print();
    bool isempty();
    bool isfull();
    void push(int x);
    int pop();
    int size;

    private  :
    int top =-1;
    int *array=new int[size] ;



};

#endif // STACK_LEC2_H
