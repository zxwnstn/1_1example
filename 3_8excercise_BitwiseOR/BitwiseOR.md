## 비트단위 연산자

bit 단위 끼리 연산하는 연산자다.

<br>

### 비트단위 연산자 6가지

1. << Left shitf
2. *>> Right shitf*
3. ~ not , & and , | or , ^ XOR
4. 비트연산은 unsigned자료형만 사용한다.
5. 비트연산을 하기위해 bitset헤더를 추가해준다.
6. std::bitset<x>(y)에서 x는 2진수의 자리수고 y는 변수다.

### bitwise letf shift <<

    
    #include<iostream>
    #include<bitset>
    using namespace std;
    
    int main()
    {
    
        unsigned int a, b;
        a = 3
        cout << std::bitset<4>(a) << endl;      // 0011 : a의 숫자 1이 메모리에 실제로 저장되는 형태 확인
        
        b = a << 1;                             // << 1 의 의미는 옆으로 한칸밀고 빈칸에 0을 채운다는 뜻
        cout << std::bitset<4>(b) << endl;      // 0110 6
        b = a << 2;
        cout << std::bitset<4>(b) << endl;      // 1100 12
        // 1칸을 민다는 소리는 *2 라는 뜻이고 2칸을 민다는 소리는 *4를 한다는 뜻이다.
        // 다시말해 n칸을 Letf shitf 를 한다는 소리는 2^n만큼 곱해준다는 뜻이다.
        
        cout << std::bitset<8>(a << 1) << endl;  // 0000 0110   6       3*2
        cout << std::bitset<8>(a << 2) << endl;  // 0000 1100   12      3*2^2
        cout << std::bitset<8>(a << 3) << endl;  // 0001 1000   24      3*2^3
        cout << std::bitset<8>(a << 4) << endl;  // 0011 0000   48      3*2^4
        
        return 0;
    }
    
<br>

### bitwise right shift >>

    
    #include<iostream>
    #include<bitset>
    using namespace std;
    
    int main()
    {
        unsigned int a;
        a = 1024
        
        cout << std::bitset<12>(a) << endl;             // 0010 0000 0000 1024
        cout << std::bitset<12>(a >> 1) << endl;        // 0001 0000 0000  512
        cout << std::bitset<12>(a >> 2) << endl;        // 0000 1000 0000  256
        cout << std::bitset<12>(a >> 3) << endl;        // 0000 0100 0000  128
        cout << std::bitset<12>(a >> 4) << endl;        // 0000 0010 0000   64
        // 즉 right shift는 나누기 2를 한다는 뜻이다.
        
        return 0;
    }
    
<br>
    
        
### bitwise not ~

    
    #include<iostream>
    #include<bitset>
    using namespace std;
    
    int main()
    {
        unsigned int a;
        a = 1024
        
        cout << std::bitset<12>(~a) << endl;             // 1101 1111 1111 4294966271
        
        return 0;
    }  
    
<br>

### bitwise and & , or |, XOR ^

    #include<iostream>
    #include<bitset>
    using namespace std;
    
    int main()
    {
        unsigned int a, b;
        a = 0b1100
        b = 0b0110    
            
        cout << std::bitset<4>(a & b) << endl;      // 0100 두개다 true여야 true
        cout << std::bitset<4>(a | b) << endl;      // 1110 두개다 false여야 false
        cout << std::bitset<4>(a ^ b) << endl;      // 1010 두개가 같으면 false 다르면 true
<br>
        
### bitwise 연산자 활용

a & = b; 와 같은, cpp 일반적인 연산자 이용법이 가능하다.

<br>

### 숙제
0110 >> 2       10진수?
5 | 12
5 & 12
5 ^ 12
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
