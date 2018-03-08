// choose_demo.cpp : implementation file
//

#include "stdafx.h"
#include "Impact_metod.h"
#include "choose_demo.h"

//extern int ch_scenary_demo;

// Cchoose_demo dialog

IMPLEMENT_DYNAMIC(Cchoose_demo, CDialog)

Cchoose_demo::Cchoose_demo(CWnd* pParent /*=NULL*/)
	: CDialog(Cchoose_demo::IDD, pParent)
	, m_ch_demo(0)
{

}

Cchoose_demo::~Cchoose_demo()
{
}

void Cchoose_demo::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RADIO1_DEMO, m_ch_demo);
}


BEGIN_MESSAGE_MAP(Cchoose_demo, CDialog)
	ON_BN_CLICKED(IDOK, &Cchoose_demo::OnBnClickedOk)
END_MESSAGE_MAP()


// Cchoose_demo message handlers

void Cchoose_demo::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	OnOK();

	UpdateData(TRUE);

	ch_scenary_demo = m_ch_demo;
}
