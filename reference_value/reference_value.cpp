
#include <iostream>

// 포인터를 이용한 값 변경
int change_vlaue(int* value)
{
	*value = 20;
	return 0;
}
// 참조자를 이용한 값 변경
int change_value_ref(int& value)
{
	value = 30;
	return 0;
}

// 지역변수의 레퍼런스를 반환하는 함수
int& return_local_ref() {
	int local_var = 10;
	return local_var; // 지역변수의 레퍼런스를 반환하면 런타임에러 발생
}

int main()
{
	int x = 10;
	std::cout << "Before: " << x << std::endl;
	change_vlaue(&x); // 변수x의 주소를 전달
	std::cout << "After: " << x << std::endl;

	int y = 5;
	int& ref = y; // 참조자 선언 및 초기화

	ref = 20; // 참조자를 통한 y 값 변경
	// 참조자를 통해서 값을 변경할 떄 포인터와 달리 주소를 직접적으로 다루지 않아도 된다.
	// y  = 20 과 동일한 효과를 가진다.

	std::cout << "y: " << y << std::endl; // y 값 출력
	std::cout << "ref: " << ref << std::endl; // 참조자 값 출력

	// int& ref2; // 참조자는 반드시 선언과 동시에 초기화해야 한다. 따라서 이렇게 선언하면 에러가 발생한다.
	int* ptr; // 포인터는 선언 이후 lazy 하게 초기화 가능하다.

	int a = 10;
	int b = 3;

	int& ref_a = a; // 참조자 선언 및 초기화
	ref_a = b; // a = b ; 와 동일한 효과를 가진다. ref_a는 a를 참조하고 있기 때문에 ref_a에 값을 할당하면 a의 값이 변경된다.

	int z = 10;
	int* ptr_z = &z; // 포인터 선언 및 초기화

	int c = 5;
	ptr_z = &c; // 포인터는 다른 변수의 주소를 가리킬 수 있다. 따라서 ptr_z는 이제 c의 주소를 가리킨다.
	// 참조자는 한 번 초기화되면 다른 변수를 참조할 수 없다. 따라서 ref_a는 여전히 a를 참조하고 있다.

	// 레퍼런스는 메모리 상에 존재하지 않을 수도 있음
	int d = 10;
	int* ptr_d = &d; // 포인터 선언 및 초기화

	std::cout << "ptr_d: " << &ptr_d << std::endl; // 포인터 값 출력 (d의 주소) 메모리 상에 존재함

	int k = 0;
	int& ref_k = k; // 참조자 선언 및 초기화
	std::cout << "k: " << &k << std::endl; // 포인터 값 출력 (d의 주소) 메모리 상에 존재하지 않음
	std::cout << "ref_k: " << &ref_k << std::endl; // 포인터 값 출력 (d의 주소) 메모리 상에 존재하지 않음 변수 k와 ref_k는 같은 메모리 주소를 공유하지만,
	//ref_k는 별도의 메모리 공간을 차지하지 않는다. 따라서 &ref_k를 출력하면 k의 주소가 출력된다.

	int n = 10;
	std::cout << "before n: " << n << std::endl; // n 값 출력
	change_value_ref(n); // 참조자를 전달하여 값 변경
	std::cout << "after n: " << n << std::endl; // n 값 출력
	//사실상int& p = number 가 함수 호출 시 실행됨

	//c++에서는 참조자를 이용한 값 변경이 포인터를 이용한 값 변경보다 더 안전하고 직관적인 방법으로 사용된다.
	int o = 10;
	int& i = o; // 참조자 선언 및 초기화
	int& j = i; // 참조자 선언 및 초기화

	std::cout << "o: " << o << std::endl; // o 값 출력
	std::cout << "i: " << i << std::endl; // i 값 출력
	std::cout << "j: " << j << std::endl; // j 값 출력

	// 전부 동일한 메모리 주소를 공유하고 있기 때문에, i와 j를 통해 o의 값을 변경하면, o의 값이 변경된다.

	//int& ref_coust_is_forbidden = 0; // 상수는 참조자로 초기화할 수 없다. 따라서 이렇게 선언하면 에러가 발생한다.
	// 이유는 상수는 메모리 상에 존재하지 않기 때문에 참조자로 초기화할 수 없다. 따라서 참조자는 반드시 변수와 함께 사용해야 한다.

	//래퍼런스의 배열과 배열의 레퍼런스
	int x1, x2;
	//int& arr[2] = { x1, x2 }; // 참조자 배열 선언 및 초기화는 불가능하다 참조자는 메모리상에 존재하지 않기 때문에 배열로 선언할 수 없다. 따라서 이렇게 선언하면 에러가 발생한다.
	// 참조자 타입 배열은 불가능

	int arr[2] = { 1, 2 }; // 배열 선언 및 초기화
	int(&ref_arr)[2] = arr; // 배열의 참조자 선언 및 초기화
	//배열은 메모리 상에 존재하기 때문에 배열의 참조자를 선언할 수 있다.
	
	//int& ref_arr = arr; // 배열의 참조자는 선언시 반드시 배열의 크기를 명시해야 한다 

	// 지역변수의 레퍼런스를 반환하는 함수는 런타임에러를 발생시킨다
	// 지역변수는 함수가 종료되면 메모리 상에서 해제되기 때문이다.


	int local_value = return_local_ref(); // 지역변수의 레퍼런스를 반환하는 함수 호출
	int& ref_local_value = return_local_ref(); // 지역변수의 레퍼런스를 반환하는 함수 호출
	// 지역변수의 레퍼런스를 반환하는 함수는 런타임에러를 발생시킨다. 따라서 ref_local_value는 유효하지 않은 참조자가 된다.
	// dangling reference 발생
	std::cout << "first:  " << ref_local_value << std::endl;
	std::cout << "second: " << ref_local_value << std::endl;
	// 이상한 값을 출력시킴
	// release 버전에서는 10인데 디버깅 버전에서는 - 값 출력됨. 이유는 디버깅 버전에서는 지역변수의 메모리 공간을 초기화하지 않기 때문에 이상한 값이 출력된다.



	return 0;
}


