#include "main.h"
#include <unistd.h>

/**
 * _putchar-write the character to stdout
 * @c:the chracter to print
 *
 * Return:on sucess 1
 * ON error, -1 is returned and errno is set is appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
