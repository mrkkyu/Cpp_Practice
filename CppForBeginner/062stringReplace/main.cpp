#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentence = "i like coding";
	string findStr = "coding";
	string replaceStr = "history";

	sentence.replace(sentence.find(findStr), findStr.length(), replaceStr);
	//sentence 문자열에서 findStr 문자열이 있는지 찾고, 있다면 그 시작 index를 받아 해당 index부터 findStr 문자열 길이만큼의
	//문자열 일부를 replaceStr로 대체한다.

	cout << sentence << endl;

	return 0;
}