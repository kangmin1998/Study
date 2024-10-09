#pragma once
#include "Zone.h"

class BlackSmith
{
public:

	//BlackSmith(UZone& _ParentZone)
	//	: ParentZone(_ParentZone)
	//{

	//}


	void TryUpGrade(class UPlayer& _Player);

	void InPlayer(class UPlayer& _Player/*, int& Result*/);

	inline void SetParent(class UZone* _ParentZone)
	{
		ParentZone = _ParentZone;
	}

	void goldPrice(class UStatusUnit& _goldPr);
	

private:
	// class UZone& ParentZone;

	class UZone* ParentZone = nullptr;
};

