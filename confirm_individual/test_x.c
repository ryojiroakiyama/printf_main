#include <stdio.h>

void put(char *s, unsigned int nb, int ret)
{
	printf("]\n");
	printf("%s, %x\n", s, nb);
	printf("ret=%x\n", ret);
	printf("--------\n");
}

int main(void)
{
	int ret;

	printf("-----------------x\n");
	ret = printf("%x", 123);
	put("%x", 123, ret);

	ret = printf("%.x", 123);
	put("%.x", 123, ret);
	ret = printf("%.x", 0);
	put("%.x", 0, ret);
	ret = printf("%.0x", 0);
	put("%.0x", 0, ret);
	ret = printf("%.0x", 1);
	put("%.0x", 1, ret);
	ret = printf("%.0x", 123);
	put("%.0x", 123, ret);
	ret = printf("%.3x", 123);
	put("%.3x", 123, ret);
	ret = printf("%.5x", 123);
	put("%.5x", 123, ret);

	ret = printf("%0x", 0);
	put("%0x", 0, ret);
	ret = printf("%1x", 123);
	put("%1x", 123, ret);
	ret = printf("%5x", 123);
	put("%5x", 123, ret);

	ret = printf("%10.3x", 123);
	put("%10.3x", 123, ret);
	ret = printf("%10.5x", 123);
	put("%10.5x", 123, ret);
	ret = printf("%10.15x", 123);
	put("%10.15x", 123, ret);

	ret = printf("%-10.5x", 123);
	put("%-10.5x", 123, ret);
	ret = printf("%------------10.5x", 123);
	put("%------------10.5x", 123, ret);

	ret = printf("%010x", 123);
	put("%010x", 123, ret);
	ret = printf("%010.1x", 123);
	put("%010.1x", 123, ret);
	ret = printf("%010.5x", 123);
	put("%010.5x", 123, ret);
	ret = printf("%0000000000010.5x", 123);
	put("%0000000000010.5x", 123, ret);
	ret = printf("%010.5x", 123);
	put("%010.5x", 123, ret);

	ret = printf("%.*x", -1, 0);
	put("%.*x , -1", 0, ret);
	ret = printf("%*.*x", 10, -3, 123);
	put("%*.*x , 10, -3", 123, ret);
	ret = printf("%*.*x", -10, 5, 123);
	put("%*.*x , -10, 5", 123, ret);
	ret = printf("%-*.*x", -10, 5, 123);
	put("%-*.*x ,-10, 5", 123, ret);
	ret = printf("%*x", 0, 123);
	put("%*x , 0", 123, ret);
	
	ret = printf("abc%010xabc", 123);
	put("abc%010xabc", 123, ret);
	
	ret = printf("%X", 123);
	put("%X", 123, ret);

	return (0);
}
