
// ������Ʈ3 2014253048 ������.h : ������Ʈ3 2014253048 ������ ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// C������Ʈ32014253048������App:
// �� Ŭ������ ������ ���ؼ��� ������Ʈ3 2014253048 ������.cpp�� �����Ͻʽÿ�.
//

class C������Ʈ32014253048������App : public CWinApp
{
public:
	C������Ʈ32014253048������App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������Ʈ32014253048������App theApp;
