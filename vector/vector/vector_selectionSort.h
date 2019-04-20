#pragma once

template <typename T>
Rank Vector<T>::max(Rank lo, Rank hi)
{
	Rank mx = hi;   //hi是越界秩，默认value为-842150451，为最小
	while (lo < hi--)
		if (_elem[hi] > _elem[mx])
			mx = hi;
	return mx;
}

template <typename T> //向量选择排序
void Vector<T>::selectionSort(Rank lo, Rank hi)
{
	while (lo < hi--)
		swap(_elem[max(lo, hi)], _elem[hi]); //将[hi]与[lo, hi]中的最大者交换
}




