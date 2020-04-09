
#pragma once
 int big (double *arr, int n );
 void radix(double *arr,int n){
int m= big(arr, n);



 }



 int big (double *arr, int n ){
int i=1;double m=arr[0];int length =0;
for ( i=1;m/i>0;i*=10)
       {
         if(arr[i]>m){m=arr[i];}
       }

for (i=1;m/i>0;i*=10) {length++;}
 return length;}