#include <iostream>

using namespace std;

namespace silla {
	int year = 935;

	void CentralArea() {
		cout << "���" << endl;
	}
}

namespace baekjae {
	int year = 660;

	void CentralArea() {
		cout << "��û��" << endl;
	}
}

// ���� ������ 2���� ���ӽ����̽��� ����ϰڴٰ� ����
using namespace silla;
using namespace baekjae;

/* ���α׷����� �ϴٺ��� ���� �̸����� ���� �Ǵ� �Լ� �̸��� ����� �� ��Ȳ�� �߻��� �� �ִ�.
��, �ܺο��� �����ϴ� �ҽ��� ����ϰ� �Ǹ� ���� �̸��� ������ �Լ��� �־� ������ ��Ȳ�� ó�� �� �ִ�.
�̷� ������ �ذ��ϵ��� ��ȵ� ���� namespace �̴�. 

 �� �ڵ带 ���� ���� silla, baekjae ���ӽ����̽����� ������ �̸��� ������ �Լ��� ������ Ȯ���� �� �ִ�.
 �� ������ �̸��� ������ �Լ��� �Ʒ� �����Լ����� ������ ���� �������� ����� �� �ִ� */

int main() {
	cout << "�Ŷ��� �߽��� : ";
	silla::CentralArea();
	cout << "�Ŷ��� ������� : " << silla::year << endl;

	cout << "������ �߽��� : ";
	baekjae::CentralArea();
	cout << "������ ������� : " << baekjae::year << endl;

	return 0;
}

/* �̿� ���� ����ϸ� ���� ������ �Լ� �Ǵ� ������� ������ ���� �ٸ� ���� �Ҵ��� ����� �� �־�
�ҽ� �ڵ� ������������ �ſ� ȿ�����̴�. */