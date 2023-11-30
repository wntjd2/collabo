#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person_Rec {

    int id; // �й�

    char name[10]; // �̸�

    char tel[15]; // ��ȭ��ȣ

    int grade; // �OWOPF�

};

struct Person_Rec* Input(int n) {
    struct Person_Rec* arr = malloc(sizeof(struct Person_Rec) * n);
    for (int i = 0; i < n; i++) {
        printf("�й� :");
        scanf("%d", &arr[i].id);
        printf("�̸� :");
        scanf("%s", arr[i].name);
        printf("��ȭ��ȣ :");
        scanf("%s", arr[i].tel);
        printf("�г� :");
        scanf("%d", &arr[i].grade);
    }
    return arr;
}

void Search(struct Person_Rec* arr, int n) {
    int keyword;
    printf("�˻��� �й�: ");
    scanf("%d", &keyword);
    for (int i = 0; i < n; i++) {
        if (arr[i].id == keyword) {
            printf("�й� : %d\n�̸� : %s\n ��ȭ��ȣ : %s\n�г� : %d\n", arr[i].id, arr[i].name, arr[i].tel, arr[i].grade);
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
