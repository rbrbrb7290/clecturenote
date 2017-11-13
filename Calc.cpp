#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

/*
RunCalculator �Լ��� ȣ���ϸ��.
*/
void DisplayMenu() {
	printf("�޴��� �����ϼ���.\n");
	printf("============\n");
	printf("1. ���ϱ�\n");
	printf("2. ����\n");
	printf("3. ���ϱ�\n");
	printf("4. ������\n");
	printf("q. ����\n");
}
void Before() {
	system("cls");
	printf("�� ���� �Է��ϼ���\n");
}
void After() {
	printf("Press any key...");
	_getch();
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
	printf("%d / %d = %f\n", a, b, a / float(b));
}
void ShowIntro() {
	printf("���� ���α׷��� ���Ű� ȯ���մϴ�!\n");
	Sleep(3000);
	system("cls");
}
void GetUserInputAndCompute() {
	char ch = _getch();
	switch (ch) {
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
	case 'q':
		exit(1);
	case 27:
		exit(1);
	}
}
void RunCalculator() {
	ShowIntro();
	while (1) {
		DisplayMenu();
		GetUserInputAndCompute();
	}
}
