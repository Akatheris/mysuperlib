#include <string.h>
#include <unistd.h>
void test_mystrlen(void);
void myputstr(const char *str);
void myputchar(const char c );
int mystrlen (const char *str);
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
	write(1,"\t\tDEBUT\n",8);
	subtest_myputchar('e');
	subtest_myputchar('d');
	subtest_myputchar('c');
	subtest_myputchar('b');
	subtest_myputchar('a');

	write(1,"\t\tFIN\n",6);
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
	write(1,"\t\tDEBUT\n",8);
	subtest_mystrlen("salut");
	subtest_mystrlen("zeg6458956rgzerg");
	subtest_mystrlen("zeg82gzerg");
	subtest_mystrlen("zeg787gzerg");
	subtest_mystrlen("zegzg");
	subtest_mystrlen("zegze6154");
	subtest_mystrlen("zegzer");
	write(1,"\t\tFIN\n",6);
}
int main (void)
{
	test_mystrlen();
	test_myputchar();
	return(0);
}


