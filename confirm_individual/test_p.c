#include <stdio.h>

void put(char *s, void *pnt, int ret)
{
	printf("]\n");
	printf("%s, %p\n", s, pnt);
	printf("ret=%d\n", ret);
	printf("--------\n");
}

int main(void)
{
	int ret;
	int	pnt;

	printf("-----------------p\n");
	ret = printf("%p", &pnt);
	put("%p", &pnt, ret);

	ret = printf("%.p", &pnt);
	put("%.p", &pnt, ret);

	ret = printf("%1p", &pnt);
	put("%1p", &pnt, ret);
	ret = printf("%12p", &pnt);
	put("%12p", &pnt, ret);

	ret = printf("%5.p", &pnt);
	put("%5.p", &pnt, ret);

	ret = printf("%-20p", &pnt);
	put("%-20p", &pnt, ret);
	ret = printf("%------------20p", &pnt);
	put("%------------20p", &pnt, ret);

	ret = printf("%*p", 0, &pnt);
	put("%*p , 0", &pnt, ret);
	ret = printf("%*p", -1, &pnt);
	put("%*p, -1", &pnt, ret);
	ret = printf("%*p", -5, &pnt);
	put("%*p, -5", &pnt, ret);
	ret = printf("%*p", 5, &pnt);
	put("%*p, 5", &pnt, ret);

	ret = printf("abp%%%%%%%20pabp", &pnt);
	put("abp%%%%%%%20pabp", &pnt, ret);

	ret = printf("%p", (void *)0);
	put("%p", (void *)0, ret);
	ret = printf("%.p", (void *)0);
	put("%.p", (void *)0, ret);

	//error
//	ret = printf("%0p", 0);//pp recognize as flag 0 and flag 0 is undefined
//	ret = printf("%020p", &pnt);
//	ret = printf("%.5p", &pnt);//prepision undefined
//	ret = printf("%.0p", &pnt);
//	ret = printf("%.1p", &pnt);
//	ret = printf("%..p", &pnt);

	return (0);
}
