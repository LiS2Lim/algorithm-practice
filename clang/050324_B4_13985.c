//// https://www.acmicpc.net/board/view/86040
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d + %d = %d", &a, &b, &c);
	puts(a + b == c ? "YES" : "NO");
	return 0;
}
