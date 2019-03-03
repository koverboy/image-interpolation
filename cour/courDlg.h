
// courDlg.h: файл заголовка
//

#pragma once


// Диалоговое окно CcourDlg
class CcourDlg : public CDialogEx
{
// Создание
public:
	CcourDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COUR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedOpen();
//	afx_msg void OnBnClickedButton1();
	afx_msg void OnClickedDolap();
//	int edit;
};
