#include <iostream>
using namespace std;

int main() {
	setlocale(0, "ru");
	int n{};
	int m{};
	int r{};
	int c{};
	int matrix[100][100]{};


	std::cout << "������� ���-�� ����� ����������� �������: ";
	std::cin >> m;
	std::cout << "������� ���-�� �������� ����������� �������: ";
	std::cin >> n;

	int quantity = m * n;

	if (1 <= m && n <= 100) {
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				std::cin >> matrix[i][j];

			}
		}
	}
	else {
		cout << "������������ ��������";
	}



	cout << "���� ����������� �������: " << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	cout << endl;



	std::cout << "������� ���-�� ����� ������ ���� �������: ";
	std::cin >> r;
	std::cout << "������� ���-�� �������� ������ ���� �������: ";
	std::cin >> c;

	if (c == quantity) {
		int newMatrix[100][300]{};
		int k{};
		int quantity2 = r * c;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				size_t oRow = k / n;
				size_t oCol = k % n;
				newMatrix[i][j] = matrix[oRow][oCol];
				k++;

			}

		}
		if (quantity == quantity2) {
			for (int i = 0; i < r; i++)
			{
				for (int j = 0; j < c; j++)
				{
					cout << newMatrix[i][j] << " ";
				}
				cout << endl;

			}
		}
		else {
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					std::cout << matrix[i][j] << " ";
				}
				std::cout << std::endl;
			}

		}

	}
	else {
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				std::cout << matrix[i][j] << " ";
			}
			std::cout << std::endl;
		}

	}
}