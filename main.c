#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person_Rec {

    int id; // ÇÐ¹ø

    char name[10]; // ÀÌ¸§

    char tel[15]; // ÀüÈ­¹øÈ£

    int grade; // ÇOWOPFâ

};

struct Person_Rec* Input(int n) {
    struct Person_Rec* arr = malloc(sizeof(struct Person_Rec) * n);
    for (int i = 0; i < n; i++) {
        printf("ÇÐ¹ø :");
        scanf("%d", &arr[i].id);
        printf("ÀÌ¸§ :");
        scanf("%s", arr[i].name);
        printf("ÀüÈ­¹øÈ£ :");
        scanf("%s", arr[i].tel);
        printf("ÇÐ³â :");
        scanf("%d", &arr[i].grade);
    }
    return arr;
}

void Search(struct Person_Rec* arr, int n) {
    int keyword;
    printf("°Ë»öÇÒ ÇÐ¹ø: ");
    scanf("%d", &keyword);
    for (int i = 0; i < n; i++) {
        if (arr[i].id == keyword) {
            printf("ÇÐ¹ø : %d\nÀÌ¸§ : %s\n ÀüÈ­¹øÈ£ : %s\nÇÐ³â : %d\n", arr[i].id, arr[i].name, arr[i].tel, arr[i].grade);
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
