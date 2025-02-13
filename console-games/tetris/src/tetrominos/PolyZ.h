/////////////////////////////////////////////////////////////
//  Author: Anonoei (https://github.com/anonoei)
//  License : GPLv3
//  Language: C++17
// Part of Tetris
//////////////////////////////
#pragma once

#include "Tetromino.h"

#include <vector>

class PolyZ : public Tetromino
{
public:
	PolyZ() { this->Create(); }
	~PolyZ() {}

	void Create();

};	//	END class PolyZ

