#include <iostream>

using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

template <typename T>
void swap1(T& x, T& y)
{
	T t = x;
	x = y;
	y = t;
}

//同时使用类型和非类型模板（常量或常量表达式）形参 
template <typename T, size_t N>
void select_sort(T (&array)[N])//形参为数组的引用 
{
	for(int i=0; i<N; i++)
	{
		int k = i;
		for(int j=i; j<N; j++)
		{
			if(array[k] > array[j])
			{
				k = j;	
			}	
		}	
		swap1(array[i], array[k]);
	} 
	
}

int main(int argc, char *argv[]) {
	
	int a[] = {1, 3, 6, 2, 4, 5};
	
	select_sort(a);
	
	for(int i=0; i<6; i++)
	{
		cout<<a[i]<<endl;	
	} 
	
	char b[] = {'a', 'f', 'e', 'd', 'b', 'c'};
	
	select_sort(b);
	
	for(int i=0; i<6; i++)
	{
		cout<<b[i]<<endl;	
	} 
	
	return 0;
}
