// https://www.acmicpc.net/problem/10757

#include <stdio.h>
#include <string.h>

/* ====================================
 * ���� ���� �޼��� 
 * ====================================*/
void reverse(char arr[])
{
	int len = strlen(arr);
	for (int i = 0; i < len/2; i++)
	{
		char temp = arr[i];
		arr[i] = arr[(len-1) - i];
		arr[(len-1) - i] = temp;
	};
}

/* ====================================
 * ���ϱ� �޼��� 
 * ====================================*/
void add(char arrA[], char arrB[], char arrResult[])
{
	int carry = 0;
	int lenA = strlen(arrA);
	int lenB = strlen(arrB);
	int len = lenA > lenB ? lenA : lenB;
	
	for (int i = 0; i < len; i++)
	{
		int digitA = (i < lenA) ? arrA[i] - '0' : 0 ;
		int digitB = (i < lenB) ? arrB[i] - '0' : 0 ;
		
		int sum = digitA + digitB + carry;
		carry = sum / 10 ;
		//// ��� �迭�� �Է� 
		arrResult[i] = (sum % 10) + '0';
	}
	
	//// ���� ������ ��� �Ŀ� �ڸ��� �ø��� ���� ���, ���� ���� 1�� �߰� 
	if (carry == 1)
	{
		arrResult[len] = '1';
		len++;
	}
	
	arrResult[len] = '\0';
}

/* ====================================
 * ���� �޼��� 
 * ====================================*/
int main()
{
	//// �迭 ���� 
	char strA[10002], strB[10002], result[10004];
	
	//// �Է� 
	scanf("%s %s", strA, strB);
	
	//// �Է¹��� �迭�� ���� ���� 
	reverse(strA);
	reverse(strB);
	
	//// �Է¹��� �迭�� ���ؼ� ��� �迭�� ���� 
	add(strA, strB, result);
	
	//// ��� �迭�� �ٽ� ���� ���� 
	reverse(result);
	
	//// ��� ��� 
	printf("%s\n", result);
	
	//// ���α׷� ���� 
	return 0;
}

