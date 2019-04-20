#pragma once

template <typename T> //�����鲢���򣨵ݹ鵽����������λ��
void Vector<T>::mergeSort(Rank lo, Rank hi)
{
	if (hi - lo < 2) return; //��Ԫ��������Ȼ���򣬷���
	int mi = (lo + hi) / 2; //���е�Ϊ��
	mergeSort(lo, mi); mergeSort(mi, hi); //�ֱ����� 
	merge(lo, mi, hi); //���һ�ε���mergeʱ��[lo,mi)��[mi,hi)�Ѿ��ݹ�Ϊ������������䣬���չ鲢
}