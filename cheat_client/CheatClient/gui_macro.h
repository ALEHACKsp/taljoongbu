#pragma once
#include <nanogui/nanogui.h>

static std::string ERROR_MESSAGE(256, '\0');	// try/catch�� ���� �޽��� ����
static std::string processName = "";			// ������ ���μ��� �̸�
static nanogui::VScrollPanel *vscroll_log;		// �α׺�� ��ũ��
static nanogui::Widget *wrapper_log;			// �α׺�� ĭ
static nanogui::Label* labelLog;				// �α� ��
static std::vector<nanogui::Label*> labelList;	// �α� �� vector
static int labelListEmpty = 0;					// ����ִ� �� ����Ʈ �� ��


constexpr int LOG_LABEL_MAX = 11; // �α׺� ȭ�� �ִ� �� ��

/* ���� ����ϴ� GUI ��ü�� ���� �ʱ� ������ �� ���·� �����ϱ� ���� ��ũ�� */
#define ADD_BUTTON(name, font_size, width_size, height_size, width_position, height_position, tf)	\
    button = new nanogui::Button(wrapper, name);													\
	button->setFixedSize({ width_size, height_size });												\
	button->setFontSize(font_size);																	\
	button->setPosition({ width_position, height_position });										\
	buttonList.push_back(button);																	\
	button->setEnabled(tf)

#define ADD_IMAGE(imgDir, width, height, tf)		\
	icons = loadImageDirectory(temp, imgDir);		\
	imgPanel = new nanogui::ImagePanel(wrapper);	\
	imgPanel->setImages(icons);						\
	imgPanel->setFixedSize({ 74, 74 });				\
	imgPanel->setPosition({ width, height })

#define ADD_LABEL(log)													\
	labelLog = new nanogui::Label(wrapper_log, "��");					\
	labelLog->setFontSize(20);											\
	labelLog->setFixedWidth(width - (width_30per + width_2_5per * 4));	\
	labelLog->setCaption(log)
