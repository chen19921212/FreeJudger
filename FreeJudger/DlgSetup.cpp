﻿// DlgSetup.cpp : implementation file
//

#include "stdafx.h"
#include "FreeJudger.h"
#include "DlgSetup.h"
#include "afxdialogex.h"


// CDlgSetup dialog

IMPLEMENT_DYNAMIC(CDlgSetup, CDialogEx)

CDlgSetup::CDlgSetup(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgSetup::IDD, pParent)
{

}

CDlgSetup::~CDlgSetup()
{
}

void CDlgSetup::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgSetup, CDialogEx)
END_MESSAGE_MAP()


// CDlgSetup message handlers
