#include <windows.h>
#include <tchar.h>
#include "resource.h"

HWND h1[10];
HBITMAP hBmp[2]; 
HINSTANCE HINSTANCE1;
int i = 0;
int x[9] = {0,0,0,0,0,0,0,0,0};
int o[9] = {0,0,0,0,0,0,0,0,0};
int WIN()
{
	if ((x[0] == 1 && x[1] == 1 && x[2] == 1) 
		|| (x[3] == 1 && x[4] == 1 && x[5] == 1) 
		|| (x[6] == 1 && x[7] == 1 && x[8] == 1)
		|| (x[0] == 1 && x[3] == 1 && x[6] == 1)
		|| (x[1] == 1 && x[4] == 1 && x[7] == 1)
		|| (x[2] == 1 && x[5] == 1 && x[8] == 1)
		|| (x[0] == 1 && x[4] == 1 && x[8] == 1)
		|| (x[2] == 1 && x[4] == 1 && x[6] == 1))
		return 1;
	else if (o[0] == 1 && o[1] == 1 && o[2] == 1
		|| (o[3] == 1 && o[4] == 1 && o[5] == 1)
		|| (o[6] == 1 && o[7] == 1 && o[8] == 1)
		|| (o[0] == 1 && o[3] == 1 && o[6] == 1)
		|| (o[1] == 1 && o[4] == 1 && o[5] == 1)
		|| (o[2] == 1 && o[5] == 1 && o[8] == 1)
		|| (o[0] == 1 && o[4] == 1 && o[8] == 1)
		|| (o[2] == 1 && o[4] == 1 && o[6] == 1))
		return 2; 
	else
		return 0; 
} 


BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
	HINSTANCE1 = hInstance;
	return DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, (DLGPROC)DlgProc);
}

BOOL CALLBACK DlgProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_CLOSE:
		EndDialog(hWnd, 0);
		return TRUE;

	case WM_INITDIALOG:  
		for (size_t i1 = 0; i1 < 9; i1++) 
			h1[i1] = GetDlgItem(hWnd, IDC_BUTTON4 + i1); 

		hBmp[0] = (HBITMAP)LoadImage(HINSTANCE1, MAKEINTRESOURCE(IDB_BITMAP1), IMAGE_BITMAP, 0, 0, 0); 
		hBmp[1] = (HBITMAP)LoadImage(HINSTANCE1, MAKEINTRESOURCE(IDB_BITMAP2), IMAGE_BITMAP, 0, 0, 0);

		return TRUE;  

	case WM_COMMAND: 
		if (LOWORD(wParam) == IDC_BUTTON4)
		{
			if(i % 2 == 0)
			{
				SendMessage(h1[0], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[0]));
				EnableWindow(h1[0], FALSE);
				x[0]++;
			}
			else
			{
				SendMessage(h1[0], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[1]));
				EnableWindow(h1[0], FALSE);
				o[0]++;
			}
			i++;
		}
		if (LOWORD(wParam) == IDC_BUTTON5)
		{
			if (i % 2 == 0)
			{
				SendMessage(h1[1], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[0]));
				EnableWindow(h1[1], FALSE);
				x[1]++;
			}
			else
			{
				SendMessage(h1[1], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[1]));
				EnableWindow(h1[1], FALSE);
				o[1]++;
			}
			i++;
		}
		if (LOWORD(wParam) == IDC_BUTTON6)
		{
			if (i % 2 == 0)
			{
				SendMessage(h1[2], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[0]));
				EnableWindow(h1[2], FALSE);
				x[2]++;
			}
			else
			{
				SendMessage(h1[2], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[1]));
				EnableWindow(h1[2], FALSE);
				o[2]++;
			}
			i++;
		} 
		if (LOWORD(wParam) == IDC_BUTTON7)
		{
			if (i % 2 == 0)
			{
				SendMessage(h1[3], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[0]));
				EnableWindow(h1[3], FALSE);
				x[3]++;
			}
			else
			{
				SendMessage(h1[3], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[1]));
				EnableWindow(h1[3], FALSE);
				o[3]++;
			}
			i++;
		}
		if (LOWORD(wParam) == IDC_BUTTON8)
		{
			if (i % 2 == 0)
			{
				SendMessage(h1[4], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[0]));
				EnableWindow(h1[4], FALSE);
				x[4]++;
			}
			else
			{
				SendMessage(h1[4], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[1]));
				EnableWindow(h1[4], FALSE);
				o[4]++;
			}
			i++;
		}
		if (LOWORD(wParam) == IDC_BUTTON9)
		{
			if (i % 2 == 0)
			{
				SendMessage(h1[5], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[0]));
				EnableWindow(h1[5], FALSE);
				x[5]++;
			}
			else
			{
				SendMessage(h1[5], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[1]));
				EnableWindow(h1[5], FALSE);
				o[5]++;
			}
			i++;
		}
		if (LOWORD(wParam) == IDC_BUTTON10)
		{
			if (i % 2 == 0)
			{
				SendMessage(h1[6], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[0]));
				EnableWindow(h1[6], FALSE);
				x[6]++;
			}
			else
			{
				SendMessage(h1[6], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[1]));
				EnableWindow(h1[6], FALSE);
				o[6]++;
			}
			i++;
		}
		if (LOWORD(wParam) == IDC_BUTTON11)
		{
			if (i % 2 == 0)
			{
				SendMessage(h1[7], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[0]));
				EnableWindow(h1[7], FALSE);
				x[7]++;
			}
			else
			{
				SendMessage(h1[7], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[1]));
				EnableWindow(h1[7], FALSE);
				o[7]++;
			}
			i++;
		}
		if (LOWORD(wParam) == IDC_BUTTON12)
		{
			if (i % 2 == 0)
			{
				SendMessage(h1[8], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[0]));
				EnableWindow(h1[8], FALSE);
				x[8]++;
			}
			else
			{
				SendMessage(h1[8], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmp[1]));
				EnableWindow(h1[8], FALSE);
				o[8]++;
			}
			i++;
		}  
		if (LOWORD(wParam) == IDC_BUTTON13)
		{
			for (size_t c = 0; c < 9; c++)
			{
				SendMessage(h1[c], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(0));
				EnableWindow(h1[c], TRUE);
				x[c] = 0;
				o[c] = 0;
				i = 0;
			}
		}
		if (WIN() == 1 || WIN() == 2)
		{
			if (WIN() == 1)
				MessageBox(hWnd, L"pobeda X", L"pobeda X", 0);
			else
				MessageBox(hWnd, L"pobeda O", L"pobeda O", 0);

			for (size_t c = 0; c < 9; c++)
			{
				SendMessage(h1[c], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(0));
				EnableWindow(h1[c], TRUE);
				x[c] = 0;
				o[c] = 0;
				i = 0;
			}
		}
		if (i == 9)
		{
			MessageBox(hWnd, L"Full", L"Full", 0);
			for (size_t c = 0; c < 9; c++)
			{
				SendMessage(h1[c], BM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(0));
				EnableWindow(h1[c], TRUE);
				x[c] = 0;
				o[c] = 0;
				i = 0;
			}
		}
		return TRUE;
	}
	return FALSE;
}