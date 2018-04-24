#include<stdio.h>
#include<string.h>
#include <conio.h>
#include<wchar.h>
#include<stdlib.h>
#include <fcntl.h> 
#include <io.h> 

struct sinhvien
{
	wchar_t* mssv;
	wchar_t* name;
	wchar_t* khoc;
	wchar_t* khoa;
	wchar_t* ngaysinh;
	wchar_t* hinhcanhan;
	wchar_t* mail;
	wchar_t* motabanthan;
	wchar_t* sothichx;
};
int token(FILE* f, wchar_t h);
int token(FILE* f, wchar_t h)
{
	wchar_t ch;
	int i = 0;
	while (!feof(f)){
		ch = fgetwc(f);
		if (ch != h)
		{
			i++;
		}
		else
			return i + 1;
	}
	return i;
}
void doc(FILE* fIn, sinhvien *x, int &begin);
void doc(FILE* fIn, sinhvien *x, int &begin)
{

	int a, b;
	fseek(fIn, begin, SEEK_SET);
	if (fgetwc(fIn) != L'"'){
		fseek(fIn, begin, SEEK_SET);
		a = token(fIn, L',');
		x->mssv = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, begin, SEEK_SET);
		fgetws(x->mssv, a, fIn);
		b = ftell(fIn);
	}
	else{
		fseek(fIn, begin + 1, SEEK_SET);
		a = token(fIn, L'"');
		x->mssv = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, begin + 1, SEEK_SET);
		fgetws(x->mssv, a, fIn);
		b = ftell(fIn) + 1;
	}
	wprintf(L"%ls\n", x->mssv);

	fseek(fIn, b + 1, SEEK_SET);
	if (fgetwc(fIn) != L'"'){
		fseek(fIn, b + 1, SEEK_SET);
		a = token(fIn, L',');
		x->name = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, b + 1, SEEK_SET);
		fgetws(x->name, a, fIn);
		b = ftell(fIn);
	}
	else{
		fseek(fIn, b + 2, SEEK_SET);
		a = token(fIn, L'"');
		x->name = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, b + 2, SEEK_SET);
		fgetws(x->name, a, fIn);
		b = ftell(fIn) + 1;
	}
	wprintf(L"%ls\n", x->name);


	fseek(fIn, b + 1, SEEK_SET);
	if (fgetwc(fIn) != L'"'){
		fseek(fIn, b + 1, SEEK_SET);
		a = token(fIn, L',');
		x->khoa = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, b + 1, SEEK_SET);
		fgetws(x->khoa, a, fIn);
		b = ftell(fIn);
	}
	else{
		fseek(fIn, b + 2, SEEK_SET);
		a = token(fIn, L'"');
		x->khoa = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, b + 2, SEEK_SET);
		fgetws(x->khoa, a, fIn);
		b = ftell(fIn) + 1;
	}
	wprintf(L"%ls\n", x->khoa);


	fseek(fIn, b + 1, SEEK_SET);
	if (fgetwc(fIn) != L'"'){
		fseek(fIn, b + 1, SEEK_SET);
		a = token(fIn, L',');
		x->khoc = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, b + 1, SEEK_SET);
		fgetws(x->khoc, a, fIn);
		b = ftell(fIn);
	}
	else{
		fseek(fIn, b + 2, SEEK_SET);
		a = token(fIn, L'"');
		x->khoc = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, b + 2, SEEK_SET);
		fgetws(x->khoc, a, fIn);
		b = ftell(fIn) + 1;
	}
	wprintf(L"%ls\n", x->khoc);


	fseek(fIn, b + 1, SEEK_SET);
	if (fgetwc(fIn) != L'"'){
		fseek(fIn, b + 1, SEEK_SET);
		a = token(fIn, L',');
		x->ngaysinh = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, b + 1, SEEK_SET);
		fgetws(x->ngaysinh, a, fIn);
		b = ftell(fIn);
	}
	else{
		fseek(fIn, b + 2, SEEK_SET);
		a = token(fIn, L'"');
		x->ngaysinh = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, b + 2, SEEK_SET);
		fgetws(x->ngaysinh, a, fIn);
		b = ftell(fIn) + 1;
	}
	wprintf(L"%ls\n", x->ngaysinh);


	fseek(fIn, b + 1, SEEK_SET);
	if (fgetwc(fIn) != L'"'){
		fseek(fIn, b + 1, SEEK_SET);
		a = token(fIn, L',');
		x->hinhcanhan = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, b + 1, SEEK_SET);
		fgetws(x->hinhcanhan, a, fIn);
		b = ftell(fIn);
	}
	else{
		fseek(fIn, b + 2, SEEK_SET);
		a = token(fIn, L'"');
		x->hinhcanhan = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, b + 2, SEEK_SET);
		fgetws(x->hinhcanhan, a, fIn);
		b = ftell(fIn) + 1;
	}
	wprintf(L"%ls\n", x->hinhcanhan);



	fseek(fIn, b + 1, SEEK_SET);
	if (fgetwc(fIn) != L'"'){
		fseek(fIn, b + 1, SEEK_SET);
		a = token(fIn, L',');
		x->motabanthan = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, b + 1, SEEK_SET);
		fgetws(x->motabanthan, a, fIn);
		b = ftell(fIn);
	}
	else{
		fseek(fIn, b + 2, SEEK_SET);
		a = token(fIn, L'"');
		x->motabanthan = (wchar_t*)malloc(sizeof(wchar_t)*a);
		fseek(fIn, b + 2, SEEK_SET);
		fgetws(x->motabanthan, a, fIn);
		b = ftell(fIn) + 1;
	}
	wprintf(L"%ls\n", x->motabanthan);



	fseek(fIn, b, SEEK_SET);
	if (fgetwc(fIn) == L','){
		if (fgetwc(fIn) != L'"'){
			fseek(fIn, b + 1, SEEK_SET);
			a = token(fIn, '\n');
			x->sothichx = (wchar_t*)malloc(sizeof(wchar_t)*a);
			fseek(fIn, b + 1, SEEK_SET);
			fgetws(x->sothichx, a, fIn);
			b = ftell(fIn);
			begin = b;
		}
		else{
			fseek(fIn, b + 2, SEEK_SET);
			a = token(fIn, '"');
			x->sothichx = (wchar_t*)malloc(sizeof(wchar_t)*a);
			fseek(fIn, b + 2, SEEK_SET);
			fgetws(x->sothichx, a, fIn);

			b = ftell(fIn) + 1;

		}
		wprintf(L"%ls\n\n", x->sothichx);
		begin = b + 2;
	}
	else{
		begin = b;
	}
}
int len(wchar_t s[]);
int len(wchar_t s[])
{
	int i = 0;
	while (s[i] != '\0'){
		i++;
	}
	return i;
}
void saochepchuoi(wchar_t* str, wchar_t* s);
void saochepchuoi(wchar_t* str, wchar_t* s)
{
	int a = len(s);
	for (int i = 0; i < a; i++)
	{
		str[i] = s[i];
	}
	str[a] = '\0';
}
void ghepchuoi(wchar_t* str, wchar_t* s);
void ghepchuoi(wchar_t* str, wchar_t* s)
{
	int a = len(str);
	int m = len(str) + len(s);
	for (int i = 0; i < m; i++)
	{
		if (i == a)
		{
			for (int j = 0; j < len(s); j++)
			{
				str[i] = s[j];
				i++;
			}
		}
	}
	str[m] = '\0';
}
void ghifile(sinhvien* x);
void ghifile(sinhvien* x)
{
	wchar_t filename[50];
	saochepchuoi(filename, x->mssv);
	ghepchuoi(filename, L".html");
	FILE* f;
}
void main()
{

	_setmode(_fileno(stdout), _O_U16TEXT);
	_setmode(_fileno(stdin), _O_U16TEXT);
	FILE* fIn;
	_wfopen_s(&fIn, L"documents.csv", L"r, ccs=UTF-8");
	if (fIn == NULL)
	{
		wprintf(L"Không mở được FILE!!!\n");
	}
	else
	{
		int n = 0, begin = 3;
		sinhvien* x;
		while (!feof(fIn))
		{
			if (fgetwc(fIn) == L'\n')
			{
				n++;
			}
		}
		x = (sinhvien*)malloc(sizeof(sinhvien)* n);
		for (int i = 0; i <n; i++)
		{
			doc(fIn, &x[i], begin);
			ghifile(&x[i]);

		}
		free(x);
		fclose(fIn);

	}

	_getch();
}