#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE*fp;
	FILE*fp1;
	int flen;
	char *a;
	char time[21];
	char lat[11];
    char lon[11];
	int i=0;
    fp=fopen("export.txt","r");
    fp1=fopen("aexport.csv","w");
	fseek(fp,0,SEEK_END);
	flen=ftell(fp);
    fseek(fp,0,SEEK_SET);
    a=(char *)malloc(flen);
    fread(a,1,flen,fp);
    while(!( (*(a+i)=='<') && (*(a+i+1)=='/') && (*(a+i+2)=='g') && (*(a+3+i)=='p') &&  (*(a+i+4)=='x') && (*(a+i+5)=='>') ))
    {
    	if( ( (*(a+i)==' ') && (*(a+1+i)=='l') &&  (*(a+i+2)=='a') && (*(a+i+3)=='t') )    )
     	 {
     	 	strncpy(lat,a+i+6,9);
     	 	lat[9]='\0';
     	 	printf("lat£º%s,",lat);
     	 	strncpy(lon,a+i+22,10);
     	    lon[10]='\0';
	        printf("lon£º%s,",lon);
	        strncpy(time,a+i+44,19);
     	    time[19]='\0';
	        printf("time£º%s\n",time);
		  }
     	   
	        i++;
	       
	}	 
	fclose(fp);
	free(a);
    return 0;
}
