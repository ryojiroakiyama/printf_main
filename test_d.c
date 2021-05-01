#include <stdio.h>

void put(char *s, int nb, int ret)
{
	printf("]\n");
	printf("%s, %d\n", s, nb);
	printf("ret=%d\n", ret);
	printf("--------\n");
}

int main(void)
{
	int ret;

	printf("-----------------d\n");
	ret = printf("%d", 123);
	put("%d", 123, ret);

	ret = printf("%.d", 123);
	put("%.d", 123, ret);
	ret = printf("%.d", 0);
	put("%.d", 0, ret);
	ret = printf("%.0d", 0);
	put("%.0d", 0, ret);
	ret = printf("%.0d", 1);
	put("%.0d", 1, ret);
	ret = printf("%.0d", 123);
	put("%.0d", 123, ret);
	ret = printf("%.3d", 123);
	put("%.3d", 123, ret);
	ret = printf("%.5d", 123);
	put("%.5d", 123, ret);

	ret = printf("%0d", 0);
	put("%0d", 0, ret);
	ret = printf("%1d", 123);
	put("%1d", 123, ret);
	ret = printf("%5d", 123);
	put("%5d", 123, ret);

	ret = printf("%10.3d", 123);
	put("%10.3d", 123, ret);
	ret = printf("%10.5d", 123);
	put("%10.5d", 123, ret);
	ret = printf("%10.15d", 123);
	put("%10.15d", 123, ret);

	ret = printf("%-10.5d", 123);
	put("%-10.5d", 123, ret);
	ret = printf("%------------10.5d", 123);
	put("%------------10.5d", 123, ret);

	ret = printf("%010d", 123);
	put("%010d", 123, ret);
	ret = printf("%010.1d", 123);
	put("%010.1d", 123, ret);
	ret = printf("%010.5d", 123);
	put("%010.5d", 123, ret);
	ret = printf("%0000000000010.5d", 123);
	put("%0000000000010.5d", 123, ret);
	ret = printf("%010.5d", 123);
	put("%010.5d", 123, ret);

	ret = printf("%.*d", -1, 0);
	put("%.*d , -1", 0, ret);
	ret = printf("%*.*d", 10, -3, 123);
	put("%*.*d , 10, -3", 123, ret);
	ret = printf("%*.*d", -10, 5, 123);
	put("%*.*d , -10, 5", 123, ret);
	ret = printf("%-*.*d", -10, 5, 123);
	put("%-*.*d ,-10, 5", 123, ret);
	ret = printf("%*d", 0, 123);
	put("%*d , 0", 123, ret);
	
	ret = printf("abc%010dabc", 123);
	put("abc%010dabc", 123, ret);

	//error
//	ret = printf("%-010.5d", 123);
//	ret = printf("%-----5----10.5d", 123);
//	ret = printf("%.-4d", 123);	
//	ret = printf("%*.*d", -----10, 5, 123);
//	ret = printf("%$)0#$", 123);
//	ret = printf("%.~d", 123);
//	ret = printf("%**d\n", 5, 123);
//	ret = printf("%*.**d\n", 10, 5, 123);
//	ret = printf("%2147483647d", 123);//int_max, stop to put
//	ret = printf("%*d", 0000010, 123);//cp consider about octal
//	ret = printf("%", 123);
//	ret = printf("adsf", 123);
//	ret = printf("%.-5d", 123);

	//use the ret of write to ret of printf?
	//%%
	//pointer function
	//guwakamoredejikkenn
	//enum
	//test

	return (0);
}
