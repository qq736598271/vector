#pragma once

#include "fib.h"
//Fibonacci�����㷨���汾B��������������������[lo, hi)�ڲ���Ԫ��e��0 <= lo <= hi <= _size
template <typename T> 
static Rank fibSearch(T* A, T const& e, Rank lo, Rank hi)
{
	Fib fib(hi - lo); //����Fib����
	while (lo < hi)
	{
		//ÿ������������һ�αȽ��жϣ���������֧
		while (hi - lo < fib.get()) fib.prev(); //ͨ����ǰ˳�����
		Rank mi = lo + fib.get() - 1; //ȷ������Fib(k) - 1�����
		(e < A[mi]) ? hi = mi : lo = mi + 1; //�ȽϺ�ȷ������ǰ���[lo, mi)�����(mi, hi)
	} //�ɹ����Ҳ�����ǰ��ֹ
	return --lo; //ѭ������ʱ��loΪ����e��Ԫ�ص���С�ȣ���lo - 1��������e��Ԫ�ص������
}//�ж������Ԫ��ʱ�����ܱ�֤������������ߣ�����ʧ��ʱ���ܹ�����ʧ�ܵ�λ��