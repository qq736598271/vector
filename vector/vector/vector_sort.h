#pragma once

template <typename T>
void Vector<T>::sort(Rank lo, Rank hi)
{
	switch (rand() % 3)
	{
	case 0:
		bubbleSort(lo, hi);
		break;
	case 1:
		selectionSort(lo, hi);
		break;
	case 2:
		mergeSort(lo, hi);
		break;
	}
}