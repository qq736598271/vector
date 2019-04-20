#pragma once

//�����ռ䲻��ʱ����
template <typename T>
void Vector<T>::expand()
{
	if (_size < _capacity) return; //δ��Աʱ����������
	if (_capacity < DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY; //��������С����
	T* oldElem = _elem; _elem = new T[_capacity * 2]; //�����ӱ�
	for (int i = 0; i < _size; i++)
		_elem[i] = oldElem[i]; //����ԭ�������ݣ�TΪ�������ͣ��������ظ�ֵ������'='��
	delete[] oldElem; //�ͷ�ԭ���ݿռ�
}