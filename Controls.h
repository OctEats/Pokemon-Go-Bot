#pragma once

#include "GUI.h"

class CCheckBox : public CControl
{
public:
	CCheckBox();
	void SetState(bool s);
	bool GetState();
protected:
	bool Checked;
	void Draw(bool hover);
	void OnUpdate();
	void OnClick();
};

class CLabel : public CControl
{
public:
	CLabel();
	void SetText(std::string text);
protected:
	std::string Text;
	void Draw(bool hover);
	void OnUpdate();
	void OnClick();
};
class CGroupTab
{
public:
	std::string name;
	int id;
public:
	CGroupTab(std::string _name, int _id)
	{
		this->name = _name;
		this->id = _id;
	}
};
class CGroupBox : public CControl
{
public:
	CGroupBox();
	void SetText(std::string text);
	void PlaceLabledControl(std::string Label, CTab *Tab, CControl* control);
protected:
	int Items;
	std::string Text;
	void Draw(bool hover);
	void OnUpdate();
	void OnClick();
};
class CGroupBoxNultiTabs : public CControl
{
public:
	CGroupBoxNultiTabs();
	void SetText(std::string text);
	void PlaceLabledControl(int g_tab, std::string Label, CTab *Tab, CControl* control);
	void AddTab(CGroupTab t);
	int selected_tab = 0;
	std::vector<CGroupTab> group_tabs;
protected:
	std::vector<int> reset_tabs;
	int Items;
	std::string Text;
	int last_y;
	int last_control_height;
	bool initialized = false;
	void Draw(bool hover);
	void OnUpdate();
	void OnClick();
};
class CSlider : public CControl
{
public:
	CSlider();
	float GetValue();
	void SetValue(float v);
	void SetBoundaries(float min, float max);
protected:
	float Value;
	float Min;
	float Max;
	bool DoDrag;
	void Draw(bool hover);
	void OnUpdate();
	void OnClick();
};

class CKeyBind : public CControl
{
public:
	CKeyBind();
	int GetKey();
	void SetKey(int key);
protected:
	int Key;
	bool IsGettingKey;
	void Draw(bool hover);
	void OnUpdate();
	void OnClick();
};

class CButton : public CControl
{
public:
	typedef void(*ButtonCallback_t)(void);
	CButton();
	void SetCallback(ButtonCallback_t callback);
	void SetText(std::string text);
protected:
	ButtonCallback_t CallBack;
	std::string Text;
	void Draw(bool hover);
	void OnUpdate();
	void OnClick();
};

class CComboBox : public CControl
{
public:
	CComboBox();
	void AddItem(std::string text);
	void SelectIndex(int idx);
	int GetIndex();
	std::string GetItem();
protected:
	std::vector<std::string> Items;
	int SelectedIndex;
	bool IsOpen;
	void Draw(bool hover);
	void OnUpdate();
	void OnClick();
};
