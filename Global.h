#pragma once
#include"clsUser.h"
#include"clsBankClient.h"
extern clsUser CurrentUser;  // ����� ���

clsUser CurrentUser = clsUser::Find("", "");


