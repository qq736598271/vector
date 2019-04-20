#pragma once

//二分查找最优版本

template <typename T> static Rank binSearch(T* A, T const& e, Rank lo, Rank hi)
{
	while (lo < hi)
	{
		//每步迭代仅需做一次比较判断，有两个分支
		Rank mi = (lo + hi) / 2; //以中点为轴点
		(e < A[mi]) ? hi = mi : lo = mi + 1; //经比较后确定深入[lo, mi)或(mi, hi)
	}
	return --lo; //环结束时，lo为大于e的元素的最小秩，故lo - 1即不大于e的元素的最大秩
} //有多个命中元素时，总能保证返回秩最大者；查找失败时，能够返回失败的位置