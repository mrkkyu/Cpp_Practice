#include <iostream>

using namespace std;

/* 자료형을 변경하는 전통적인 방법은 (double)처럼 괄호 안에 원하는 자료형을 넣어 다른 변수에 할당하는 방법이었다.
하지만, 이런 C언어 스타일의 타입캐스트는 아무 조건도 없이 무작정 변경해버리는 단점이 있었다.
변경할 수 없을 때도 변경을 시도해버리니 예상하지 못한 문제가 발생할 수 있다. 그래서 프로젝트 규모가 커질수록
이런 사소한 문제로 발생하는 에러를 찾아내기 어렵다. 이런 문제를 해결하고자 C++ 에서는 4가지 자료형 변환 연산자를 제공한다..

static_cast<type> : 가장 기본적인 캐스트 연산
dynamic_cast<type> : 객체지향 언어의 다형성을 이용하여 모호한 타입 캐스팅 오류를 막아준다.
const_cast<type> : 자료형이 갖고 있는 상수 속성을 제거한다.
reinterpret_cast<type> : 어떠한 포인터 타입끼리도 변환할 수 있게 도와준다.
*/

int main() {
	int x = 2;
	double y = 4.4;

	int i = static_cast<int>(y / x);
	int j = (int)y / x;
	double k = y / x;

	cout << "4.4 / 2 = (static_cast<int>) " << i << endl;
	cout << "4.4 / 2 = (int) " << j << endl;
	cout << "4.4 / 2 = " << k << endl;

	return 0;
}