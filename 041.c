/*
================================================================================
 [문제 041] 포인터로 변수 값 바꾸기
================================================================================

 정수형 변수 saram_A, saram_B와 정수형 포인터 pointer, psaram을 선언하세요.
 포인터가 가리키는 대상을 바꿔 가며 *포인터 = 값; 으로 값을 저장하고,
 각 단계마다 변수와 포인터가 가리키는 값을 출력하세요.
   1. pointer → saram_A, *pointer = 1
   2. psaram  → saram_A, *psaram  = 2
   3. pointer → saram_B, *pointer = 3
   4. psaram  → saram_B, *psaram  = 4

 [실행 결과]
  1, 1
  2, 2, 2
  2, 3, 3
  2, 4, 4, 4

 [힌트]
  - 포인터 = &변수;  →  포인터가 그 변수를 가리키게 됨
  - *포인터          →  포인터가 가리키는 변수 그 자체

================================================================================
 아래는 정답 코드입니다. 먼저 직접 풀어 본 뒤 확인하세요.
================================================================================
*/









/* ============================== 정답 코드 ============================== */

#include <stdio.h>

int main( void )
{
	int saram_A = 0;
	int saram_B = 0;
	int* pointer;	// ★ int* : int 변수의 주소를 저장하는 포인터 변수
	int* psaram;

	pointer = &saram_A;		// pointer는 saram_A를 가리킴
	*pointer = 1;			// ★ *pointer는 saram_A와 같으므로 saram_A = 1
	printf( "%d, %d \n", saram_A, *pointer );					// 1, 1

	psaram = &saram_A;		// ★ 두 포인터가 같은 변수를 가리킬 수 있습니다.
	*psaram = 2;			// saram_A = 2
	printf( "%d, %d, %d \n", saram_A, *pointer, *psaram );		// 2, 2, 2

	pointer = &saram_B;		// ★ 가리키는 대상을 saram_B로 변경
	*pointer = 3;			// saram_B = 3 (saram_A는 그대로 2)
	printf( "%d, %d, %d \n", saram_A, saram_B, *pointer );		// 2, 3, 3

	psaram = &saram_B;
	*psaram = 4;			// saram_B = 4
	printf( "%d, %d, %d, %d\n", saram_A, saram_B, *pointer, *psaram );	// 2, 4, 4, 4

	return 0;
}
