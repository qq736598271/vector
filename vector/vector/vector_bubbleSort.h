#pragma once

template <typename T>
void Vector<T>::bubbleSort(Rank lo, Rank hi)
{
	while (!bubble(lo, hi--)); //逐一做扫描交换，每次迭代sorted为false，取！则！bubble(lo,hi--)为真，直至全序
}