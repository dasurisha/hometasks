//#include <iostream>
//#include <vector>
//using namespace std;
///*�� ����� ������ �� ����� ������
//�� ����� ������
//*/
//vector<vector<int>> getModifiedMatrix() {
//	int n{};
//	int m{};
//	
//	int rows{};
//	int cols{};
//
//	cout << "������� ���-�� ����� ����������� �������: ";
//	cin >> m;
//	cout << "������� ���-�� �������� ����������� �������: ";
//	cin >> n;
//
//	vector<vector<int>> matrix(m, vector<int>(n));
//
//	if (m < 1 || n > 100) {
//		cout << "������������ ��������";
//		exit(0);
//	}
//
//	cout << "������� ��������: ";
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//
//	cout << "���� ����������� �������: " << endl;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << std::endl;
//	}
//	cout << endl;
//
//	cout << "������� ���-�� ����� ������ ���� �������: ";
//	cin >> rows;
//	cout << "������� ���-�� �������� ������ ���� �������: ";
//	cin >> cols;
//
//	int sourceLen = m * n;
//	int destLen = rows * cols;
//
//	if (sourceLen != destLen) {
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				cout << matrix[i][j] << " ";
//			}
//			cout << std::endl;
//		}
//		return matrix;
//	}
//
//	vector<vector<int>> newMatrix(rows, vector<int>(cols));
//
//	int k{};
//	int l{};
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//
//			newMatrix[k][l] = matrix[i][j];
//			if (++l == cols)
//			{
//				l = 0;
//				k++;
//			}
//		}
//	}
//
//	cout << "��������������� �������: " << endl;
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cout << newMatrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	//return newMatrix;
//}
//
//
//int main() {
//	setlocale(0, "ru");
//	getModifiedMatrix();
//}






#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string getSHifr(const string& text) {
	string result = "";

	for (char ch : text) {
		if (isalpha(ch)) {
			if (ch == 'Z') {
				result += 'A';
			}
			else if (ch == 'z') {
				result += 'a';
			}
			else {
				result += char((ch + 1));
			}
		}
		else if (isdigit(ch)) {
			int digit = ch - '0';
			result += char(('0' + (9 - digit) % 10));
		}
		else {
			result += ch;
		}
	}

	for (size_t i = 0; i < result.size(); ++i) {
		if (isalpha(result[i])) {
			if (i % 2 == 0) {
				result[i] = toupper(result[i]);
			}
			else {
				result[i] = tolower(result[i]);
			}
		}
	}

	reverse(result.begin(), result.end());

	return result;
}

int main() {
	setlocale(0, "ru");
	cout << "������� �������� �����: ";
	string text;
	getline(cin, text);
	cout << "���������� ����: ";
	cout << getSHifr(text) << endl;
}