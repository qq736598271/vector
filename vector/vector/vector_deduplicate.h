#pragma once

template <typename T>
int Vector<T>::deduplicate()
{
	//ɾ�����������е��ظ�Ԫ��
	int oldSize = _size; //��¼ԭ��ģ
	Rank i = 1; //��_elem[1]��ʼ
	while (i < _size) //��ǰ�����һ�����Ԫ��_elem[i]
		(find(_elem[i], 0, i) < 0) ? //����ǰ׺��Ѱ����֮��ͬ�ߣ�����һ����
		i++ : remove(i); //������ͬ������������̣�����ɾ����ͬ�ߣ�ÿ��ִ��remove(i)������_size��С
	return oldSize - _size;
}