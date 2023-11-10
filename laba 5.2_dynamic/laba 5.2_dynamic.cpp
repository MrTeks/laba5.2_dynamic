#include <iostream>

using namespace std;

// Вариант 8
int main() {
	setlocale(LC_ALL, "ru");
	int N;
	int i = 0;
	int b;
	cout << "Введите кол-во элементов:";
	cin >> N;
	if (N > 10) {
		cout << "Ошибка! Количество значений не должно превышать 10";
		return 0;
	}
	int* a = new int[N];
	cout << "Введите значения:";
	while (i < N) {
		cin >> a[i];
		i++;
	}
	for (int d = 0; d < N; d++) {
		if (a[d] % 2 == 0) {
			b = a[d];
			break;
		}
	}
	cout << "Обновлённый массив: ";
	for (int d = 0; d < N; d++) {
		if (a[d] % 2 == 0) {
			a[d] += b;
			cout << a[d] << " ";
		}
		else {
			cout << a[d] << " ";
		}
	}
}