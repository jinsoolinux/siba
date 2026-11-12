/*
================================================================================
 [문제 046] typedef로 자료형 이름 만들기
================================================================================

 typedef를 사용하여 다음 자료형을 정의하고 사용해 보세요.
   1. int를 bool이라는 이름으로 정의 (true = 1, false = 0은 #define으로)
   2. kor, eng, math 멤버를 갖는 구조체를 SungJuk으로 정의
   3. char ch, int point 멤버를 갖는 공용체를 Variant로 정의
 bool 변수가 true이면 "조건식은 true입니다."를 출력하세요.

 [실행 결과]
  조건식은 true입니다.

 [힌트]
  - typedef 기존자료형 새이름;
  - typedef로 정의한 구조체는 struct 키워드 없이 변수를 선언할 수 있습니다.

================================================================================
 아래는 정답 코드입니다. 먼저 직접 풀어 본 뒤 확인하세요.
================================================================================
*/









/* ============================== 정답 코드 ============================== */

#include <stdio.h>

#define true	1
#define false	0

// ★ typedef : 기존 자료형에 새 이름을 붙입니다.
typedef int bool;		// 이제 bool은 int와 같은 의미

// ★ 구조체를 typedef로 정의하면 "struct" 없이 SungJuk만으로 변수 선언 가능
typedef struct
{
	int kor;
	int eng;
	int math;
} SungJuk;

typedef union
{
	char ch;
	int  point;
} Variant;

int main( void )
{
	bool bCondition;
	SungJuk SJ;		// struct 키워드가 필요 없음
	Variant V;

	bCondition = true;

	if( bCondition == true )
	{
		printf( "조건식은 true입니다." );
	}

	SJ.kor = 50;
	V.ch = 5;

	return 0;
}

/*
 [참고]
  - C23 표준부터는 bool, true, false가 키워드가 되어 위처럼 직접 정의하면
    오류가 납니다. 최신 컴파일러에서는 #include <stdbool.h>를 사용하세요.
*/
