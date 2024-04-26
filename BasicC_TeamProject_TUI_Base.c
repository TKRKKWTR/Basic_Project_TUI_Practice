// BasicC_TeamProject_TUI_Base.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdlib.h>

void printCentered(char* text, int width) {
    int padding = (width - strlen(text)) / 2;
    for (int i = 0; i < padding; i++) {
        printf(" ");
    }
    printf("%s\n", text);
}

void printBorder(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                printf("■"); // 임의의 문장으로 표현
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    // 콘솔 창 크기 설정
    system("mode con: cols=80 lines=24"); // 원하는 대로 조절

    // 프로그램 이름 중앙에 출력
    printCentered("비서 프로그램 산나비(?)", 80);

    // Print border
    printBorder(80, 20); // 원하는 대로 조절

    // 메뉴 출력
    printf("\n1. 로그인\n");
    printf("2. 회원가입\n");
    printf("3. 프로그램 종료\n");

    // 유저 선택
    int choice;
    printf("\n기능을 선택하세요: ");
    scanf_s("%d", &choice);

    // 유저 선택 작용 프로세스
    switch (choice) {
    case 1:
        // 로그인 기능 구현 부분
        printf("로그인 선택하셨습니다.\n");
        break;
    case 2:
        // 회원가입 기능 구현 부분
        printf("회원가입 선택하셨습니다.\n");
        break;
    case 3:
        // 프로그램 종료
        printf("프로그램을 종료합니다.\n");
        exit(0);
    default:
        // 정의 되지 않은 입력
        printf("정해지지 않은 값을 입력하셨습니다.\n");
    }

    return 0;
}
