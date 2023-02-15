#include <iostream>
#include<cstdlib>
#include<ctime>

int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << " Исходный массив \n";
	srand(time(NULL));
	const int A = 5;
	int arr[A][A];
	for (int i = 0; i < A; i++) {
		for (int j = 0; j < A; j++) {
			arr[i][j] = rand() % 11;

			std::cout << arr[i][j] << '\t';
		}
		std::cout << '\n';
	}
	std::cout << "\n Задача 1 \n";
	int sum;
	for (int i = 0; i < A; i++) {
		sum = 0;
		for (int j = 0; j < A; j++) {
			sum += arr[i][j];
		}
		std::cout << sum << '\t';
	}
	std::cout << "\n\n Задача 2 \n";
	int n;
	std::cout << " Введите номер ряда для сортировки - ";
	std::cin >> n;
	for (int i = 4; i >= 0; i--) {
		for (int j = 0; j < i; j++)
			if (arr[n][j] > arr[n][j + 1]) 
				std::swap(arr[n][j], arr[n][j + 1]);	
	}
	std::cout << ' ';
	for (int j = 0; j < A; j++)
		std::cout << arr[n][j] << ' ';
	std::cout << "\n";
				
					



		return 0;
	
}