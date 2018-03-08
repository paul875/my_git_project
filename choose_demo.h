//#pragma once


// Cchoose_demo dialog

class Cchoose_demo : public CDialog
{
	//DECLARE_DYNAMIC(Cchoose_demo)

public:
	Cchoose_demo(CWnd* pParent = NULL);   // standard constructor
	virtual ~Cchoose_demo();

// Dialog Data
	enum { IDD = IDD_DIALOG_DEMO };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int m_ch_demo;
	afx_msg void OnBnClickedOk();
};
