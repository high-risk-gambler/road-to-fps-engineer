

#include <iostream>
#include "header1.h"
#include "header2.h"

using header1::foo; //using 문을 사용해서 명시적으로 header1의 foo()를 사용하도록 지정

namespace { // 익명 네임스페이스를 사용하여 이 파일에서만 접근 가능한 함수와 변수를 정의
    int only_in_this_file = 0;

    int OnlyInThisFile() {return only_in_this_file;}
}

int main()
{
    std::cout << "Hello World!" << std::endl;

    foo(); // using 문을 사용해서 같은 이름을 가진 header1의 foo()을 기본적으로 사용하게 됨 현재 header1 과 header2 에 모두 같은 함수가 선언되어 있음

    OnlyInThisFile(); // 익명 네임스페이스 안에 정의된 함수는 이 파일에서만 접근 가능
    only_in_this_file = 3;  //  익명 네임스페이스 안에 정의된 변수도 이 파일에서만 접근 가능

    return 0;
}


