
// calculatorDlg.cpp : implementation file
//

#include "stdafx.h"
#include "calculator.h"
#include "calculatorDlg.h"
#include "afxdialogex.h"
#include <fstream>
#include <vector>

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


	return TRUE;  // return TRUE  unless you set the focus to a control
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
	if (all_text.GetWindowTextLength() == 0)
		MessageBox(L"Ədəd daxil edin", L"Xəbərdarlıq", MB_ICONINFORMATION);
	else
	{
		all_text.GetWindowText(ilkin_eded);
		double_ilkin_eded = _wtof(ilkin_eded);

		all_text.SetSel(0, -1);
		all_text.Clear();

		btn_id = GetFocus()->GetDlgCtrlID();
	}
}


void CCalculatorDlg::OnBnClickedButton2()
{
	if (all_text.GetWindowTextLength() == 0)
		MessageBox(L"Ədəd daxil edin", L"Xəbərdarlıq", MB_ICONINFORMATION);
	else
	{
		all_text.GetWindowText(ilkin_eded);
		double_ilkin_eded = _wtof(ilkin_eded);

		all_text.SetSel(0, -1);
		all_text.Clear();

		btn_id = GetFocus()->GetDlgCtrlID();
	}
}

void CCalculatorDlg::OnBnClickedButton3()
{
	if (all_text.GetWindowTextLength() == 0)
		MessageBox(L"Ədəd daxil edin", L"Xəbərdarlıq", MB_ICONINFORMATION);
	else
	{
		all_text.GetWindowText(ilkin_eded);
		double_ilkin_eded = _wtof(ilkin_eded);

		all_text.SetSel(0, -1);
		all_text.Clear();

		btn_id = GetFocus()->GetDlgCtrlID();
	}
}


void CCalculatorDlg::OnBnClickedButton4()
{
	if (all_text.GetWindowTextLength() == 0)
		MessageBox(L"Ədəd daxil edin", L"Xəbərdarlıq", MB_ICONINFORMATION);
	else
	{
		all_text.GetWindowText(ilkin_eded);
		double_ilkin_eded = _wtof(ilkin_eded);

		all_text.SetSel(0, -1);
		all_text.Clear();

		btn_id = GetFocus()->GetDlgCtrlID();
	}
}


void CCalculatorDlg::OnBnClickedButton5()
{
	all_text.GetWindowText(ikinci_eded);
	double_ikinci_eded = _wtof(ikinci_eded);

	if (btn_id == NULL)
		MessageBox(L"Əvvəlcə əməliyyat düyməsini basın", L"Xəbərdarlıq", MB_ICONINFORMATION);
	else if (double_ikinci_eded == NULL)
		MessageBox(L"Əvvəlcə əməliyyat düyməsini basın", L"Xəbərdarlıq", MB_ICONWARNING);
	else
	{
		if (btn_id == 1000)
			cavab = double_ikinci_eded + double_ikinci_eded;
		if (btn_id == 1001)
			cavab = double_ikinci_eded - double_ikinci_eded;
		if (btn_id == 1002)
			cavab = double_ikinci_eded * double_ikinci_eded;
		if (btn_id == 1003)
			cavab = double_ikinci_eded / double_ikinci_eded;

		all_text.SetSel(0, -1);
		all_text.Clear();

		convert_olunmus_cavab.Format(_T("%.2f"), cavab);
		all_text.SetWindowText(convert_olunmus_cavab);
	}
}


void CCalculatorDlg::OnBnClickedButton6()
{
	vector<int> numeric_addition;
	CString mixed_text; // TCHAR tipindədi bu dəyişən

	all_text.GetWindowText(mixed_text);

	int *a = new int[all_text.GetWindowTextLength()];

	if (all_text.GetWindowTextLength() != 0)
	{
		CT2CA temporary_used_for_string_conversion(mixed_text); // TCHAR-dan LPCSTR-a keçid eliyirəm
		string mixed_string_text(temporary_used_for_string_conversion); // construct a std::string using the LPCSTR input
		// for more information visit: http://git.io/AD6t

		if (mixed_text.Find(L"+") == string::npos) // handling user oyun-çıxartmaları
			MessageBox(L"plus yoxdu", L"Simple calculator", MB_ICONASTERISK);
		else if (mixed_string_text[0] == '+') // handling user oyun-çıxartmaları
		{
			MessageBox(L"ilk simvol ədəd olmalıdır", L"Simple calculator", MB_ICONASTERISK);
			all_text.SetSel(0, true);
			all_text.Clear();
		}
		else if (mixed_string_text[all_text.GetWindowTextLength() - 1] == '+') // handling user oyun-çıxartmaları
		{
			MessageBox(L"son simvol ədəd olmalıdır", L"Simple calculator", MB_ICONASTERISK);
			all_text.SetSel(all_text.GetWindowTextLength(), true);
			all_text.Clear();
		}
		else // normal user input
		{
			//strcpy_s(first, CT2A(mixed_text)); // the last argument converts the CString to std::string. and the copies content from string array to char array.
			//string converted_char(first); // this line converts char array to std::string

			size_t number_of_specific_character = count(mixed_string_text.begin(), mixed_string_text.end(), '+'); // finds how many times '+' used in input stream
			//		size_t count = 0;
			//		count = mixed_string_text.find("+", count + 1);
			int iterator_of_for_loop = mixed_string_text.length() + number_of_specific_character;
			int iterator_of_for_loop_ = mixed_string_text.length() - number_of_specific_character;

			ofstream y("text.txt");
			// fayldan istifade lazim olsa bura yaz. BAŞQA YERDƏ YARATMA !
			y.close();



		}
	}
	else
		MessageBox(L"nese daxil edin", L"Simple calculator", MB_ICONINFORMATION);
}
