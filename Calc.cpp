#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

void MenuDisplay() {
	printf("���� �޴� �� �ϳ��� �����ϼ���.\n");
	printf("-------------------------------\n");
	printf("1. ���ϱ�\n");
	printf("2. ����\n");
	printf("3. ���ϱ�\n");
	printf("4. ������\n");
	printf("q. ���� \n");
}
void Before() {
	system("cls");
	printf("�� ���� �Է��ϼ���.\n");
}
void After() {
	printf("�ƹ� Ű�� ���缼��");
	getchar();
	getchar();
	system("cls");
}
void Add() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
}
void Sub() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d - %d = %d\n", a, b, a - b);
}
void Mul() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d * %d = %d\n", a, b, a * b);
}
void Div() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d / %d = %f\n", a, b, (double)a / b);
}
void ShowIntro() {
	printf("���� ���α׷� ���α׷��� ���� �� ȯ���մϴ�!");
	Sleep(3000);
	system("cls");
}
void GetUserInputProcess() {
	char ch = _getch();
	int a = 0, b = 0;
	switch (ch) {
	case 'q':
		exit(1);
	case '1':
		Before();
		Add();
		After();
		break;
	case '2':
		Before();
		Sub();
		After();
		break;
	case '3':
		Before();
		Mul();
		After();
		break;
	case '4':
		Before();
		Div();
		After();
		break;
	}
}
void Run() {
	ShowIntro();

	while (1) {
		MenuDisplay();
		GetUserInputProcess();
	}
}
