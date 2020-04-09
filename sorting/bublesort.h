//************************************************************buble sort    n*(n-1)
#pragma once
    void swap(double *x,double *y ){
    double z=0;
    z=*x; 
    *x=*y; 
    *y=z;
}

  void bubble (double *arr, int size)
   {
    for(int i=0;i< size-1;i++){//can be made by  k<=n-1   if(x[ i]> x[k]){swap} )
    	for(int k=0 ;k<size-1;k++){
    		if (arr[k]>arr[k+1]){
    			 swap( &arr[k], & arr[k+1]);  
    							}
     	                          }
                              }
    }