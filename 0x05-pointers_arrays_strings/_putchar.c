#include <unistd.h>

in_putchar(char c)
{
	return write(1, & c, 1);
}
