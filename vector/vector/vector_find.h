#pragma once

template <typename T> //����������˳����ң��������һ��Ԫ��e��λ��;ʧ��ʱ�򷵻�lo - 1
Rank Vector<T>::find(T const& e, Rank lo, Rank hi) const
{
	while ((lo < hi--) && (e != _elem[hi])); //�Ӻ���ǰ��˳�����
	return hi; //��hi < lo������ζ��ʧ��;����hi������Ԫ�ص���
}