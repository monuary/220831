//const int num=10; num�� 10���� ���ȭ
//const int* ptr=&val; �����͸� �̿��ؼ� val���� ������ �� ����.
//int* const ptr=&val; ������ ���ȭ
//const int* const ptr=&val; ������ ���ȭ, �����͸� �̿��ؼ� val���� ������ �� ����.

//������ : ���������� ����Ǵ� ����
//�Ű����� : �Լ��� ȣ���� �� �μ��� ���޵� ���� �Լ� ���ο��� ����� �� �ְ� ���ִ� ����
//���� : �������� �� �Ű������� ����Ǵ� ����
//malloc(�����Ҵ�) : ���α׷��ֿ��� ����ð����� ����� �޸𸮰����� �Ҵ��ϴ� ��. ������� <stdlib.h>�� ����Ѵ�.
//�� : malloc �Լ�ȣ�⿡ ���� ���α׷��� ����Ǵ� �������� �������� �Ҵ��� �̷����� ����
//malloc �Լ�ȣ�⿡ ���� �Ҵ�� �޸� ������ free ����ȣ���� ���� �Ҹ����� ������ �������� �ʴ´�.

//int* a;
//a=(int*)malloc(sizeofof(int)*4); int Ÿ�Ի����� 4��ŭ�� �޸� �Ҵ�
//free(a); �Ҵ�� �޸𸮸� ����

//call-by-value : ������ x
//call-by-reference : ������ o

//c������ 0�� ������ �ǹ��ϰ�, 0�� �ƴ� ��� ������ ���� �ǹ��Ѵ�. ���� ���� ������ ǥ���� ���� ������ ����� �����Ѵ�.
//#define true 1, #define false 0
//cpp������ �̹� �̰��� ���ǵǾ� �ִ�.(iostream�� ���ǵǾ� �ִµ�)

#include<iostream>
using namespace std;

int main()
{
	int num = 10;
	int i = 0;

	cout << "true: " << true << endl;//true�� ��� 1�� ����Ǿ� �ִ�.
	cout << "false: " << false << endl;//false�� ��� 0���� ����Ǿ� �ִ�.

	while (true)//while �ȿ� 1(true)�� ���� ���ѹݺ�, 0(false)�� ���� �Ͼ�� �ʴ´�.
	{
		cout << i++ << " ";
		if (i > num)break;
	}
	cout << endl;

	cout << "sizeof 1: " << sizeof(1) << endl;//��� 1�� ������ ũ��� 4��.
	cout << "sizeof 0: " << sizeof(0) << endl;//��� 0�� ������ ũ��� 4��.
	cout << "sizeof true: " << sizeof(true) << endl;//true�� ������ ũ��� 1�̴�.
	cout << "sizeof false: " << sizeof(false) << endl;//false�� ������ ũ��� 1�̴�.
	return 0;
}