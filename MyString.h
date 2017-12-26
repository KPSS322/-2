#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <string>
#include <iostream>
using namespace std;

 
class MyString
{
    private:
        char *str;

    public:
        MyString(char * _str);   //����������� � ���������� � ���� ��������� ���������
        MyString();              //����������� ��-���������
        MyString(MyString& s);   //����������� �����������
        ~MyString();             //����������
        void Print();            //����� ������ ������ �� �����
        MyString operator+(MyString& s);  //�������� + ��� ���������� ���� �����
        MyString& operator=(MyString &s); //�������� = (���������� �����)
        MyString operator^(int value);
        MyString& operator+=(MyString &s);//�������� += ��� ���������� ���� �����
        char& operator[](int value);  //�������� [] ��� ������� � ��������� �������� ������
        bool operator==(MyString& s);  //�������� �������� �� ��������� ==
        bool operator!=(MyString& s);  //�������� �������� �� ����������� !=
        friend ostream& operator<<(ostream& os, MyString& c);
        friend istream& operator>>(istream& is, MyString& c);
        bool Find(char *_str);   
		bool Find(char *str1,char *str2);   //����� ������ ��������� � ������
        bool FindSymbol(char symbol);
		bool FindSymbol(char symbol1,char symbol2);//����� ������ ������� � ������
		int StrLen(char* _str); //����� ���������� ������� 
		void StrCpy(char* in_str, char* src_str); //����������� ����� ������ � � ������� �� ����� ������ ������
		void StrCpy(char* in_str, char* src_str, char* str3);
		bool StrCmp(char* str_f, char* str_s); //��� ���������� ��� ��-������ ������ �� ��������. ���� ������ ��������� (� �� �������� � �� �� ����������) � ������� ���������� � ��������� ����� 0. ���� ������ ������ ������� ������ � ���������� � ��������� ����� 1, � ���� ������, �� -1.
		MyString StrCat(char* _str, char* _str1); // � ����� ����� ������, ���������� ������ ������. ������� ������� � ���������� ��� ������.
		MyString StrCat(char* _str, char* _str1, char* _str2);
};
 
#endif