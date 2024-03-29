//// https://www.acmicpc.net/problem/31429

#include <stdio.h>

typedef char string[1024];

typedef struct {
	string teamName;
	int solved;
	int penalty;
} Score;

Score scoreboard[] = {
	{ "Redshift", 12, 1600 },
	{ "SCC_Shinchon Coding Champions", 11, 894 },
	{ "������� ��ġ�� ����ġ�� �־��", 11, 1327 },
	{ "������", 10, 1311 },
	{ "1���Ϸ��Խ��ϴ�", 9, 1004 },
	{ "������", 9, 1178 },
	{ "������", 9, 1357 },
	{ "��ɼ��� �׳��", 8, 837 },
	{ "Woojeans", 7, 1055 },
	{ "ȫ�Ͽ���", 6, 556 },
	{ "��� ����", 6, 773 },
};

int main(void)
{
	int n;
	scanf("%d", &n);
	Score* score = &scoreboard[n-1];
	printf("%d %d", score->solved, score->penalty);
	return 0;
}
