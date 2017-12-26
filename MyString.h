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
        MyString(char * _str);   //конструктор с параметром в виде строковой константы
        MyString();              //конструктор по-умолчанию
        MyString(MyString& s);   //конструктор копировани€
        ~MyString();             //деструктор
        void Print();            //метод печати строки на экран
        MyString operator+(MyString& s);  //операци€ + дл€ склеивани€ двух строк
        MyString& operator=(MyString &s); //операци€ = (присвоение строк)
        MyString operator^(int value);
        MyString& operator+=(MyString &s);//операци€ += дл€ склеивани€ двух строк
        char& operator[](int value);  //операци€ [] дл€ доступа к отдельным символам строки
        bool operator==(MyString& s);  //операци€ проверки на равенство ==
        bool operator!=(MyString& s);  //операци€ проверки на неравенство !=
        friend ostream& operator<<(ostream& os, MyString& c);
        friend istream& operator>>(istream& is, MyString& c);
        bool Find(char *_str);   
		bool Find(char *str1,char *str2);   //метод поиска подстроки в строке
        bool FindSymbol(char symbol);
		bool FindSymbol(char symbol1,char symbol2);//метод поиска символа в строке
		int StrLen(char* _str); //метод вычислени€ размера 
		void StrCpy(char* in_str, char* src_str); //копирование одной строки и еЄ вставку на место другой строки
		void StrCpy(char* in_str, char* src_str, char* str3);
		bool StrCmp(char* str_f, char* str_s); //она сравнивает две —и-строки символ за символом. ≈сли строки идентичны (и по символам и по их количеству) Ц функци€ возвращает в программу число 0. ≈сли перва€ строка длиннее второй Ц возвращает в программу число 1, а если меньше, то -1.
		MyString StrCat(char* _str, char* _str1); // в конец одной строки, дописывает вторую строку. ƒругими словами Ц объедин€ет две строки.
		MyString StrCat(char* _str, char* _str1, char* _str2);
};
 
#endif