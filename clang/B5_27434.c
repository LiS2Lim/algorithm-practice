//// https://www.acmicpc.net/problem/27434
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000000

// ���ڿ��� ���ڸ� ���ϴ� �Լ�
void multiply(char *num, int n) {
    int carry = 0;
    int len = strlen(num);
    int i;
    for (i = len - 1; i >= 0; i--) {
        int digit = num[i] - '0';
        int product = digit * n + carry;
        num[i] = (product % 10) + '0';
        carry = product / 10;
    }
    while (carry) {
        len++;
        num[len - 1] = (carry % 10) + '0';
        carry /= 10;
    }
}

// ���丮���� ����ϴ� �Լ�
void factorial(int n) {
    char *result = (char *)malloc(MAX_LENGTH * sizeof(char));
    if (result == NULL) {
        printf("�޸� �Ҵ翡 �����߽��ϴ�.");
        exit(1);
    }
    strcpy(result, "1");

	int i;
    for (i = 2; i <= n; i++) {
        multiply(result, i);
    }

    printf("%s\n", result);
    free(result);
}

int main() {
    int N;

    // �Է� �ޱ�
    printf("���� N�� �Է��ϼ���: ");
    scanf("%d", &N);

    // ���丮�� ��� �� ���
    factorial(N);

    return 0;
}

