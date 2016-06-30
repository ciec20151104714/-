#include <stdio.h>
#include <stdlib.h>
int main ()
{

	int cen=0;
	char *s;
    FILE *fp=fopen("export.txt","r");
	fseek(fp,0,SEEK_END);
	cen=ftell(fp);
	s=(char *)malloc(cen);
	printf("%d",cen);
	fclose(fp);
	return 0;
}
