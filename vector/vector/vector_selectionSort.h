#pragma once

template <typename T>
Rank Vector<T>::max(Rank lo, Rank hi)
{
	Rank mx = hi;   //hi��Խ���ȣ�Ĭ��valueΪ-842150451��Ϊ��С
	while (lo < hi--)
		if (_elem[hi] > _elem[mx])
			mx = hi;
	return mx;
}

template <typename T> //����ѡ������
void Vector<T>::selectionSort(Rank lo, Rank hi)
{
	while (lo < hi--)
		swap(_elem[max(lo, hi)], _elem[hi]); //��[hi]��[lo, hi]�е�����߽���
}




