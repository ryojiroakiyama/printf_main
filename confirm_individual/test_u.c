#include <stdio.h>

void put(char *s, unsigned int nb, int ret)
{
	printf("]\n");
	printf("%s, %u\n", s, nb);
	printf("ret=%u\n", ret);
	printf("--------\n");
}

int main(void)
{
	int ret;

	printf("-----------------u\n");
	ret = printf("%u", 123);
	put("%u", 123, ret);

	ret = printf("%.u", 123);
	put("%.u", 123, ret);
	ret = printf("%.u", 0);
	put("%.u", 0, ret);
	ret = printf("%.0u", 0);
	put("%.0u", 0, ret);
	ret = printf("%.0u", 1);
	put("%.0u", 1, ret);
	ret = printf("%.0u", 123);
	put("%.0u", 123, ret);
	ret = printf("%.3u", 123);
	put("%.3u", 123, ret);
	ret = printf("%.5u", 123);
	put("%.5u", 123, ret);

	ret = printf("%0u", 0);
	put("%0u", 0, ret);
	ret = printf("%1u", 123);
	put("%1u", 123, ret);
	ret = printf("%5u", 123);
	put("%5u", 123, ret);

	ret = printf("%10.3u", 123);
	put("%10.3u", 123, ret);
	ret = printf("%10.5u", 123);
	put("%10.5u", 123, ret);
	ret = printf("%10.15u", 123);
	put("%10.15u", 123, ret);

	ret = printf("%-10.5u", 123);
	put("%-10.5u", 123, ret);
	ret = printf("%------------10.5u", 123);
	put("%------------10.5u", 123, ret);

	ret = printf("%010u", 123);
	put("%010u", 123, ret);
	ret = printf("%010.1u", 123);
	put("%010.1u", 123, ret);
	ret = printf("%010.5u", 123);
	put("%010.5u", 123, ret);
	ret = printf("%0000000000010.5u", 123);
	put("%0000000000010.5u", 123, ret);
	ret = printf("%010.5u", 123);
	put("%010.5u", 123, ret);

	ret = printf("%.*u", -1, 0);
	put("%.*u , -1", 0, ret);
	ret = printf("%*.*u", 10, -3, 123);
	put("%*.*u , 10, -3", 123, ret);
	ret = printf("%*.*u", -10, 5, 123);
	put("%*.*u , -10, 5", 123, ret);
	ret = printf("%-*.*u", -10, 5, 123);
	put("%-*.*u ,-10, 5", 123, ret);
	ret = printf("%*u", 0, 123);
	put("%*u , 0", 123, ret);
	
	ret = printf("abc%010uabc", 123);
	put("abc%010uabc", 123, ret);

	return (0);
}
