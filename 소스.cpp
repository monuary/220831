//const int num=10; num을 10으로 상수화
//const int* ptr=&val; 포인터를 이용해서 val값을 변경할 수 없다.
//int* const ptr=&val; 포인터 상수화
//const int* const ptr=&val; 포인터 상수화, 포인터를 이용해서 val값을 변경할 수 없다.

//데이터 : 전역변수가 저장되는 영역
//매개변수 : 함수를 호출할 때 인수로 전달된 값을 함수 내부에서 사용할 수 있게 해주는 변수
//스택 : 지역변수 및 매개변수가 저장되는 영역
//malloc(동적할당) : 프로그래밍에서 실행시간동안 사용할 메모리공간을 할당하는 것. 헤더파일 <stdlib.h>를 써야한다.
//힙 : malloc 함수호출에 의해 프로그램이 실행되는 과정에서 동적으로 할당이 이뤄지는 영역
//malloc 함수호출에 의해 할당된 메모리 공간은 free 힘수호출을 통해 소멸하지 않으면 헤제되지 않는다.

//int* a;
//a=(int*)malloc(sizeofof(int)*4); int 타입사이즈 4만큼의 메모리 할당
//free(a); 할당된 메모리를 해제

//call-by-value : 포인터 x
//call-by-reference : 포인터 o

//c에서는 0이 거짓을 의미하고, 0이 아닌 모든 정수는 참을 의미한다. 따라서 참과 거짓의 표현을 위해 각각의 상수를 정의한다.
//#define true 1, #define false 0
//cpp에서는 이미 이것이 정의되어 있다.(iostream에 정의되어 있는듯)

#include<iostream>
using namespace std;

int main()
{
	int num = 10;
	int i = 0;

	cout << "true: " << true << endl;//true는 상수 1로 선언되어 있다.
	cout << "false: " << false << endl;//false는 상수 0으로 선언되어 있다.

	while (true)//while 안에 1(true)가 들어가면 무한반복, 0(false)가 들어가면 일어나지 않는다.
	{
		cout << i++ << " ";
		if (i > num)break;
	}
	cout << endl;

	cout << "sizeof 1: " << sizeof(1) << endl;//상수 1의 데이터 크기는 4다.
	cout << "sizeof 0: " << sizeof(0) << endl;//상수 0의 데이터 크기는 4다.
	cout << "sizeof true: " << sizeof(true) << endl;//true의 데이터 크기는 1이다.
	cout << "sizeof false: " << sizeof(false) << endl;//false의 데이터 크기는 1이다.
	return 0;
}