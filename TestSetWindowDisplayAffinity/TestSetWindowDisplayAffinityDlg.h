
// TestSetWindowDisplayAffinityDlg.h : header file
//

#pragma once


// CTestSetWindowDisplayAffinityDlg dialog
class CTestSetWindowDisplayAffinityDlg : public CDialogEx
{
// Construction
public:
	CTestSetWindowDisplayAffinityDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTSETWINDOWDISPLAYAFFINITY_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedOk();
};
