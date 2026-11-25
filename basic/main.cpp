#include <iostream>

//명시적으로 사용하는 함수 지정
using std::cout;
using std::endl;
using std::cin;

int main() {

	int user_input;

	cout << "저의 정보를 표시해줍니다" << endl;
	cout << "1. name" << endl;
	cout << "2. age" << endl;
	cout << "3. sex" << endl;
	
	cin >> user_input;

	switch (user_input) {
		case 1:
			cout << "이름: 홍길동" << endl;
			break;
		case 2:
			cout << "나이: 20" << endl;
			break;
		case 3:
			cout << "성별: 남자" << endl;
			break;
		default:
			cout << "잘못된 입력입니다." << endl;
	}	
}