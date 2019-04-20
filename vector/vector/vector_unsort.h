#pragma once

template <typename T>
void Vector<T>::unsort(Rank lo, Rank hi)
{
	T* V = _elem + lo; //将子向量_elem[lo, hi)视作另一向量V[0, hi - lo)，数组V定义为指针，改变数组V相应地址即为改变原_elem数组
	for (Rank i = hi - lo; i > 0; i--) //自后向前
		swap(V[i - 1], V[rand() % i]); //将V[i - 1]与V[0, i)中某一元素随机交换
}