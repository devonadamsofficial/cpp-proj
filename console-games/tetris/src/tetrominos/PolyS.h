/////////////////////////////////////////////////////////////
//  Author: Anonoei (https://github.com/anonoei)
//  License : GPLv3
//  Language: C++17
// Part of Tetris
//////////////////////////////
#pragma once

#include "Tetromino.h"

#include <vector>

class PolyS : public Tetromino
{
public:
	PolyS() { this->Create(); }
	~PolyS() {}

	void Create();

};	//	END class PolyS

