#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentence = "i like coding";
	string findStr = "coding";
	string replaceStr = "history";

	sentence.replace(sentence.find(findStr), findStr.length(), replaceStr);
	//sentence ���ڿ����� findStr ���ڿ��� �ִ��� ã��, �ִٸ� �� ���� index�� �޾� �ش� index���� findStr ���ڿ� ���̸�ŭ��
	//���ڿ� �Ϻθ� replaceStr�� ��ü�Ѵ�.

	cout << sentence << endl;

	return 0;
}