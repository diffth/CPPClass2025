// Class1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// --------------------------------------------------
//

//C/C++ 언리얼 학습 진행
//1.변수(기본 자료형 type)
//      정수(int...)
//      실수(float, double...)
//      문자형(char) -> 문자열(string) 클래스...
//      bool(boolean) 1/0, true/false
//      상수(const)
// -----------------------------------------------
//      local, global, static variable
//      사용자 정의 자료형
//          열거형 enumerates types
//          구조체 structure type
//          typedef 별칭
//      배열[]
//          1차원 배열, 다(n)차원 배열
//      포인터*
//          & 주소연산자, 번지연산자
//          * 참조연산자
//          NULL, nullptr
//          이중포인터
//          포인터연산
//          배열 포인터 * / 포인터 배열 []
//          동적 메모리 할당 생성(new), 해제(delete) / 메모리 누수(memory leak)
//          배열의 동적할당
//              생성 int* arr = new int[10]();         
//              해제 delete[] arr;
//          참조자 변수의 별명 int& a_ref = a;
// 
//2.연산자
//      산술연산자(+, -, *, /, %)
//      대입연산자(=, +=, -=, *=, /=, %=)
//      비교연산자(==, !=, >, >=, <, <=)
//      논리연산자(&&, ||, !)
//      증감연산자(++x, x++, --x, x--)
//      기타연산자
//          비트연산자(<<, >>....) 
//          쉼표(,)연산자
//          삼항연산자(조건식 ? A : B)
//          sizeof() 메모리크기반환 연산
//          ::범위지정연산자 std::cout
//          namespace 이름공간 (using namespace std;)
// 
//3.제어문
//      조건문
//          if, if/else, if/else if/else
//          switch case
//      반복문
//          while문, do while문
//          for문
// 
//4.함수
//      함수 선언, 정의, 호출
//      main()
//      입출력함수(printf()/scanf(), cout/cin/endl
//      모듈화(.h, .cpp), 전처리기((선행처리기)
//      메모리구조(
//                  코드   : code
//                  데이터 : global, static variable
//                  heap   : 동적 할당(dynamic allocation)
//                  stack  : local, parameter
//                )
//      매개변수(인수 전달 방법) parameter, argument
//          call by value       값
//          call by address     주소
//          call by reference   참조
//      const 매개변수
//      디폴트 인수 default argument
//      함수 오버로딩 Overloading
//          함수 중복 정의
// 
//5.객체
//      OOP(객체지향프로그래밍)
//          추상화(abstraction)
//          상속(inheritance)
//          다형성(polymorphism)
//          캡슐화(encapsulation)
//      클래스/인스턴스
//          Animal lion;    //객체
//          Animal* tiger = new Animal(); //인스턴스
//      구성
//          멤버변수 //필드, 속성
//          멤버함수 //method
//      생성자/소멸자
//          Car();  //생성 호출, 오버로딩 o
//          ~Car(); //소멸 호출, 메모리해제, 오버로딩x
//      객체 생성/소멸
//          객체생성     메모리(데이터) 할당
//          객체포인터*  객체의 주소 대입
//          객체참조자&  객체의 값을 대입
//          객체소멸
//              동적할당 new 생성
//                       delete 해제
//      멤버 접근 연산자
//          객체 (.)
//          객체포인터 ->
//      접근지정자(제한)
//          캡슐화(정보은닉성)
//          public      //공개, 내부, 외부 클래스 접근가능
//          protected   //부분공개, 상속 받은 클래스 내부 접근가능
//          private     //비공개, 클래스 내부에서만 접근가능
//      상속   
//          부모의 성질을 이어받아 확장된 형태로 만드는 것.
//          추상화된 부모를 실체화하는 과정.
//          부모클래스 parent class(기반클래스 base class)
//          자식클래스 child class(파생클래스 derived class)
//      오버로딩/오버라이딩
//          오버로딩   중복정의
//          오버라이딩 재정의
//      다형성
//          멤버함수의 기능적 다형성과 상속을 통한 계층관계를 활용하는 기술
//          형변환(casting)
//              업캐스팅
//                  Suv mySuv;
//                  Car* ptr_car = &mySuv;
//              다운캐스팅
//                  Car myCar;
//                  Suv* ptr_suv = &myCar;
//              명시적 형변환
//                  //Suv* ptr_suv = (Suv*)ptr_car;
//                  //dynamic_cast<변환타입>(변환대상);
//                  Suv* ptr_suv = dynamic_cast<Suv*>(car_ptr);
//      가상함수
//          자식클래스의 멤버함수가 재정의 할 것이라고 부모클래스에 선언
//          virtual 멤버함수
//          __super::멤버함수; //오버라이딩후 부모의 함수호출
//      순수가상함수
//          자식클래스의 멤버함수가 정의되어야만 한다고 부모클래스에 선언.
//          부모클래스 정의x //자식클래스에서 정의o 
//          //virtual void Break() = 0;
//          //virtual void Break(){ ... }
//      추상클래스(abstract class)/인터페이스(interface)
//          순수가상함수가 포함된 클래스
//          추상클래스는 인터페이스(자동차인터페이스, 휴대폰인터페이스)를 제공하는 클래스
//      this 포인터
//          객체 자기자신을 가리키는 포인터, 변경x
//          매개변수와 이름이 같은 멤버변수
//          자기자신의 주소를 반환하는 함수
// 
//::VisualStudio
//      debug/debugging
//      breakpoint, F5
//      build



/* ctrl + shift + /
블록주석
*/

/* 가나다라 */
/* *(별, 아스티릭), 포인터, 블록주석, 곱셈연산자, 참조연산자
*/

//한줄 복제 ctrl + d
//한줄이동 alt + ↑, alt + ↓

//한줄 주석 ctrl + /
//void max1();
//void max2();
//void max3();
//리턴타입 x 빈...

#include <iostream>

//리턴타입 int(정수) 형
/*
int main()
{
    //std::cout << "Hello World!\n";  // \n -> new line 줄바꿈
    //<< 출력연산자
    //>> 입력연산자
    //return 0;

    //A = B;    //대입연산자
    //A == B;   //== 값이 같다.
    //A === B;  //== 타입, 값이 같다.
    //5 == '5';   //true
    //5 === '5';  //false

    int length = 5;
    int height;
    height = 4; //변수 초기화 x -> 오류발생

    std::cout << length << std::endl;
    std::cout << height << std::endl;   //초기화되지 않은 'height' 지역 변수를 사용했습니다.
    //\n -> new line / endl -> endline 줄바꿈

    length = 10;
    height = 8;
    std::cout << length << std::endl;
    std::cout << height << std::endl;

    //int a = 10000000000000000; // int형은 4Byte ↑ Overflow
    //std::cout << "a의 값은 : " << a << std::endl;
    //return 0;

    char myChar = 'A';
    std::cout << myChar << std::endl;
    char myChar2 = 50;
    char myChar3 = 99;
    int myInt = 50;

    char myB = 'B';

    std::cout << myChar2 << std::endl;
    std::cout << myChar3 << std::endl;
    std::cout << myChar+ myB << std::endl;
    std::cout << myInt << std::endl;

}
*/

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
