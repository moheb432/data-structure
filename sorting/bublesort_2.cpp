#include<iostream>
    void swap(double *x,double *y ){
    double z=0;
    z=*x; 
    *x=*y; 
    *y=z;
}

  void bubble (double *arr, int size)
   {
    for(int i=0;i< size;i++){//can be made by  k<=n-1   if(x[ i]> x[k]){swap} )
    	for(int k=0 ;k<size;k++){
    		if (arr[k]>arr[k+1]){
    			 swap( &arr[k], & arr[k+1]);  
    							}
     	                          }
                              }
    }
int main(){
  double array[14] ={5,26,5,4,3,6,4,32,3,35,14,45,63,12};
  int size=14;
  bubble(array,size);
  for(int i =1 ;i<size;i++){
    std::cout<<"array[i]"<<array[i]<<std::endl;     }
std::cin>>size;
return 0 ;}