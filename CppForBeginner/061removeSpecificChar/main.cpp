#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string sentence = "i like coding";

	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());
	/* algorithm 라이브러리의 remove 함수를 통해 공백을 제거하고 실질적으로 길이가 줄어들지 않았으므로(압축),
	erase 함수를 통해 sentence 문자열의 실질적인 길이를 재조정해준다.*/

	cout << sentence << endl;

	return 0;
}