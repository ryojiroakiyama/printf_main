#include <stdio.h>

void put(char *s, char c, int ret)
{
	printf("]\n");
	printf("%s, %c\n", s, c);
	printf("ret=%d\n", ret);
	printf("--------\n");
}

int main(void)
{
	int ret;

	printf("-----------------c\n");
	ret = printf("%c", 'x');
	put("%c", 'x', ret);

	ret = printf("%.c", 'x');
	put("%.c", 'x', ret);

	ret = printf("%1c", 'x');
	put("%1c", 'x', ret);
	ret = printf("%5c", 'x');
	put("%5c", 'x', ret);

	ret = printf("%5.c", 'x');
	put("%5.c", 'x', ret);

	ret = printf("%-10c", 'x');
	put("%-10c", 'x', ret);
	ret = printf("%------------10c", 'x');
	put("%------------10c", 'x', ret);

	ret = printf("%*c", 0, 'x');
	put("%*c , 0", 'x', ret);
	ret = printf("%*c", -1, 'x');
	put("%*c, -1", 'x', ret);
	ret = printf("%*c", -5, 'x');
	put("%*c, -5", 'x', ret);
	ret = printf("%*c", 5, 'x');
	put("%*c, 5", 'x', ret);

	ret = printf("abc%%%%%%%10cabc", 'x');
	put("abc%%%%%%%10cabc", 'x', ret);

	//error
	printf("--------------------------warning\n");
	ret = printf("%0c", 0);//pc recognize as flag 0 and flag 0 is undefined
	put("%0c", 0, ret);
	ret = printf("%010c", 'x');
	put("%010c", 'x', ret);
	ret = printf("%.5c", 'x');//precision undefined
	put("%.5c", 'x', ret);
	ret = printf("%.0c", 'x');
	put("%.0c", 'x', ret);
	ret = printf("%.1c", 'x');
	put("%.1c", 'x', ret);
	ret = printf("%..c", 'x');
	put("%..c", 'x', ret);
	ret = printf("%.*c", -5, 'x');
	put("%.*c", -5, 'x');

	return (0);
}