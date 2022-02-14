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

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	const int SIZE = 50;
//	int ar[SIZE];
//	int br[SIZE];
//	int j = 0;
//	int l = 0;
//	int cr[SIZE];
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
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			if (ar[i] == br[j]) cr[i] = ar[i];
//		}
//		cout << cr[i] << ", ";
//	}
//	cout << "\n Doubles sorted\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (cr[i] < -2 || cr[i] > 101) cr[i] = 101;
//		cout << cr[i] << ", ";
//	}
//	    cout << "\nArray groomed\n";
//		sort(cr, cr + SIZE);
//		for (int i = 0; i < SIZE; i++)
//	{
//		if (cr[i] == cr[i - 1]) cr[i] = 101; 
//		cout << cr[i] << ", ";
//	}
//		cout << "\n Final touch\n";
//		sort(cr, cr + SIZE);
//		for (int i = 0; i < SIZE; i++)
//		{
//			if (cr[i] < -2 || cr[i] >= 101) cr[i] = -1;
//			cout << cr[i] << ", ";
//		}
//		cout << "\n";
//}

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
//	int i = 0;
//	int j = 0;
//	int l = 0;
//	int cr[SIZE];
//	cout << "Original array M\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		ar[i] = rand() % 100;
//		cout << ar[i] << ", ";
//	}
//	cout << "\nOriginal N\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		br[i] = rand() % 100;
//		cout << br[i] << ", ";
//	}
//	sort(ar, ar + SIZE);
//	cout << "\nSorted array M\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << ar[i] << ", ";
//	}
//	sort(br, br + SIZE);
//	cout << "\nSorted array N\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << br[i] << ", ";
//	}
//	cout << "\nCombined in one array Z\n";
//	for (int i = 0; i < SIZE; i++)
//			for (int j = 0; j < SIZE; j++)
//		{
//				if (ar[i] == br[j]) 
//				{
//					cr[i] = 101;
//					break;
//				}
//				else if (ar[i] != br[j]) cr[i] = ar[i];
//		}
//	cout << "\nRemove repeats\n";
//		sort(cr, cr + SIZE);
//		for (int i = 0; i < SIZE; i++)
//		{
//			if (cr[i] == cr[i - 1]) cr[i] = 101;
//		}
//		sort(cr, cr + SIZE);
//		for (int i = 0; i < SIZE; i++)
//		{
//			if (cr[i] == 101) cr[i] = -1;
//			cout << cr[i] << ", ";
//		}
//		cout << "\nFinal\n";
//}


//4. Реализовать программу - лотерею. Программа загадывает 5 случайных неповторяющихся чисел в диапазоне
//от 1 до 42, но не показывает их на экран.Пользователь пытается их угадать – вводит какие - то свои 5 чисел
// с клавиатуры.Назначить призы за совпадения.Например, если пользователь угадал три числа - приз 100 кредитов,
//если 4 - 500 кредитов, если 5 – 2500 кредитов.И в целом, какова вероятность того, что пользователь угадает
//все 5 чисел ?
//
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	const int SIZE = 5;
	int number[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		number[i] = rand() % 42 + 1;
		for (int j = 0; j < i; j++)
		{
			if (number[j] == number[i])
			{
				i--;
				break;
			}
		}
	}

	cout << "\nTry your luck in lottery. Enter 5 numbers between 1 and 42";
	int tik[SIZE] = { 21, 18, 13, 20, 15 };
	int n = 0;
	cout << "\nOriginal. Your ticket\n";
	for (int i = 0; i < SIZE; i++)
	{
		//cin >> tik[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << tik[i] << ", ";
	}
	cout << "\nLottery numbers\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << number[i] << ", ";
	}
	cout << "\nLooking for similarities\n";
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (number[i] == tik[j]) n++, cout << number[i] << ", ";
		}
	}
	cout << "\nNumber for lucky numbers - " << n << endl;
	if (n == 5) cout << "You returned 2500 credits\n";
	else if (n == 4) cout << "You returned 500 credits\n";
	else if (n == 3) cout << "You returned 100 credits\n";
	else cout << "Yuo got one more credit. Don't play lottery\n";
}

//5. Создать массив из 20 случайных чисел в диапазоне от - 10 до 20.
//Определить максимальное количество подряд идущих положительных элементов, не прерываемых ни нулями,
//ни отрицательными числами.Вывести найденный фрагмент.
//
//#include <iostream>
//#include <algorithm>
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	const int SIZE = 20;
//	int num[SIZE];
//	int n = 0;
//	int max = 0;
//	cout << "Original\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		num[i] = rand() % 31 - 10;
//		cout << num[i] << ", ";
//	}
//	cout << "\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (num[i] > 0) ++n, cout << num[i] << " - " << n << "\n";
//		if (num[i] <= 0) n = 0;
//		if (max < n) max = n , cout << i+1 << " index ";
//		
//	}
//	cout << "\nLongest sequence - " << max << "\n";
//
//}

//6. Создать массив из 10 вещественных чисел. Преобразовать массив так, чтобы сначала шли все элементы с вещественной 
//частью, а потом без нее.

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	const int SIZE = 10;
//	float num[SIZE] = { 3, 3.14, 45, 54.56, 234.12, 1, 5 , 32.34 , 76.97, 90.74};
//	cout << "Original\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << num[i] << ", ";
//	}
//	cout << "\nTurning numbers with real purt into minus\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (num[i] != int(num[i])) num[i] = num[i] * (-1);
//		cout << num[i] << ", ";
//	}
//	cout << "\nMoving minus to left part\n";
//	sort(num, num + SIZE);
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << num[i] << ", ";
//	}
//	cout << "\nTurning Real to positives\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (num[i] < 0 ) num[i] = num[i] * (-1);
//		cout << num[i] << ", ";
//	}
//	cout << "\nMoving minus to left part\n";
//}

//7. Создать массив из 10 целых случайных чисел в диапазоне от 0 до 100. Найти элемент, максимально близкий
//к среднему арифметическому значений массива.
//
//#include <iostream>
//#include <algorithm>
//#include <ctime>
//using namespace std;
//int main ()
//{
//	srand(time(NULL));
//	const int SIZE = 100;
//	int num[SIZE];
//	int sum = 0; // all numbers
//	float dif = 0; // ariphmetic - number = difference 
//	float min = 100;
//	float med = sum / SIZE; // ariphmetic div
//	int n = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		num[i] = rand() % 101;
//		cout << num[i] << ", ";
//	}
//	cout << "\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		sum += num[i];
//		//cout << num [i] << ", ";
//	}
//	med = float(sum) / float(SIZE);
//	cout << "\nAll numbers = " << sum << ". Mediana - " << med << "\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		dif = abs(float(num[i] - med));
//		if (min > dif)  min = dif; cout << "Winner - " << num[i] << "\n";
//		//cout << num[i] << ", ";
//	}
//	cout << "\n";
//}

//8. Осуществить циклический сдвиг массива на N элементов. Направление сдвига указывает пользователь
//(например, массив 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 при циклическом сдвиге вправо на 3 элемента примет
//	вид 7, 8, 9, 0, 1, 2, 3, 4, 5, 6).

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	const int SIZE = 10;
//	int num[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int shift[SIZE];
//	int s = 0;
//	cin >> s;
//	s = SIZE - s;
//	for (int i = 0; i < SIZE; i++)
//	{
//		shift[i] = num[s%SIZE];
//		s++;
//		cout << shift[i] << ", ";
//	}
//	cout << "\n";
//}

//9. Создать массив строк на 4000 элементов.Заполнить его римскими числами от 1 до 3999, показать на экране всe элементы.

//10. Ввести число в диапазоне от 0 до 1000000. Озвучить его словами.Например, при вводе числа 25 вывести на экране «двадцать пять».

//11. Дана последовательность : 1, 11, 21, 1211, 111221, 312211, 13112221, … Ввести число N.
//Показать N - ный по счёту элемент последовательности.
