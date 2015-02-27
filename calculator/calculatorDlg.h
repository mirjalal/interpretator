
// calculatorDlg.h : header file
//

#pragma once
#include "afxwin.h"

// CCalculatorDlg dialog
class CCalculatorDlg : public CDialogEx
{
// Construction
public:
	CCalculatorDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CALCULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit all_text;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4(); 
	afx_msg void OnBnClickedButton5();
	CEdit m_edit2;
	CString ilkin_eded, ikinci_eded, netice_, convert_olunmus_cavab;
	double double_ilkin_eded, double_ikinci_eded, cavab;
	int btn_id;
	afx_msg void OnBnClickedButton6();
};
