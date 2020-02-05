#include <iostream>

using namespace std;

namespace silla {
	int year = 935;

	void CentralArea() {
		cout << "경상도" << endl;
	}
}

namespace baekjae {
	int year = 660;

	void CentralArea() {
		cout << "충청도" << endl;
	}
}

// 새로 선언한 2개의 네임스페이스를 사용하겠다고 선언
using namespace silla;
using namespace baekjae;

/* 프로그래밍을 하다보면 같은 이름으로 변수 또는 함수 이름을 지어야 할 상황이 발생할 수 있다.
또, 외부에서 참조하는 소스를 사용하게 되면 같은 이름의 변수나 함수가 있어 난감한 상황에 처할 수 있다.
이런 문제를 해결하도록 고안된 것이 namespace 이다. 

 위 코드를 보면 각각 silla, baekjae 네임스페이스에서 동일한 이름의 변수와 함수가 있음을 확인할 수 있다.
 이 동일한 이름의 변수와 함수는 아래 메인함수에서 다음과 같이 구분지어 사용할 수 있다 */

int main() {
	cout << "신라의 중심지 : ";
	silla::CentralArea();
	cout << "신라의 멸망연도 : " << silla::year << endl;

	cout << "백제의 중심지 : ";
	baekjae::CentralArea();
	cout << "백제의 멸망연도 : " << baekjae::year << endl;

	return 0;
}

/* 이와 같이 사용하면 같은 성격의 함수 또는 변수라고 할지라도 서로 다른 값을 할당해 사용할 수 있어
소스 코드 유지보수에도 매우 효율적이다. */