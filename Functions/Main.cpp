#include <iostream>
#include <cstdlib>
#include <ctime>
 
// ������� ������ �� ����������� � �� ������������
// ������� ����� � �������
void say_hello() {
	std::cout << " Hello world! \n";
	std::cout << " Bye world! \n";
}
// ������� ����������� 2 ����� ����� � ��������� 
// �� �����
void print_sum(int num1, int num2) {
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
}
// ������� ����������� 2 ����� �����
// � ������������ �� �����
int sum(int num1, int num2) {
	//int tmp = num1 + num2;
	//return tmp;
	return num1 + num2;
}
// ����� ������� � �������
void print_arr(int arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b]\n";
}
//
int x2(int num) {
	num *= 2;
	return num;
}
void v_x2(int num) { // num - �������� 
	num *= 2;
}
void arr_x2(int arr[]) {
	arr[1] *= 2;
}

void pos_indexes(int arr[], const int length ) {
	for (int i = 0; i < length; i++) {
		if (arr[i] > 0)
			std::cout << i << ' ';
	}
	std::cout << std::endl;
}

int max_arr(int arr1[], const int length1, int arr2[], const int length2) {
	int max = arr1[0];
	for (int i = 1; i < length1; i++) 
		max = arr1[i] > max ? arr1[i] : max;
	for (int i = 0; i < length2; i++) 
		max = arr2[i] > max ? arr2[i] : max;
	return max;
}


int main() {
	setlocale(LC_ALL, "Ru");
	int n, m;
	/*
	say_hello(); // ����� ������� ���� void ��� ����������
	std::cout << "...\n";
	say_hello();
	std::cout << " ������� 2 ����� -> ";
	std::cin >> n >> m;
	//print_sum(n, m); ����� ������� ���� void  � 2 ����������� 
	std::cout << sum(n, m) << '\n'; // ����� ������� ���� int � 2 ����������� 
	*/
	// Task 1
	/*const int size = 5;
	int arr[size]{ 7, 3, 10, 8, 5 };
	std::cout << " ����������� ������: \n";
	print_arr(arr, size);
	arr[2] = 20;
	std::cout << " �������� ������: \n";
	print_arr(arr, size);
	*/
	// Task 2
	/*n = 10;
	//std::cout << x2(n) << std::endl; // 20
	v_x2(n);
	std::cout << n << std::endl; // 10 n - ��������
	int mass[]{ 5, 6, 7 };
	v_x2(mass[1]);
	std::cout << mass[1] << std::endl; // 6 
	arr_x2(mass);
	std::cout << mass[1] << std::endl; // 12
	*/
	// Task 3
	/*
	std::cout << " ������ 1.\n ������:\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++)
		arr1[i] = rand() % 21 - 10;
	print_arr(arr1, size1);
	std::cout << " ������� ������������� ��������� �������: \n";
	pos_indexes(arr1, size1);*/
	// TAsk 4
	std::cout << " ������ �1:\n";
	const int size2 = 5;
	int arr2[size2];


	const int size3 = 6;
	int arr3[size3];

	srand(time(NULL));
	for (int i = 0; i < size2; i++)
		arr2[i] = rand() % 51;
	for (int i = 0; i < size3; i++)
		arr3[i] = rand() % 51;
	print_arr(arr2, size2);
	std::cout << " ������ �2:\n";
	print_arr(arr3, size3);
	std::cout << " ������������ ������� �� 2-� ��������: " << max_arr(arr2, size2, arr3, size3) << std::endl;


	return 0;
}