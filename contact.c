#include "contact.h"

void readContact(Contact p){
    printf("%s : %d\n", p.name, p.number);
}

int selectMenu(){
	printf("\n*** 점수계산기 ***\n");
	printf("1. 연락처 조회\n");
	printf("2. 연락처 추가\n");
	printf("3. 연락처 수정\n");
	printf("4. 연락처 삭제\n");
	printf("5. 파일저장\n");
	printf("6. 연락처 이름 검색\n");
	printf("7. 연락처 번호 검색\n");
	printf("0. 종료\n\n");
	printf("=> 원하는 메뉴는? ");
	scanf("%d", &menu);
	return menu;
}

void searchNumber(Contact*p, int count){
    
}