#pragma once

//���������Ĺ鲢��mergesort�ݹ鵽������λ�ģ�

template <typename T>
void Vector<T>::merge(Rank lo, Rank mi, Rank hi)
{
	T* A = _elem + lo; //�ϲ��������A[0, hi - lo) = _elem[lo, hi)
	int lb = mi - lo; T* B = new T[lb]; //ǰ������B[0, lb) = _elem[lo, mi)
	for (Rank i = 0; i < lb;  B[i] = A[i++]); //����ǰ�����������Ʋ�����for���������
	int lc = hi - mi; T* C = _elem + mi; //��������C[0, lc) = _elem[mi, hi)
	for (Rank i = 0, j = 0, k = 0; (j < lb) || (k < lc); ) { //B[j]��C[k]�е�С������Aĩβ
		if ((j < lb) && (!(k < lc) || (B[j] <= C[k]))) A[i++] = B[j++]; //����A��Ԫ��
		if ((k < lc) && (!(j < lb) || (C[k] < B[j]))) A[i++] = C[k++];
	}
	delete[] B; //�ͷ���ʱ�ռ�B
}//�鲢��õ���������������[lo, hi)
