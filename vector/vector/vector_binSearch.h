#pragma once

//���ֲ������Ű汾

template <typename T> static Rank binSearch(T* A, T const& e, Rank lo, Rank hi)
{
	while (lo < hi)
	{
		//ÿ������������һ�αȽ��жϣ���������֧
		Rank mi = (lo + hi) / 2; //���е�Ϊ���
		(e < A[mi]) ? hi = mi : lo = mi + 1; //���ȽϺ�ȷ������[lo, mi)��(mi, hi)
	}
	return --lo; //������ʱ��loΪ����e��Ԫ�ص���С�ȣ���lo - 1��������e��Ԫ�ص������
} //�ж������Ԫ��ʱ�����ܱ�֤����������ߣ�����ʧ��ʱ���ܹ�����ʧ�ܵ�λ��