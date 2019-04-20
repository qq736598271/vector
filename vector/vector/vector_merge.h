#pragma once

//有序向量的归并（mergesort递归到两个单位的）

template <typename T>
void Vector<T>::merge(Rank lo, Rank mi, Rank hi)
{
	T* A = _elem + lo; //合并后的向量A[0, hi - lo) = _elem[lo, hi)
	int lb = mi - lo; T* B = new T[lb]; //前子向量B[0, lb) = _elem[lo, mi)
	for (Rank i = 0; i < lb;  B[i] = A[i++]); //复制前子向量，复制操作在for条件内完成
	int lc = hi - mi; T* C = _elem + mi; //后子向量C[0, lc) = _elem[mi, hi)
	for (Rank i = 0, j = 0, k = 0; (j < lb) || (k < lc); ) { //B[j]和C[k]中的小者续至A末尾
		if ((j < lb) && (!(k < lc) || (B[j] <= C[k]))) A[i++] = B[j++]; //覆盖A中元素
		if ((k < lc) && (!(j < lb) || (C[k] < B[j]))) A[i++] = C[k++];
	}
	delete[] B; //释放临时空间B
}//归并后得到完整的有序向量[lo, hi)
