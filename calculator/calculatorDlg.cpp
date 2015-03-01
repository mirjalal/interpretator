
// calculatorDlg.cpp : implementation file
//

#include "stdafx.h"
#include "calculator.h"
#include "calculatorDlg.h"
#include "afxdialogex.h"
#include <fstream>	// file I/O
#include <vector>	// vector
#include <cctype>	// isdigit()

using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CAboutDlg dialog used for App About
class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CCalculatorDlg dialog



CCalculatorDlg::CCalculatorDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCalculatorDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, all_text);
}

BEGIN_MESSAGE_MAP(CCalculatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CCalculatorDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CCalculatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CCalculatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CCalculatorDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CCalculatorDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CCalculatorDlg::OnBnClickedButton6)
END_MESSAGE_MAP()


// CCalculatorDlg message handlers

BOOL CCalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	GetDlgItem(IDC_EDIT1)->SetFocus();

	return FALSE;  // return TRUE  unless you set the focus to a control
}


void CCalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CCalculatorDlg::OnBnClickedButton1()
{
	if (!(all_text.GetWindowTextLength()))
		MessageBox(L"Ədəd daxil edin", L"Xəbərdarlıq", MB_ICONINFORMATION);
	else
	{
		all_text.GetWindowText(cs_first);
		i_first = _wtof(cs_first);

		all_text.SetSel(0, -1);
		all_text.Clear();

		old_id = GetFocus()->GetDlgCtrlID();
		GetDlgItem(IDC_EDIT1)->SetFocus();
	}
}


void CCalculatorDlg::OnBnClickedButton2()
{
	if (!(all_text.GetWindowTextLength()))
		MessageBox(L"Ədəd daxil edin", L"Xəbərdarlıq", MB_ICONINFORMATION);
	else
	{
		all_text.GetWindowText(cs_first);
		i_first = _wtof(cs_first);

		all_text.SetSel(0, -1);
		all_text.Clear();

		old_id = GetFocus()->GetDlgCtrlID();
		GetDlgItem(IDC_EDIT1)->SetFocus();
	}
}

void CCalculatorDlg::OnBnClickedButton3()
{
	if (!(all_text.GetWindowTextLength()))
		MessageBox(L"Ədəd daxil edin", L"Xəbərdarlıq", MB_ICONINFORMATION);
	else
	{
		all_text.GetWindowText(cs_first);
		i_first = _wtof(cs_first);

		all_text.SetSel(0, -1);
		all_text.Clear();

		old_id = GetFocus()->GetDlgCtrlID();
		GetDlgItem(IDC_EDIT1)->SetFocus();
	}
}


void CCalculatorDlg::OnBnClickedButton4()
{
	if (!(all_text.GetWindowTextLength()))
		MessageBox(L"Ədəd daxil edin", L"Xəbərdarlıq", MB_ICONINFORMATION);
	else
	{
		all_text.GetWindowText(cs_first);
		i_first = _wtof(cs_first);

		all_text.SetSel(0, -1);
		all_text.Clear();

		old_id = GetFocus()->GetDlgCtrlID();
		GetDlgItem(IDC_EDIT1)->SetFocus();
	}
}


void CCalculatorDlg::OnBnClickedButton5()
{
	all_text.GetWindowText(cs_second);
	i_second = _wtof(cs_second);

	if (old_id == NULL)
		MessageBox(L"Əvvəlcə əməliyyat düyməsini basın", L"Xəbərdarlıq", MB_ICONINFORMATION);
	else if (i_second == NULL)
		MessageBox(L"Əvvəlcə əməliyyat düyməsini basın", L"Xəbərdarlıq", MB_ICONWARNING);
	else
	{
		if (old_id == 1000)
			i_result = i_first + i_second;
		if (old_id == 1001)
			i_result = i_first - i_second;
		if (old_id == 1002)
			i_result = i_first * i_second;
		if (old_id == 1003)
			i_result = i_first / i_second;

		all_text.SetSel(0, -1);
		all_text.Clear();

		cs_result.Format(_T("%.2f"), i_result);
		all_text.SetWindowText(cs_result);

		GetDlgItem(IDC_EDIT1)->SetFocus();
	}

	/*all_text.GetWindowText(s);
	i_s = _wtof(s);

	all_text.SetSel(0, -1);
	all_text.Clear();

	i_r = i_f + i_s;
	r.Format(_T("%d"), i_r);

	all_text.SetWindowText(r);*/
}


void CCalculatorDlg::OnBnClickedButton6()
{
	CString mixed_text; // TCHAR tipindədi bu dəyişən

	all_text.GetWindowText(mixed_text);

	//CT2CA temporary_used_for_string_conversion(mixed_text); // convert input stream from TCHAR to LPCSTR
	//string mixed_string_text(temporary_used_for_string_conversion); // construct a std::string using the LPCSTR input
	// for more information visit: http://git.io/AD6t

	if (all_text.GetWindowTextLength() != 0)
	{
		if (mixed_text.Find(L"+") == string::npos) // handling user oyun-çıxartmaları
			MessageBox(L"plus yoxdu", L"Simple calculator", MB_ICONASTERISK);
		else if (!(isdigit(mixed_text[0]))) // handling user oyun-çıxartmaları
		{
			MessageBox(L"ilk simvol ədəd olmalıdır", L"Simple calculator", MB_ICONASTERISK);
			all_text.SetSel(0, 1);
			all_text.Clear();
		}
		else if (!(isdigit(mixed_text[all_text.GetWindowTextLength() - 1]))) // handling user oyun-çıxartmaları
		{
			MessageBox(L"son simvol ədəd olmalıdır", L"Simple calculator", MB_ICONASTERISK);
			all_text.SetSel(all_text.GetWindowTextLength(), true);
			all_text.Clear();
		}
		else // normal user input
		{
			//strcpy_s(first, CT2A(mixed_text)); // the last argument converts the CString to std::string. and the copies content from string array to char array.
			//string converted_char(first); // converts char array to std::string

			//size_t number_of_specific_character = count(mixed_string_text.begin(), mixed_string_text.end(), '+'); // finds how many times '+' used in input stream
			//		size_t count = 0;
			//		count = mixed_string_text.find("+", count + 1);
			vector<int> numeric_addition;


			int *__mixed_text;
			__mixed_text = new int[all_text.GetWindowTextLength()];

			*__mixed_text = _wtof(mixed_text);

			/*for (size_t i = 0; i < mixed_text.GetLength(); i++)
			{
				if (mixed_text.GetAt(i) != '+')
				{
					__mixed_text[i] = _wtof(mixed_text[i]);
				}
			}
			*/
			//numeric_addition.push_back(_wtof(mixed_text));

			ofstream y("text.txt");
			for (int i = 0; i < all_text.GetWindowTextLength(); i+=2)
			{
				//if (isdigit(__mixed_text[i]))
					y << __mixed_text[i] << endl;
			}
			y.close();
		}
	}
	else
		MessageBox(L"nese daxil edin", L"Simple calculator", MB_ICONINFORMATION);
}
