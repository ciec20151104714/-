#include<stdio.h>
#include<string.h>
int main()
{  
          char a[100],c[100];  
		 
		   FILE *fp = fopen("export.gpx","r");  
		   while(fgets(c,100,fp))
		   {  
			 
			   {
			   	  strcpy(a,c);
			   	  printf("��1�����ݣ�%s\n",a); 
			   }

			  				 
				    fclose(fp);
            }
}
