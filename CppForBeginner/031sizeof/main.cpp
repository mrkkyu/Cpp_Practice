#include <iostream>

using namespace std;

/* �ڷ����� ���� ũ�⸦ �� �� �ִٸ� ���α׷��� �������� �߻��ϴ� ���� ����, ��� loss�� ���� ������
��ó�� �� �ִ� ����� ã�� �� �ִ�.

Ŭ���� Temp�� ũ��� int 4����Ʈ�� bool 1����Ʈ�� ���� 5����Ʈ�̾�� ���ٵ�, ����ÿ��� 8����Ʈ��� ��µȴ�.
�̴� ��ǻ�� ���μ����� ������ ������ ������ �ִ�. ������ ������ �� ���� 4����Ʈ �����͸� ��� �̵��Ѵ�.
�׷��� 4����Ʈ ������ �� �� �����̴��Ŀ� ���� sizeof�� ����� �޶�����. Ŭ���� Temp�� 5����Ʈ�� �����͸�
��� �ֱ� ������, ������ ������ �� �� �̵��Ѵ�. �׷��� ����� 8����Ʈ�̴�.`*/

class Temp {
	int no;
	bool is_on;
};

int main() {
	cout << "size of Char : " << sizeof('p') << endl;
	cout << "size of Int : " << sizeof(10) << endl;
	cout << "size of Double : " << sizeof(10.10) << endl;
	cout << "size of Class : " << sizeof(Temp) << endl;

	return 0;
}