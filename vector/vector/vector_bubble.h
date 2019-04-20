#pragma once

template <typename T>
bool Vector<T>::bubble(Rank lo, Rank hi)
{
	bool sorted = true; //整体有序标志
	while ( ++lo < hi ) //自左向右，逐一检查各对相邻元素
		if (_elem[lo - 1] > _elem[lo])
		{
			//若逆序
			sorted = false; //调整有序标志为false，即状态为逆序
			swap(_elem[lo - 1], _elem[lo]); //交换使局部有序
		}
	return sorted; //返回有序标志 
}
