#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string sentence = "i like coding";

	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());
	/* algorithm ���̺귯���� remove �Լ��� ���� ������ �����ϰ� ���������� ���̰� �پ���� �ʾ����Ƿ�(����),
	erase �Լ��� ���� sentence ���ڿ��� �������� ���̸� ���������ش�.*/

	cout << sentence << endl;

	return 0;
}