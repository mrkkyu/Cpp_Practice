#include <iostream>
#include <string>

using namespace std;

/* C++ 표준 라이브러리에는 문자열을 편리하고 안전하게 사용할 수 있는 string 라이브러리가 있다.
C언어에서는 문자열을 사용하기 위해 char형 배열을 사용하지만, C++의 string이 더 편하고 효율적이다.

전통적인 C언어의 문자열 처리/가공방법은 유연성이 부족했다, 그래서 C++에서는 이를 더 능동적으로
문자열을 다룰 수 있으며 문자열에 대해 직관적인 string 표준 라이브러리가 도입되었다. */

int main() {
	string myCountry = "korea";
	string myJob = "developer";

	cout << "Country : " << myCountry << endl;
	cout << "Job : " << myJob << endl;

	string myInfo = myCountry + ", " + myJob;
	
	cout << "My Info : " << myInfo << endl;

	return 0;
}