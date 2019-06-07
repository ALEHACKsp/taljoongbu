#pragma once
#include <iostream> // Use std::cout, std::endl
#include <string>	// Use std::String
#include <atlstr.h>	// Use ATL::CString
#include <bcrypt.h>	// Use NTSTATUS

// LOGING_CONSOLE = 1 �� ��� �ܼ�â�� �α� ���
// LOGING_CONSOLE = 0 �� ��� GUI ȭ�鿡 �α� ���
#define LOGING_CONSOLE 0

// Insert a string message.
void println(std::string msg);
// If you have an error code, add the second argument.
void println(std::string msg, DWORD errcode);
// If you have an hexa code, add the second argument.
void println(std::string msg, NTSTATUS hexcode);