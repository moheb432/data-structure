#include <iostream>
#include "bublesort.h"
#include "m_buble.h"
#include "selection.h"
#include "insertion.h"
#include "radix.hpp"
void bubble (double *arr, int size);
void m_bubble (double *arr, int size);
void selection (double *arr, int size);
void insertion(int *arr, int n);
 void radix(double *arr,int n);
    int main()

{
    int n=0;
    std::cout<< "please enter the size";
    std::cin>> n;
    double *arr=new double [n] ;
        for(int i=0;i<=n-1;i++)
                             {
                        std::cout<<"enter the "<< i <<" element\n";
                        std::cin>>arr[i];
                             }
//bubble( arr , n);//n*n
//selection( arr , n); //n*n_
// m_bubble(arr,n);//
//insertion (arr,n);//insertionsort(x,5);//com: (n(n-1)/2)-1
//merje(arr,n);
//q_sort(arr,n);
 radix ( arr,n);   
    for(int i=0;i<=n-1;i++)
    {
      std::cout<<arr[i]<<" ";
    }   
delete []arr;
}
