
  void m_bubble (double *arr, int size)
{    int flag=1;
    for(int i=0;i< size-1 && flag;i++)
  {    //can be made by  k<=n-1   if(x[ i]> x[k]){swap} )
    flag=0;
    for(int k=0 ;k<size-1;k++)
    {
    
    if (arr[k]>arr[k+1])
       { 
      double z=0;z=arr[k]; arr[k]=arr[k+1]; arr[k+1]=z; flag=1; 
       }
    
    }
                              
  }
    
}