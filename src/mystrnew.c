#include <stdlib.h>
char* mystrnew(int size)
{
	char*str;
	str =(char*)malloc(sizeof(char)*size + 1);
       

	 int i;
        i = 0;
        while ( i != size+1)
{
        str[i]='\0';
        i++;
}

	return(str);

}
