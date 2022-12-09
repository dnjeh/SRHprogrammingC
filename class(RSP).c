#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    int user, com;
    int tong[4]={0};
    printf("게임을 시작하시려면 enter를 쳐주세요 : ");
    while(getchar()=='\n') {
        tong[0]++;
        printf("가위바위보를 입력하세요 (가위 : 1 / 바위 : 2 / 보 : 3 )\n");
        printf(" : ");
        scanf("%d", &user);
        srand(time(NULL));
        com=rand()%3+1;
        printf("(소곤소곤) <!--컴퓨터는 %d를 냈습니다-->\n", com);
        switch(user-com) {
            case 0:
                tong[2]++;
                printf("비겼습니다");
                break;
            case 1: case -2:
                tong[1]++;
                printf("이겼습니다");
                break;
            case 2: case -1:
                tong[3]++;
                printf("져ㅆ습니다");
                break;
            default:
                break;
        }
        while(getchar()!='\n') {};
        printf("\n게임이 종료되었습니다.. 다시 시작하시려면 제발 enter 를 다시 쳐주세요 : ");
    }
    printf("총 게임 결과입니다. %d판 중에서, %d판은 이겼고 %d판은 무승부, %d판은 져ㅆ습니다. 승률은 %.3lf입니다. ", tong[0], tong[1], tong[2], tong[3], (double)tong[0]/(double)tong[1]);
}