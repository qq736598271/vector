#pragma once

template <typename T>
void Vector<T>::bubbleSort(Rank lo, Rank hi)
{
	while (!bubble(lo, hi--)); //��һ��ɨ�轻����ÿ�ε���sortedΪfalse��ȡ����bubble(lo,hi--)Ϊ�棬ֱ��ȫ��
}