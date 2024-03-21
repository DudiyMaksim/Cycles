#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>
using namespace std;

int main()
{
	///*task 1.1*/
	//short orientation, speed;
	//char line;
	//cout << "============================================================"<<endl;
	//cout << "\n Choice line orientation  (1-vertical, 2-horizontally)   :\n\t";
	//cin >> orientation;
	//cout << " Choice speed of print (3-max)  :\n\t";
	//cin >> speed;
	//cout << "\n";
	//for (int i = 0; i < 17; i++)
	//{
	//	switch (speed)
	//	{
	//	case 1:
	//		this_thread::sleep_for(chrono::milliseconds(500));
	//	case 2:
	//		this_thread::sleep_for(chrono::milliseconds(250));
	//	case 3:
	//		this_thread::sleep_for(chrono::milliseconds(100));
	//	}
	//	if (orientation==1)
	//	{
	//		cout << "      |"<<endl;
	//	}
	//	else
	//	{
	//		cout << "-";
	//	}
	//}
	///*task 1.2*/
	//short c1, c2, total1 = 0, total2 = 0;
	//srand(time(0));
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "========================================\n\nComputer turn ";
	//	for (short i = 0; i < 3; i++)
	//	{
	//		this_thread::sleep_for(chrono::milliseconds(500));
	//		cout << ".";
	//	}
	//	this_thread::sleep_for(chrono::milliseconds(500));
	//	c1 = rand() % 6 + 1;
	//	c2 = rand() % 6 + 1;
	//	total1 += c1 + c2;
	//	cout << "\n\n fs cube      sec cube\n   ---          ---\n  | " << c1 << " |        | " << c2 << " |     +score : " << c1 + c2 << endl << "   ---          ---       total : " << total1 << endl << "======================================== \nYour turn (Press any button) " ;
	//	_getch();
	//	for (short i = 0; i < 3; i++)
	//	{
	//		this_thread::sleep_for(chrono::milliseconds(200));
	//		cout << ".";
	//	}
	//	this_thread::sleep_for(chrono::milliseconds(200));
	//	c1 = rand() % 6 + 1;
	//	c2 = rand() % 6 + 1;
	//	total2 += c1 + c2;
	//	cout << "\n\n fs cube      sec cube\n   ---          ---\n  | " << c1 << " |        | " << c2 << " |     +score : " << c1 + c2 << endl << "   ---          ---       total : " << total2 << endl << " \n";
	//	cout << "\nPress any button to continue \n";
	//	_getch();
	//}
	//if (total1 > total2)
	//{
	//	cout << "\n\nYOU LOSE...\n\n\tComputer score: " << total1 << "\n\tYour score: " << total2;
	//}
	//else
	//{
	//	cout << "\n\nYOU WON!!!\n\n\tComputer score: " << total1 << "\n\tYour score: " << total2;
	//}
	///*task 2.1*/
	//srand(time(0));
	//int arr[10], min=101, max=0;
	//for (int i = 0; i < 10; i++)
	//{
	//	arr[i] = rand() % 100;
	//	if (arr[i] < min)
	//	{
	//		min = arr[i];
	//	}
	//	else if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//cout << "min : " << min<< endl;
	//cout << "max : " << max<<endl;
	///*task 2.2*/
	//int arr[12], a1, a2, min, max;
	//for (int i = 0; i < 12; i++)
	//{
	//	cout << "Enter earnings of month " << i + 1 << "  : ";
	//	cin >> arr[i];
	//}
	//cout << "\nEnter start of range : ";
	//cin >> a1;
	//cout << "Enter end of range : ";
	//cin >> a2;
	//min = arr[a1];
	//max = min;
	//for (int i = a1-1; i < a2-1; i++)
	//{
	//	if (arr[i]>max)
	//	{
	//		max = arr[i];
	//	}
	//	else if (arr[i]<min)
	//	{
	//		min = arr[i];
	//	}
	//}
	//cout << "\nmin : " << min << endl;
	//cout << "max : " << max << endl;
	///*task 2.3*/
	//int arr[40], summ=0, min, mincord, max, maxcord, minmaxd=1, par=1, frm, lstm, mop, sumbtwms=1;
	//srand(time(0));
	//for (int i = 0; i < 40; i++)
	//{
	//	mop = rand() % 2 + 1;
	//	arr[i] = rand() % 50;
	//	if (mop==1)
	//	{
	//		arr[i] *= -1;
	//	}
	//}
	//min = arr[0];
	//max = min;
	//for (int i = 0; i < 40; i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		par *= arr[i];
	//	}
	//	if (abs(arr[i])!=arr[i])
	//	{
	//		summ += arr[i];
	//	}
	//	if (arr[i]>max)
	//	{
	//		max = arr[i];
	//		maxcord = i;
	//	}
	//	else if (arr[i]<min)
	//	{
	//		min = arr[i];
	//		mincord = i;
	//	}
	//	if (i % 2 == 0)
	//	{
	//		par *= arr[i];
	//	}
	//}
	//for (int i = mincord; i < maxcord; i++)
	//{
	//	minmaxd *= arr[i];
	//}
	//for (int i = 0; i < 40; i++)
	//{
	//	if (abs(arr[i])!=arr[i])
	//	{
	//		frm = i;
	//		break;
	//	}
	//}
	//for (int i = 1; i < 41; i++)
	//{
	//	if (abs(arr[-i]) != arr[-i])
	//	{
	//		lstm = i;
	//		break;
	//	}
	//}
	//for (int i = frm; i < lstm; i++)
	//{
	//	sumbtwms *= arr[i];
	//}
	//cout << "sum of negative elements : " << summ << "\nThe product of elements located between min and max elements : " << minmaxd << "\nProduct of elements with even numbers : " << par << "\nThe sum of the elements located between the first and the last negative elements : " << sumbtwms;
}