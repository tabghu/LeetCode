////1.��10��ѧ����ÿ��ѧ�������ݰ���ѧ�ţ�������3�ſγ̵ĳɼ����Ӽ�������10��ѧ�����ݣ���
////Ҫ�����3�ſγ���ƽ���ɼ���
////�Լ���߷�ѧ�������ݣ�����ѧ�ţ�������3�ſγ̳ɼ���ƽ��������
//#include <iostream>
//#include <string>
//using namespace std;
//struct Student
//{
//	int id;
//	string name;
//	double score[4];
//};
//
//void input(Student* stu, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "������ѧ��ѧ�š�������" << endl;
//		cin >> stu[i].id >> stu[i].name;
//		cout << "������ѧ�����ġ���ѧ��Ӣ��ɼ�" << endl;
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> stu[i].score[j];
//		}
//	}
//}
//void print(Student* stu, int len)
//{	
//	cout << "ѧ��" << '\t' << "����" << '\t' << "����" << '\t' << "��ѧ" << '\t' << "Ӣ��" << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout  << stu[i].id << '\t' <<  stu[i].name ;
//		cout << '\t'  << stu[i].score[0] << '\t' << stu[i].score[1] << '\t' << stu[i].score[2] << endl;
//	}
//}
//void average(Student* stu, int len)
//{
//	cout << "avg" << '\t' << '\t' ;
//	for (int i = 0; i < 3; i++)
//	{
//		double sum = 0.0;
//		for (int j = 0; j < len; j++)
//		{
//			sum += stu[j].score[i];
//		}
//		cout << sum / len << '\t';
//	}
//	cout << endl;
//}
//void find_max(Student* stu, int len)
//{
//	cout << endl;
//	cout << "��߷�ѧ������" << endl;
//	//��¼��߷�ѧ�����
//	int max = 0;
//	int ret = 0;
//	//����ѧ��ƽ����;
//	for (int i = 0; i < len; i++)
//	{
//		double avg = 0.0;
//		for (int j = 0; j < 3; j++)
//		{
//			avg += stu[i].score[j];
//		}
//		stu[i].score[3] = avg/3.0;
//	}
//	for (int i = 0; i < len; i++)
//	{
//		if (max < stu[i].score[3])
//		{
//			ret = i;
//			max = stu[i].score[3];
//		}
//	}
//	cout << stu[ret].id << '\t' << stu[ret].name;
//	cout << '\t' << stu[ret].score[0] << '\t' << stu[ret].score[1] << '\t' << stu[ret].score[2] << '\t' << stu[ret].score[3] << endl;
//
//}
//int main()
//{
//	Student Stu[10];
//	int size = sizeof(Stu) / sizeof(Stu[0]);
//	input(Stu, 3);
//	print(Stu, 3);
//	average(Stu, 3);
//	find_max(Stu, 3);
//	return 0;
//}