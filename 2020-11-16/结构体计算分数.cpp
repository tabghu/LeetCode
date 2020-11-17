//2.用结构体定义一个分数的结构，用于表示 2 / 3, 5 / 6这样的分数，并用函数实现分数的加法和乘法。
//加法输入样例：（1，2），（1，6）-> (4，6)
//乘法输入样例：（1，2），（1，6）-> (1，12)

#include <iostream>
using namespace std;

struct Fenshu
{
	int fenzi;
	int fenmu;
};
int gcb(int a, int b)
{
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	while (b)
	{
		a = a % b;
		int temp = a;
		a = b;
		b = temp;
	}
	return a;
}
Fenshu add( Fenshu a, Fenshu b)
{
	//求解最小公倍数
	Fenshu result;
	int ret = (a.fenmu * b.fenmu)/(gcb(a.fenmu, b.fenmu));
	a.fenzi *= (ret / a.fenmu);
	b.fenzi *= (ret / b.fenmu);
	result.fenmu = ret;
	result.fenzi = a.fenzi + b.fenzi;
	return result;
}
Fenshu sub(Fenshu a, Fenshu b)
{
	Fenshu result;
	int ret = (a.fenmu * b.fenmu) / (gcb(a.fenmu, b.fenmu));
	a.fenzi *= (ret / a.fenmu);
	b.fenzi *= (ret / b.fenmu);
	result.fenmu = ret;
	result.fenzi = a.fenzi - b.fenzi;
	return result;
}
Fenshu mul(Fenshu a, Fenshu b)
{
	Fenshu result;
	result.fenmu = a.fenmu * b.fenmu;
	result.fenzi = a.fenzi * b.fenzi;
	return result;
}
Fenshu div(Fenshu a, Fenshu b)
{
	Fenshu result;
	int temp = b.fenmu;
	b.fenmu = b.fenzi;
	b.fenzi = temp;
	result = mul(a, b);
	if(result.fenmu < 0 && result.fenzi < 0)
	{
		result.fenmu = -result.fenmu;
		result.fenzi = -result.fenzi;
	}
	return result;
}
void print(Fenshu ret)
{
	int temp = gcb(ret.fenmu, ret.fenzi);
	//将结果进行化简
	if (temp != 1)
	{
		ret.fenmu /= temp;
		ret.fenzi /= temp;
	}
	if (ret.fenzi == 0)
	{
		cout << 0 << endl;
	}
	else if (ret.fenmu == 1)
	{
		cout << ret.fenzi << endl;
	}
	else
	{
		cout << ret.fenzi << "/" << ret.fenmu << endl;
	}
}
void judge(Fenshu& a, Fenshu& b)
{
	if (a.fenmu < 0)
	{
		a.fenmu = -a.fenmu;
		a.fenzi = -a.fenzi;

	}
	if (b.fenmu < 0)
	{
		b.fenmu = -b.fenmu;
		b.fenzi = -b.fenzi;
	}
	if ((a.fenmu || b.fenmu) == 0)
	{
		cout << "输入有误" << endl;
	}
}
int main()
{

	Fenshu ret;
	/*Fenshu a = { 1,-2};
	Fenshu b = { -3, 4};*/
	Fenshu a, b;
	cin >> a.fenzi >> a.fenmu >> b.fenzi >> b.fenmu;
	judge(a, b);
	ret = add(a, b);
	print(ret);
	ret = sub(a, b);
	print(ret);
	ret = mul(a, b);
	print(ret);
	ret = div(a, b);
	print(ret);
	return 0;
}