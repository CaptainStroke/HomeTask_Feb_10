//1. Написать программу, копирующую один массив в другой следующим образом : сначала копируются последовательно
//все элементы, большие 0, затем последовательно все элементы, равные 0, а затем последовательно все элементы,
//меньшие 0.

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	const int SIZE = 100;
//	int ar[SIZE];
//	int br[SIZE];
//	
//	cout << "Original\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		ar[i] = rand()%21 - 10;
//		cout << ar[i] << ", ";
//	}
//	cout << "\nSorted\n";
//	sort(ar, ar + SIZE);
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << ar[i] << ", ";
//	}
//	cout << "\nReversed\n";
//	reverse(ar, ar + SIZE);
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << ar[i] << ", ";
//	}
//	cout << "\n";
//}


//2. Даны 2 массива размерности M и N соответственно. Необходимо переписать в третий массив общие элементы
//первых двух массивов, без повторений.

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	const int SIZE = 50;
	int ar[SIZE];
	int br[SIZE];
	int j = 0;
	int l = 0;
	int cr[SIZE];
	cout << "Original array M\n";
	for (int i = 0; i < SIZE; i++)
	{
		ar[i] = rand() % 100;
		cout << ar[i] << ", ";
	}
	cout << "\nOriginal array N\n";
	for (int i = 0; i < SIZE; i++)
	{
		br[i] = rand() % 100;
		cout << br[i] << ", ";
	}
	cout << "\nCombined in one array Z\n";
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (ar[i] == br[j]) cr[i] = ar[i];
		}
		cout << cr[i] << ", ";
	}
	cout << "\n Doubles sorted\n";
	for (int i = 0; i < SIZE; i++)
	{
		if (cr[i] < -2 || cr[i] > 101) cr[i] = 101;
		cout << cr[i] << ", ";
	}
	    cout << "\nArray groomed\n";
		sort(cr, cr + SIZE);
		for (int i = 0; i < SIZE; i++)
	{
		if (cr[i] == cr[i - 1]) cr[i] = 101; 
		cout << cr[i] << ", ";
	}
		cout << "\n Final touch\n";
		sort(cr, cr + SIZE);
		for (int i = 0; i < SIZE; i++)
		{
			if (cr[i] < -2 || cr[i] >= 101) cr[i] = -1;
			cout << cr[i] << ", ";
		}
		cout << "\n";
}

//3. Даны 2 массива размерности M и N соответственно.Необходимо переписать в третий массив те элементы
//первого массива, которых нет во втором массиве, без повторений.

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	const int SIZE = 50;
//	const int KING = 100;
//	int ar[SIZE];
//	int br[SIZE];
//	int j = 0;
//	int l = 0;
//	int cr[KING];
//	cout << "Original array M\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		ar[i] = rand() % 100;
//		cout << ar[i] << ", ";
//	}
//	cout << "\nOriginal array N\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		br[i] = rand() % 100;
//		cout << br[i] << ", ";
//	}
//	cout << "\nCombined in one array Z\n";
//	for (int i = 0; i < KING; i++)
//	{
//		if (i % 2 == 0) cr[i] = ar[j], j++;
//		if (i % 2 != 0) cr[i] = br[l], l++;
//		cout << cr[i] << ", ";
//	}
//	cout << "\nSorted\n";
//	sort(cr, cr + KING);
//	for (int i = 0; i < KING; i++)
//	{
//		cout << cr[i] << ", ";
//	}
//	cout << "\nCopies turned in \"  100s\" \n";
//	for (int i = 0; i < KING; i++)
//	{
//		if (cr[i] == cr[i - 1]) cr[i] = 100;
//		cout << cr[i] << ", ";
//	}
//	cout << "\nCopies removed to end and turned to \" -1\"\n";
//	sort(cr, cr + KING);
//	for (int i = 0; i < KING; i++)
//	{
//		if (cr[i] == 100) cr[i] = -1;
//		cout << cr[i] << ", ";
//	}
//	cout << "\n";
//}

//4. Реализовать программу - лотерею. Программа загадывает 5 случайных неповторяющихся чисел в диапазоне
//от 1 до 42, но не показывает их на экран.Пользователь пытается их угадать – вводит какие - то свои 5 чисел
// с клавиатуры.Назначить призы за совпадения.Например, если пользователь угадал три числа - приз 100 кредитов,
//если 4 - 500 кредитов, если 5 – 2500 кредитов.И в целом, какова вероятность того, что пользователь угадает
//все 5 чисел ?

//#include <iostream>
//#include <algorithm>
//#include <ctime>
//using namespace std;
//int main()
//{
//	const int SIZE = 5;
//	int lot[SIZE];
//	for (int i = 0; i < SIZE; i++)
//	{
//		cin >> lot[i];
//		sort(lot, lot + SIZE);
//		if (lot[i] == lot[i - 1]);
//		
//
//		cout << lot[i] << "' ";
//	}
//
//}

//5. Создать массив из 20 случайных чисел в диапазоне от - 10 до 20.
//Определить максимальное количество подряд идущих положительных элементов, не прерываемых ни нулями,
//ни отрицательными числами.Вывести найденный фрагмент.

//6. Создать массив из 10 вещественных чисел.Преобразовать массив так, чтобы сначала шли все элементы с вещественной 
//частью, а потом без нее.

//7. Создать массив из 10 целых случайных чисел в диапазоне от 0 до 100. Найти элемент, максимально близкий
//к среднему арифметическому значений массива.

//8. Осуществить циклический сдвиг массива на N элементов. Направление сдвига указывает пользователь
//(например, массив 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 при циклическом сдвиге вправо на 3 элемента примет
//	вид 7, 8, 9, 0, 1, 2, 3, 4, 5, 6).

//9. Создать массив строк на 4000 элементов.Заполнить его римскими числами от 1 до 3999, показать на экране всe элементы.

//10. Ввести число в диапазоне от 0 до 1000000. Озвучить его словами.Например, при вводе числа 25 вывести на экране «двадцать пять».

//11. Дана последовательность : 1, 11, 21, 1211, 111221, 312211, 13112221, … Ввести число N.
//Показать N - ный по счёту элемент последовательности.
