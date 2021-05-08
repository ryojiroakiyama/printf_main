#include <stdio.h>

void put(char *s, int ret)
{
	printf("]\n");
	printf("%s\n", s);
	printf("ret=%d\n", ret);
	printf("--------\n");
} 

int main(void)
{
	int ret;

	printf("-----------------%%\n");
	ret = printf("%%");
	put("%%", ret);

	ret = printf("%.%");
	put("%.%", ret);
	ret = printf("%.0%");
	put("%.0%", ret);
	ret = printf("%.3%");
	put("%.3%", ret);
	ret = printf("%.5%");
	put("%.5%", ret);
	ret = printf("%.0005%");
	put("%.0005%", ret);

	ret = printf("%1%");
	put("%1%", ret);
	ret = printf("%5%");
	put("%5%", ret);

	ret = printf("%10.3%");
	put("%10.3%", ret);
	ret = printf("%10.5%");
	put("%10.5%", ret);
	ret = printf("%10.15%");
	put("%10.15%", ret);

	ret = printf("%-10.5%");
	put("%-10.5%", ret);
	ret = printf("%------------10.5%");
	put("%------------10.5%", ret);

	ret = printf("%010%");
	put("%010%", ret);
	ret = printf("%010.1%");
	put("%010.1%", ret);
	ret = printf("%010.5%");
	put("%010.5%", ret);
	ret = printf("%0000000000010.5%");
	put("%0000000000010.5%", ret);
	ret = printf("%010.5%");
	put("%010.5%", ret);

	ret = printf("%*.*%", -10, 5);
	put("%*.*d , -10, 5", ret);
	ret = printf("%-*.*%", -10, 5);
	put("%-*.*d ,-10, 5", ret);
	
	ret = printf("abc%010dabc");
	put("abc%010dabc", ret);


	//error
	ret = printf("%-010.5%");//compile said ignore one of flag
	put("%-010.5%", ret);
	ret = printf("%0-10.5%");
	put("%0-10.5%", ret);
//	ret = printf("%-----5----10.5%");
//	ret = printf("%.-4%");	
//	ret = printf("%*.*%", -----10, 5);
//	ret = printf("%$)0#$");
//	ret = printf("%.~%");
//	ret = printf("%**d\n", 5);
//	ret = printf("%2147483647%");//int_max, stop to put
//	ret = printf("%");
//	ret = printf("adsf");
//	ret = printf("%.-5%");
//	ret = printf("%10*.42%", 5);
//	ret = printf("%10.5");

	return (0);
}
