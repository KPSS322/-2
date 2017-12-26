#include "MyString.h"
#include <iostream>
#include <string.h>


using namespace std;

 
MyString::MyString(char *_str):str(new char[strlen(_str)+1])   
{
    strcpy(this->str,_str);
}
MyString::MyString():str(new char[1]){str[0]=0;}   
MyString::MyString(MyString &s):str(new char[strlen(s.str)+1])
{
    strcpy(this->str,s.str);
}
MyString::~MyString()
{
    delete [] this->str;
}
 
void MyString::Print()
{
    cout<<this->str<<endl;
}
MyString MyString::operator+(MyString& s)
{
    char *buf=new char[strlen(this->str)+strlen(s.str)+1];   
    strcpy(buf,this->str);
    return MyString(strcat(buf,s.str));    
}
MyString& MyString::operator=(MyString& s)
{
    delete[] this->str;       
    this->str=new char[strlen(s.str)+1];
    strcpy(this->str,s.str);
    return *this;
}
MyString& MyString::operator+=(MyString &s)
{
    *this=*this+s;
    return *this;
}
char& MyString::operator[](int value)
{
    return this->str[value];
}
bool MyString::operator==(MyString& s)
{
    if (strcmp(this->str,s.str)==0)
        return true;
    else
        return false;
}
bool MyString::operator!=(MyString& s)
{
    if (strcmp(this->str,s.str)==0)
        return false;
    else
        return true;
}
ostream& operator<<(ostream& os, MyString& c)
{
    return os<<c.str;
}
istream& operator>>(istream& is, MyString& c)
{
    char buf[2048];
    is>>buf;
    delete [] c.str;
    c.str=new char[strlen(buf)+1];
    strcpy(c.str,buf);
    return is;
}
bool MyString::Find(char *_str)
{
    if (strstr(this->str,_str)!=NULL)
        return true;
    else
        return false;
}
bool MyString::FindSymbol(char symbol)
{
    for (int i=0;i<strlen(this->str);i++)
        if (str[i]==symbol)
            return true;
    return false;
}
MyString MyString::operator^(int value)
{
    MyString buf;
    for (int i=0;i<value;i++)
        buf+=*this;
    return buf;
}

//int MyString::NewCompare(char *_str1, char *_str2)
//{
//	MyString MyString1 = _str1;
//	MyString OtherString = _str2;
//	int MyInt = MyString1.Compare.To(OtherString);    
//	return MyInt;
//}
int StrLen(char* _str)
{
    int size = 0;
 
    for (; _str[size] != 0; size++);
 
    return size;
}

//void StrCpy(char* in_str, char* src_str)
//{
//    for (int i = 0; i < StrLen(in_str); i++)
//        in_str[i] = src_str[i];
//}
 
bool StrCmp(char* str_f, char* str_s)
{
    int i = 0;
 
    for (; str_f[i] == str_s[i] && i < StrLen(str_f); i++);
 
    return (i == StrLen(str_f)) ? true : false;
}
void StrCpy(char* in_str, char* src_str)
{
    for (int i = 0; i < StrLen(in_str); i++)
        in_str[i] = src_str[i];
}
 
//bool StrCmp(char* str_f, char* str_s)
//{
//    int i = 0;
// 
//    for (; str_f[i] == str_s[i] && i < StrLen(str_f); i++);
// 
//    return (i == StrLen(str_f)) ? true : false;
//}

bool MyString::Find(char *_str1, char *_str2)
{
	
    if ((strstr(this->str,_str1)!=NULL)  &&  (strstr(this->str,_str2)!=NULL))
	        return true;
    else
        return false;
}
bool MyString::FindSymbol(char symbol1, char symbol2)
{
    for (int i=0;i<strlen(this->str);i++)  
		for (int i=0;i<strlen(this->str);i++)
			if ((str[i]==symbol2) && (str[i]==symbol1))
            return true;
		return false;
}

void StrCpy(char* in_str, char* src_str, char* str)
{
    for (int i = 0; i < StrLen(in_str); i++)
		for (int i = 0; i < StrLen(str); i++)
        in_str[i] = src_str[i] + str[i];
}

MyString MyString::StrCat(char* _str, char* _str1)
{
    int count1 = 0; // дл€ индекса €чейки где хранитс€ '\0' первой строки
	while (_str[count1] != 0)
	{
		count1++; // ищем конец первой строки
	}	
 
	int count2 = 0; // дл€ прохода по символам второй строки начина€ с 0-й €чейки
	while (_str1[count2] != 0) 
	{	// дописываем вконец первой строки символы второй строки
		_str[count1] = _str1[count2];	
		count1++;							
		count2++;
	}
	return _str;
}

MyString MyString::StrCat(char* _str, char* _str1, char* _str2)
{
    int count1 = 0; // дл€ индекса €чейки где хранитс€ '\0' первой строки
	while (_str[count1] != 0)
	{
		count1++; // ищем конец первой строки
	}	
 
	int count2 = 0; // дл€ прохода по символам второй строки начина€ с 0-й €чейки
	while (_str1[count2] != 0) 
	{	// дописываем вконец первой строки символы второй строки
		_str[count1] = _str1[count2];	
		count1++;							
		count2++;
	}
	int count3 = 0;
	while (_str2[count3] != 0) 
	{	// дописываем вконец первой строки символы второй строки
		_str[count1] = _str2[count3];	
		count1++;							
		count2++;
	}
	return _str;
}