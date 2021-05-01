#include <stdio.h>

void put(char *s, int nb, int ret)
{
	printf("]\n");
	printf("%s, %i\n", s, nb);
	printf("ret=%i\n", ret);
	printf("--------\n");
}

int main(void)
{
	int ret;

	printf("-----------------i\n");
	ret = printf("%i", 123);
	put("%i", 123, ret);
	ret = printf("%.i", 123);
	put("%.i", 123, ret);
	ret = printf("%.i", 0);
	put("%.i", 0, ret);
	ret = printf("%.0i", 0);
	put("%.0i", 0, ret);
	ret = printf("%.0i", 1);
	put("%.0i", 1, ret);
	ret = printf("%.0i", 123);
	put("%.0i", 123, ret);
	ret = printf("%.3i", 123);
	put("%.3i", 123, ret);
	ret = printf("%.5i", 123);
	put("%.5i", 123, ret);
	ret = printf("%1i", 123);
	put("%1i", 123, ret);
	ret = printf("%5i", 123);
	put("%5i", 123, ret);
	ret = printf("%10.3i", 123);
	put("%10.3i", 123, ret);
	ret = printf("%10.5i", 123);
	put("%10.5i", 123, ret);
	ret = printf("%10.15i", 123);
	put("%10.15i", 123, ret);
	ret = printf("%-10.5i", 123);
	put("%-10.5i", 123, ret);
	ret = printf("%------------10.5i", 123);
	put("%------------10.5i", 123, ret);
	ret = printf("%010.5i", 123);
	put("%010.5i", 123, ret);
	ret = printf("%0000000000010.5i", 123);
	put("%0000000000010.5i", 123, ret);
	ret = printf("%010.5i", 123);
	put("%010.5i", 123, ret);
	ret = printf("%.*i", -1, 0);
	put("%.*i , -1", 0, ret);
	ret = printf("%*.*i", 10, -3, 123);
	put("%*.*i , 10, -3", 123, ret);
	ret = printf("%*.*i", -10, 5, 123);
	put("%*.*i , -10, 5", 123, ret);
	ret = printf("%*i", 0000010, 123);
	put("%*i , 0000010", 123, ret);
	ret = printf("%010i", 123);
	put("%010i", 123, ret);
	printf("%i\n", 010);
	//error
//	ret = printf("%-010.5i", 123);
//	ret = printf("%-----5----10.5i", 123);
//	printf("%.-4i", 123);	
//	ret = printf("%*.*i", -----10, 5, 123);
//	ret = printf("%$)0#$", 123);
//	ret = printf("%.~i", 123);
//	ret = printf("%**i\n", 5, 123);
//	ret = printf("%*.**i\n", 10, 5, 123);

	//use the ret of write to ret of printf?
	//%%
	//pointer function
	//guwakamoreiejikkenn

	return (0);
}
