#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
	int A[] = { 5, 5, 2, 2, 1, 4, 3 };
	Vector<int> vec(A, 5);
	Vector<int> vec1(vec);
	for (int i = 0; i < 5; i++)
		cout << vec1[i] << endl;
	cout << vec1[5] << endl;
	cout << vec1[6] << endl;
	vec1.sort();
	vec1.unsort();
	//vec1.mergeSort(0, 5);  //mergeSort()在protected受保护
	//vec1.selectionSort(0, 5); //selectionSort()在protected受保护
	//vec1.bubbleSort(0, 5);   //bubbleSort()在protected受保护
	for (int i = 0; i < 5; i++)
		cout << vec1[i] << endl;
	system("pause");
	return 0;
}