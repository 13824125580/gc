#include <stdio.h>

int m = 8;
int main(void)
{
	int k = m;
	printf("%s line %d. k= %d.\n.", __func__, __LINE__ ,k);
}
