#include <iostream>

using namespace std;

/* 자료형의 실제 크기를 알 수 있다면 프로그래밍 과정에서 발생하는 스택 깨짐, 통신 loss등 여러 문제에
대처할 수 있는 방법을 찾을 수 있다.

클래스 Temp의 크기는 int 4바이트와 bool 1바이트를 더한 5바이트이어야 할텐데, 실행시에는 8바이트라고 출력된다.
이는 컴퓨터 프로세서의 데이터 버스와 관련이 있다. 데이터 버스는 한 번에 4바이트 데이터를 담아 이동한다.
그래서 4바이트 단위로 몇 번 움직이느냐에 따라 sizeof의 결과가 달라진다. 클래스 Temp는 5바이트의 데이터를
담고 있기 때문에, 데이터 버스는 두 번 이동한다. 그래서 결과는 8바이트이다.`*/

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