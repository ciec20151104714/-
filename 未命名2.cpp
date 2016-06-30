#include<stdio.h>
#include <stdlib.h>
int main()
{  
     char *a;
     a = (char *)malloc(100);
     FILE *fp = fopen("aa.txt","r"); 
     while(fgets(a,100,fp))
	 {   
	     printf("%s",a);  
	     fclose(fp);
     }
     free(a);
	   return 0;
}
