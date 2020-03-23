#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>

T suma(T v[], int begin, int end, T element = 5)
{
	int i = begin;
	int S = 0;
	while (i <= end)
	{
		S = S + v[i];
		i++;
	}
	S = S + element;
	return S;
}


template<class T>

T sumalambda(T v[], int begin, int end, T element = 5)
{
	vector <T> b;

	int i = begin;
	while (i <= end) 
	{
		b.push_back(v[i]);
		i++;
	}
	element = 0;
	std::for_each(b.begin(), b.end(), [&element](T aux)
		{
			element = element + aux;
		});
		return element;
}

int main()
{
	int v[100] = { 1, 2, 4, 5, 6, 7, 9, 10 };
	int sum = suma<int>(v, 0, 2);
	cout << sum<<endl;
	sum = sumalambda<int>(v, 0, 2);
	cout << sum;
	return 0;
}