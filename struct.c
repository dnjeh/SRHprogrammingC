#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define STD_FILE "C:\\Users\\user\\Desktop\\stduent.txt"
void noStruct() {
    int id1, id2;
    char name1[10], name2[10];
    int score1, score2;
    id1=10501;
    id2=10502;
    strcpy(name1,  "홍길동");
    strcpy(name2,  "홍길순");
    strcat(name1, "님 ");
    score1 = 90;
    score2 = 100;
    printf("%d %s %d\n", id1, name1, score1);
    printf("%d %s %d\n", id2, name2, score2);
}
void useStruct() {
    struct student {
        int id;
        char name[10];
        int score;
    };
    struct student s1 = {7, "김지민", 100};
    struct student s2 = {8, "박지은", 80};
    printf("%d %s %d", s1.id, s1.name, s1.score);
    printf("%d %s %d", s2.id, s2.name, s2.score);
}
void useStructArray() {
    struct student {
        int id;
        char name[10];
        int score;
    } robot[100];
    int i;
    char t[5];
    FILE *fp = fopen(STD_FILE, "w");
    for(i=0;i<100;i++) {
        robot[i].id = 10301 + i;
        strcpy(robot[i].name, "test");
        itoa(i+1, t, 10);
        strcat(robot[i].name, t);
        robot[i].score = rand()%100+1;
        printf("%d %s %d\n", robot[i].id, robot[i].name, robot[i].score);
        fprintf(fp, "%d %s %d\n", robot[i].id, robot[i].name, robot[i].score);
    }
    fclose(fp);
}
void fileTest() {
    //파일 쓰기
    FILE *fp = fopen("C:\\Users\\user\\Desktop\\test1.txt", "a"); //write
    fprintf(fp, "%s %d", "신경화", 100);
    fclose(fp);
    //파일 읽기
    fp=fopen("C:\\Users\\user\\Desktop\\test1.txt", "r");
    char name[10];
    int score;
    fscanf(fp, "%s %d", name, &score);
    fclose(fp);

    printf("%s %d\n", name, score);
}
void readFile() {
    struct student {
        int id;
        char name[10];
        int score;
    } robot;
    FILE *fp = fopen(STD_FILE, "r");
    for(;!feof(fp);) {  //end of file
        fscanf(fp, "%d %s %d", &robot.id, robot.name, &robot.score);
        printf("[%s] %5d : %-3d\n", robot.name, robot.id, robot.score);
    }
    fclose(fp);
}
int main() {
    srand(time(NULL));
    //noStruct();
    //useStruct();
    useStructArray();
    //fileTest();
    readFile();
}