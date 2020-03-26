//***********************************************************selection comple =n*n

  void selection (double *arr, int size)
   {
    for(int i=0;i< size-1;i++){//can be made by  k<=n-1   if(x[ i]> x[k]){swap} )
   
    for(int k=1 ;k<size-2;k++){
    
    if (arr[i]>arr[k]){ swap( &arr[k], & arr[k+1]);  }
                              }
                              
                              
                              }
    
    }