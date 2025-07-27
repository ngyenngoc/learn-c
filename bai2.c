#include <stdio.h>
int main (){
	int a[]={2,3,5,1,7};
	int n = sizeof(a)/sizeof (a[0]);
	int i = 0;
   for (; i < n; i++) 
   {  
    	if (a[i]% 2 == 0) 
	 	{
       		printf("so chan%d\n", a[i]);
  	 	}  
     	else 
	 	{
      		printf("so le%d\n", a[i]);
   		}
	}
   return 0;
}
