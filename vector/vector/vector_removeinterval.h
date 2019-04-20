#pragma once

template <typename T>
int Vector<T>::remove(Rank lo, Rank hi)
{
	//ɾ������[lo, hi)
	if (lo == hi) return 0; //����Ч�ʿ��ǣ����������˻����������remove(0, 0)
	while (hi < _size) _elem[lo++] = _elem[hi++]; //[hi, _size)˳��ǰ��hi - lo����Ԫ
	_size = lo; //���¹�ģ��ֱ�Ӷ���β��[lo, _size = hi)����
	shrink(); //���б�Ҫ �������� 
	return hi - lo; //���ر�ɾ��Ԫ�ص���Ŀ
}