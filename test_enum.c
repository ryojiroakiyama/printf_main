#include <stdio.h>

typedef enum
{
	SPEC_C,
	SPEC_S,
	SPEC_P,
	SPEC_D,
	SPEC_I,
	SPEC_U,
	SPEC_SX,
	SPEC_LX,
	SPEC_PER,
	SPEC_NUM
} SPECIFIER;

int main(void)
{
	int x;

	x = SPEC_D;
	printf("%d\n", x);
	return (0);
}
