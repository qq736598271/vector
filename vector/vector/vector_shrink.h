#pragma once

//װ�����ӹ�Сʱѹ��������ռ�ռ�

template <typename T>
void Vector<T>::shrink()
{
	if (_capacity < DEFAULT_CAPACITY * 2) return; //����������DEFAULT_CAPACITY����
	if (_size * 4 > _capacity) return; //��25%Ϊ��
	T* oldElem = _elem; _elem = new T[_capacity / 2]; //��������
	for (int i = 0; i < _size; i++)
		_elem[i] = oldElem[i]; //����ԭ��������
	delete[] oldElem; //�ͷ�ԭ�ռ�
}