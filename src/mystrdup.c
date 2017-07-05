#include<unistd.h>
#include<stdlib.h>
int mystrlen (const char *str);
char* mystrdup (const char *str)
{
	char *str1;
	int size;
	size = mystrlen(str);
	str1 =(char*) malloc(sizeof(char)*(size+1));


	int i;
	i = 0;
	while ( str[i] != str1[i])
	{
		str1[i]=str[i];
		i++;
	}

	
	return(str1);

}




