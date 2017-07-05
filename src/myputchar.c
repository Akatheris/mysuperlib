#include <unistd.h>
void myputchar (const char c)
{
	
	write(1,&c,1);

}
