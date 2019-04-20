#pragma once

template <typename T> //向量归并排序（递归到相邻两个单位）
void Vector<T>::mergeSort(Rank lo, Rank hi)
{
	if (hi - lo < 2) return; //单元素区间自然有序，否则
	int mi = (lo + hi) / 2; //以中点为界
	mergeSort(lo, mi); mergeSort(mi, hi); //分别排序 
	merge(lo, mi, hi); //最后一次调用merge时，[lo,mi)和[mi,hi)已经递归为有序的两个区间，最终归并
}