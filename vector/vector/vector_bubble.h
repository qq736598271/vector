#pragma once

template <typename T>
bool Vector<T>::bubble(Rank lo, Rank hi)
{
	bool sorted = true; //���������־
	while ( ++lo < hi ) //�������ң���һ����������Ԫ��
		if (_elem[lo - 1] > _elem[lo])
		{
			//������
			sorted = false; //���������־Ϊfalse����״̬Ϊ����
			swap(_elem[lo - 1], _elem[lo]); //����ʹ�ֲ�����
		}
	return sorted; //���������־ 
}
