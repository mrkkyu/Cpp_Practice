#include <iostream>
#include <string>

using namespace std;

/* C++ ǥ�� ���̺귯������ ���ڿ��� ���ϰ� �����ϰ� ����� �� �ִ� string ���̺귯���� �ִ�.
C������ ���ڿ��� ����ϱ� ���� char�� �迭�� ���������, C++�� string�� �� ���ϰ� ȿ�����̴�.

�������� C����� ���ڿ� ó��/��������� �������� �����ߴ�, �׷��� C++������ �̸� �� �ɵ�������
���ڿ��� �ٷ� �� ������ ���ڿ��� ���� �������� string ǥ�� ���̺귯���� ���ԵǾ���. */

int main() {
	string myCountry = "korea";
	string myJob = "developer";

	cout << "Country : " << myCountry << endl;
	cout << "Job : " << myJob << endl;

	string myInfo = myCountry + ", " + myJob;
	
	cout << "My Info : " << myInfo << endl;

	return 0;
}