#pragma once

#include "Hacks.h"

Vector GetAutostrafeView();

class CMiscHacks : public CHack
{
public:
	void Init();
	void Draw();
	void Move(CUserCmd *pCmd, bool &bSendPacket);
private:
	void AutoJump(CUserCmd *pCmd);
	void AutoJumpSMAC(CUserCmd *pCmd);
	void EdgeJump(CUserCmd *pCmd);
	void Walkbot(CUserCmd *pCmd);
	void PerfectStrafe(CUserCmd *pCmd);
	void LegitStrafe(CUserCmd *pCmd);
	void RageStrafe(CUserCmd *pCmd);
	void ChatSpamInterwebz();
	void ChatSpamName();
	void ChatSpamDisperseName();
	void ChatSpamRegular();
	void ChatSpamReports();
	void ChatSpamCallout();
	void Fakelag(CUserCmd *pCmd, bool &bSendPacket);
};
