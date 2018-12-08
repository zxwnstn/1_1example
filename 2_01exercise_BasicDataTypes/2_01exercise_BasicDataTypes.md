## 2-1강 기본 자료형 소개
<br>

### 개요
자료형은 여러가지가 있으며, 각 자료형마다 저장되는 방식과 사이즈가 조금씩 다르다.

>cf)문자는 메모리 공간에 어떻게 저장이 될까?? 예를 들어 "H" 라는 글자가 있다고 하면 이를 먼저 그 글자에 대응되는 숫자로 바꾼다. 각 글자마다 대응되는 숫자있고, 이것이 기록되 있는 테이블이 있는데, 이를 아스키 테이블이라 한다. 메모리에는 그숫자를 다시 2진수로 바꿔 저장한다.

    #include<iostream>
    #include<bitset>

    int main()
    {
    using namespace std;

        int j = 3;
        int i = -1;
        int k = 123;
        char a = 'H';

        cout << (uintptr_t)static_cast<void*>(&a) << endl;
        cout << (uintptr_t)static_cast<void*>(&i) << endl;
        return 0;
    }
<br>

### 종류
  group          |       Type names*       |     notes on size / precision
-----------------| ------------------------| ----------------------------
character types  | char| Exactly one byte in size. At least 8 bits. (1byte)
<br>| char16_t|char16_t	Not smaller than char. At least 16 bits.
<br>|char32_t	|Not smaller than char16_t. At least 32 bits.
<br>|wchar_t	|Can represent the largest supported character set. (windows, linux 왔다갔다 할때)
Integer types (signed)|	signed char	|Same size as char. At least 8 bits.
<br>|_signed_ short int	|Not smaller than char. At least 16 bits.
<br>|_signed_ int	|Not smaller than short. At least 16 bits.
<br>|_signed_ long int	|Not smaller than int. At least 32 bits.
<br>|_signed_ long long int	|Not smaller than long. At least 64 bits.
Integer types (unsigned)	|unsigned char	|(same size as their signed counterparts)
<br>|unsigned short int|-
<br>|unsigned int|-
<br>|unsigned long int|-
<br>|unsigned long long int|-
|Floating-point types	|float|
<br>|double	|Precision not less than float
<br>|long double	|Precision not less than double
Boolean type	|bool
Void type	|void|	no storage
Null pointer|	decltype(nullptr)	|

1. interger types 기본형은 signed이며, 양과 음의 숫자 모두 사용 가능하다.
2. unsigned의 경우 0까지는 되지만 음수는 안된다.
3. 굳이 나눠놓은 이유는 특정한 상황에서 unsigned type의 연산이 더 빠를때가 있기 때문이다.
4. Floating-point은 부동소수점을 뜻하며 실수를 표기할때 사용한다.
5. 이는 메모리에서 각각의 숫자를 저장하는 방식이 다르기 때문이다. 메모리에서는 정수부, 실수부를 나눠서 저장한다.
6. float과 double의 차이는 단순 저장크기이다. double은 float의 2배이다.
7. bool type은 진리형(true, false)의 자료타입이다.
<br>

### 각 자료형의 초기화 형태

    #include<iostream>
    using namespace std;

    int main()
    {        
        bool bValue = true;
        cout << (bValue ? 1:0) << endl;
        cout << bValue << endl;         // 1로 출력

        char chValue = 'A';
        cout << (int)chValue << endl;   // 65가 출력

        char chValue2 = 65;
        cout << chValue2 << endl;        // ??

        float fValue = 3.141592f;        // float은 숫자뒤에 f를 써주어야함
        double dValue = 3.141592;        // f가 안붙으면 double
        cout << fValue << endl;     
        cout << dValue << endl;

        auto aValue = 3.141592;     
        auto aValue2 = 3.141592f;

        cout << sizeof(aValue) << endl;  // 8
        cout << sizeof(aValue2) << endl; // 4

        return 0;
    } 

1. bool 은 숫자로 저장된다.
2. auto(auto deduction) 는 빌드될때 자료형을 판별하여 결정한다.
<br>

### cpp의 변수 초기화 방법

1. coppy initialization
2. int a(123); direct initialization
3. int b{123}; uniform initialization
4. int k = 0, l = 0 , m = 0 ; 여러개의 변수 초기화
>cf)객체지향을 하게 되면 데이터 타입을 만들어 사용할 수 있다. 그때 초기화 할때는 2, 3의 방식을 많이 쓴다.

###### Casting과 변수 초기화

    #include<iostream>
    using namespace std;

    int main()
    {
        int i = 3.1415;
        cout << i << endl;      // 3
        int a(3.14);
        cout << a << endl;      // 3
        int b{4.13}
        cout << b << endl;      // 출력안됨  
    }

정수형 변수 i에 실수형 자료가 들어가 지게되면 실수형 자료로 자동 치환이 된다. 이를 casting(형변형) 이라고 한다,
또는 실수형 자료를 먼저 정수형 자료로 바꿔줄수 있는데, 그 방법은 (int)3.15 로 해주면된다.
b가 출력이 안되는 이유는 uniform initialization 이 엄격하게 따지기 때문이다.    
<br>
### 변수 선언의 위치

1. 예전에는 사용할 변수를 코드 위에 전부 선언하고 코딩을 하였으나, 요즘에는 사용할 변수는 사용하기 직전에 선언하는 것을 선호
2. 변수와 그 변수를 사용하는 코드가 가까워지면 debuging 이나 refactoring 하기 편리해진다.
