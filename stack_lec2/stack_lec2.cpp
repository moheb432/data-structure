#include "stack_lec2.h"

bool stack_lec2::isempty(){

    if (top==-1){return true;}
    else{return false; }

}

bool stack_lec2::isfull(){
    if (top==size-1){return true;}
    else{return false; }


}

void stack_lec2::push(int x){
    if (isfull()){
        std::cout<<"the stack is full\n";
    }
      else
    {   top++;
        array[top]=x;

    }


}

int stack_lec2::pop(){
                   if (isempty()){
                       std::cout<<"the stack is empty\n";
                   }
                     else

                   {   int x=array[top];

                       top--;

                       return x;
                   }

                  }
void stack_lec2::print()
{
    for  (int k=0;k<size;k++){std::cout<<"the element"<<k+1<<"is "<<array[k];
    
}
