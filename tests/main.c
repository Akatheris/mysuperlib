#include <string.h>
#include <unistd.h>
int mystrcmp ( const char str1[],const char str2[]);
char* mystrdup(const char* str);
char* mystrnew(int size);
void myputstr(const char *str);
void myputchar(const char c );
int mystrlen (const char *str);
void subtest_mystrdup(const char *str)
{
	int n;
	char* str1;
	str1 = mystrdup(str);
	n = mystrcmp(str1,str);
	if ( n == 0)
	{
		write(1,"\tBon\n",5);
	}
	else
	{
		write(1,"\tNUL\n",5);
	}
	
}
void test_mystrdup(void)
{
	write(1,"\t\tDEBUT mystrdup\n",17);
	subtest_mystrdup("salut");
	subtest_mystrdup("s4lt");
	subtest_mystrdup("''''");
	subtest_mystrdup("s15tlt");
	subtest_mystrdup("noob");
	write(1,"\t\tFIN mystrnew\n",15);
}
void subtest_mystrnew(int size)
{
	int i;
	char* str;
	str = mystrnew(size);
	i = 0 ;
	if ( str[i] !=0)
	{
		write(1,"\tNUL\n",5);
	}
	else 
	{
		while ( str[i] == 0)
		{
			i++;
		}
		write(1,"\tBon\n",5);
	}
}
void test_mystrnew (void)
{
	write(1,"\t\tDEBUT mystrnew\n",17);
	subtest_mystrnew(1);
	subtest_mystrnew(5);
	subtest_mystrnew(9);
	subtest_mystrnew(6);
	write(1,"\t\tFIN mystrnew\n",15);
}
void subtest_myputchar(const char c)
{
	write(1,"\t",1);
	myputchar(c);
	write(1,"\t",1);
	write(1,&c,1);
	write(1,"\n",1);

}
void test_myputchar (void)
{
	write(1,"\t\tDEBUT myputchar\n",18);
	subtest_myputchar('e');
	subtest_myputchar('d');
	subtest_myputchar('c');
	subtest_myputchar('b');
	subtest_myputchar('a');
	write(1,"\t\tFIN myputchar\n",16);
}
void subtest_mystrlen (const char *str)
{

	if (mystrlen(str) == strlen(str))
	{
		write(1,"\tBon\n",5);
	}
	else
	{
		write (1,"\tNul\n",5);

	}

}
void test_mystrlen(void)
{
	write(1,"\t\tDEBUT mystrlen\n",17);
	subtest_mystrlen("salut");
	subtest_mystrlen("zeg6458956rgzerg");
	subtest_mystrlen("zeg82gzerg");
	subtest_mystrlen("zeg787gzerg");
	subtest_mystrlen("zegzg");
	subtest_mystrlen("zegze6154");
	subtest_mystrlen("zegzer");
	write(1,"\t\tFIN mystrlen\n",15);
}
int main (void)
{
	test_mystrdup();
	test_mystrnew();
	test_mystrlen();
	test_myputchar();
	return(0);
}


