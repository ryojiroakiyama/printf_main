#include <stdio.h>

void put(char *s, char *str, int ret)
{
	printf("]\n");
	printf("%s, %s\n", s, str);
	printf("ret=%d\n", ret);
	printf("--------\n");
}

int main(void)
{
	int ret;
	char *str = NULL;

	printf("-----------------s\n");
	ret = printf("%s", "ryojiro");
	put("%s", "ryojiro", ret);

	ret = printf("%.s", "ryojiro");
	put("%.s", "ryojiro", ret);
	ret = printf("%.s", str);
	put("%.s", str, ret);
	ret = printf("%.0s", "ryojiro");
	put("%.0s", "ryojiro", ret);
	ret = printf("%.3s", "ryojiro");
	put("%.3s", "ryojiro", ret);
	ret = printf("%.10s", "ryojiro");
	put("%.10s", "ryojiro", ret);
	ret = printf("%.10s", str);
	put("%.10s", str, ret);

	ret = printf("%1s", "ryojiro");
	put("%1s", "ryojiro", ret);
	ret = printf("%10s", "ryojiro");
	put("%10s", "ryojiro", ret);
	ret = printf("%10s", str);
	put("%10s", str, ret);

	ret = printf("%10.3s", "ryojiro");
	put("%10.3s", "ryojiro", ret);
	ret = printf("%10.5s", "ryojiro");
	put("%10.5s", "ryojiro", ret);
	ret = printf("%10.15s", "ryojiro");
	put("%10.15s", "ryojiro", ret);

	ret = printf("%-10.5s", "ryojiro");
	put("%-10.5s", "ryojiro", ret);
	ret = printf("%------------10.5s", "ryojiro");
	put("%------------10.5s", "ryojiro", ret);


	ret = printf("%.*s", -1, str);
	put("%.*s , -1", str, ret);
	ret = printf("%*.*s", 10, -3, "ryojiro");
	put("%*.*s , 10, -3", "ryojiro", ret);
	ret = printf("%*.*s", -10, 5, "ryojiro");
	put("%*.*s , -10, 5", "ryojiro", ret);
	ret = printf("%-*.*s", -10, 5, "ryojiro");
	put("%-*.*s ,-10, 5", "ryojiro", ret);
	ret = printf("%*s", 0, "ryojiro");
	put("%*s , 0", "ryojiro", ret);
	
	ret = printf("abc%10.10sabc", "ryojiro");
	put("abc%10.10sabc", "ryojiro", ret);

	//error
//	ret = printf("%0s", "ryojiro");//recognized as flag 0 and flag 0 is undefined
//	ret = printf("%010.5s", "ryojiro");

	return (0);
}
