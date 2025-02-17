
// TestSetWindowDisplayAffinityDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "TestSetWindowDisplayAffinity.h"
#include "TestSetWindowDisplayAffinityDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTestSetWindowDisplayAffinityDlg dialog



CTestSetWindowDisplayAffinityDlg::CTestSetWindowDisplayAffinityDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TESTSETWINDOWDISPLAYAFFINITY_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTestSetWindowDisplayAffinityDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTestSetWindowDisplayAffinityDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CTestSetWindowDisplayAffinityDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CTestSetWindowDisplayAffinityDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CTestSetWindowDisplayAffinityDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDOK, &CTestSetWindowDisplayAffinityDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CTestSetWindowDisplayAffinityDlg message handlers

BOOL CTestSetWindowDisplayAffinityDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTestSetWindowDisplayAffinityDlg::OnPaint()
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
HCURSOR CTestSetWindowDisplayAffinityDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CTestSetWindowDisplayAffinityDlg::OnBnClickedButton1()
{
	SetWindowDisplayAffinity(*this, WDA_NONE);
	SetWindowDisplayAffinity(*this, WDA_EXCLUDEFROMCAPTURE);
}

void CTestSetWindowDisplayAffinityDlg::OnBnClickedButton2()
{
	SetWindowDisplayAffinity(*this, WDA_NONE);
	SetWindowDisplayAffinity(*this, WDA_MONITOR);
}

void CTestSetWindowDisplayAffinityDlg::OnBnClickedButton3()
{
	SetWindowDisplayAffinity(*this, WDA_NONE);
}

void CTestSetWindowDisplayAffinityDlg::OnBnClickedOk()
{
	CDialogEx::OnOK();
}
