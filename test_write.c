#include <unistd.h>

int main(void)
{
	write(1, "%", 1);
	write(1, "\n", 1);
	write(1, "%%", 2);
	write(1, "\n", 1);
	write(1, "ab%cd", 5);
	write(1, "\n", 1);
	return (0);
}