#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person_Rec {

    int id; // 학번

    char name[10]; // 이름

    char tel[15]; // 전화번호

    int grade; // 학년

};

struct Person_Rec* Input(int n) {
    struct Person_Rec* arr = malloc(sizeof(struct Person_Rec) * n);
    for (int i = 0; i < n; i++) {
        printf("학번 :");
        scanf("%d", &arr[i].id);
        printf("이름 :");
        scanf("%s", arr[i].name);
        printf("전화번호 :");
        scanf("%s", arr[i].tel);
        printf("학년 :");
        scanf("%d", &arr[i].grade);
    }
    return arr;
}

void Search(struct Person_Rec* arr, int n) {
    int keyword;
    printf("검색할 학번: ");
    scanf("%d", &keyword);
    for (int i = 0; i < n; i++) {
        if (arr[i].id == keyword) {
            printf("학번 : %d\n이름 : %s\n 전화번호 : %s\n학년 : %d\n", arr[i].id, arr[i].name, arr[i].tel, arr[i].grade);
            break;
        }
    }
}

int main(int argc, char* argv[])
{
    int n;
    scanf("%d", &n);
    struct Person_Rec* arr = malloc(sizeof(struct Person_Rec) * n);
    arr = Input(n);
    Search(arr, n);
}