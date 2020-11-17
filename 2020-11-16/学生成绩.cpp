////1.有10个学生，每个学生的数据包括学号，姓名，3门课程的成绩，从键盘输入10个学生数据，、
////要求输出3门课程总平均成绩，
////以及最高分学生的数据（包括学号，姓名，3门课程成绩，平均分数）
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
//		cout << "请输入学生学号、姓名：" << endl;
//		cin >> stu[i].id >> stu[i].name;
//		cout << "请输入学生语文、数学、英语成绩" << endl;
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> stu[i].score[j];
//		}
//	}
//}
//void print(Student* stu, int len)
//{	
//	cout << "学号" << '\t' << "姓名" << '\t' << "语文" << '\t' << "数学" << '\t' << "英语" << endl;
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
//	cout << "最高分学生数据" << endl;
//	//记录最高分学生编号
//	int max = 0;
//	int ret = 0;
//	//计算学生平均分;
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