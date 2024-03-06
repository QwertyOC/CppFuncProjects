#include <iostream>
using namespace std;
#define random(min, max) (rand() % (max - min + 1) + min)


void fillDoubleArray(int** array) {
	int size1 = _msize(array) / sizeof(array[0]);
	for (int i = 0; i < size1; i++) {
		int size2 = _msize(array[i]) / sizeof(array[i][0]);
		for (int j = 0; j < size2; j++) {
			array[i][j] = random(1, 10);
		}
	}
}


void showDoubleArray(int** array) {
	int size1 = size1 = _msize(array) / sizeof(array[0]);
	int size2;
	for (int i = 0; i < size1; i++) {
		size2 = _msize(array[i]) / sizeof(array[i][0]);
		for (int j = 0; j < size2; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}



		












int KolvoSymbols(string str) {
	int ssa;
	for (int i = 0; i <= str.length(); i++) {
		ssa--;
		return ssa;
	}
}



int main()
{
	
	/*N1
	float a, b, c,d;
	cin >> a >> b >> c >> d;*/
	//cout << "AVG " << (a + b + c + d) / 4;*/

	/*N2*/
	/*int a = 1;
	int b = 40;
	while (a <= b)
	{
		cout << a << " ";
		a += 2;
	}*/

	/*N3*/
	//int storon;
	//cin >> storon;
	//for (int i = 0; i <= storon; i++)
	//{
	//	for (int j = 0; j < i;j++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}



	/*N4*/
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	/*	int num;
		std::cout << "Введите число ";
		std::cin >> num;
		if (num < 0) {
			num = -num; 
		}
		int count = 0;
		do {
			num /= 10; 
			count++;
		} while (num != 0);
		std::cout << " Состоит из  " << count << " -го разряда" << std::endl;
		return 0;
	}*/


//N5	
//const int size = 10;
//int array[size];
//for (int i = 0; i < size; i++)
//{
//	array[i] = random(1, 10);
//	cout << array[i];
//}
	
	

//N8







/*N13*/
	string str;
	cin >> str;
	cout << KolvoSymbols(str);





 //N6




	/*fillDoubleArray(array, )
		showDoubleArray(array, )*/