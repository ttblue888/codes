#include<iostream>
using namespace std;

void quicksort(int *a,int l,int r)
{
	if (l >= r) return;
	int i = l,j = r;
	int t = a[i];
	while (i!=j)
	{
		while (t <= a[j] && i < j)
			j--;
		if (i<j)
			a[i++] = a[j];
		while (t>=a[i] && i < j)
			i++;
		if (i<j)
			a[j--] = a[i];
	}
	a[i] = t;
	quicksort(a, l, i - 1);
	quicksort(a, i + 1, r);
	
}

int main()
{
	int a[10] = { 2, 9, 3, 4, 1, 7, 0, 5, 8, 6 };
	quicksort( a, 0, 9);
	for (int i= 0; i < 10; i++)
		cout << a[i]<<endl;
	system("pause");
}