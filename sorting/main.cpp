#include <iostream>
#include "bublesort.h"
void bubble (double *arr, int size);
//fuction to swap
//function to insertion
/*
void insertionsort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
*/
int main()

{
     int n=0;
    std::cout<< "please enter the size";
    std::cin>> n;
    double *arr=new double [n] ;
        for(int i=0;i<=4;i++){
                        std::cout<<"enter the "<< i <<" element";
                       std::cin>>arr[i];
                             }

    //***********************************************************insertion(n(n-1)/2)-1
    //insertionsort(x,5);//com: (n(n-1)/2)-1


    //***********************************************************selection comple =n*n
    /*for(int m=0; m<5; m++)
     {   int index_of_min = m;
        for(int z=m; z<5; z++)

        {if(x[index_of_min]>x[z])

            {index_of_min = z;}}
swap(&x[m],&x[index_of_min]);
        }*/

    //************************************************************buble sort    n*(n-1)
   /* for(int i=0;i<=4;i++){//can be made by  k<=n-1   if(x[ i]> x[k]){swap} )
    for(int k=0 ;k<5-i-1;k++){
if (x[k]>x[k+1]){swap( &x[k], & x[k+1]);  }
*/

    //************************************************************modified buble sort
/*    int flag =1;
        for(int i=0;(i<=4)&&flag;i++){flag =-1;
        for(int k=0 ;(k<5-i-1)&&flag;k++){
    if (x[k]>x[k+1]){swap( &x[k], & x[k+1]); flag =1; }

 }}*/
   //*************************************************************merge sorting
bubble( arr , n);
    for(int i=0;i<=4;i++){
    std::cout<<arr[i];
}delete []arr;
}
