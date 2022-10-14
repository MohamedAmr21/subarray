#include <stdlib.h>
#include <stdio.h>

int *findlongestsqu(int *arr,int count_arr)
{
    int *buff=(int *)calloc(10,sizeof(int));
    int max;
    int repeat=0;
    for(int i=0;i<count_arr;i++)
    {
        max=arr[i];
       for(int j=0;j<count_arr;j++)
       {
            if(arr[i]==arr[j])
            {
               
               repeat++;
               if(repeat>max)
               {
                max=i;
                buff=&arr[i];
                
               }
            }
       }
    }
    for(int i=0;i<max-4;i++)
    {
        printf("%d",*buff);
    }
   return 0;
}

int main()
{
    int arr[]={1,5,5,5,9,4,4,4,4};
    int n=sizeof(arr)/sizeof(int);
    
    printf("%d",*findlongestsqu(arr,n));    
    
    return 0;
}
