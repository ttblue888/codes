#include<iostream>
using namespace std;

void strcopy(const char* str1, char* str2)
{
	if (str1 == NULL || str2 == NULL)
		return;
	char *q = str2;
	while (*str1 != '\0')
	{
		*q++ = *str1++;
	}
	*q = '\0';
}

int main()
{
	char *str1, *str2;
	str1 = (char*)malloc(200 * sizeof(char));
	str2 = (char*)malloc(200 * sizeof(char));
	cin >> str1;
	strcopy(str1, str2);
	cout << str1 <<endl<< str2;
	system("pause");
	}