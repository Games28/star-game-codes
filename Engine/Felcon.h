#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Felcon
{
public:
	
	void DrawStartImage(Graphics& gfx) const;// width 70 height 85
	void DrawUpImage(Graphics& gfx) const; // width 70 height 85
	void DrawDownImage(Graphics& gfx) const;// width 70 height 85
	void DrawLeftImage(Graphics& gfx) const; //width 85, height 70
	void DrawRightImage(Graphics& gfx) const; // width 85 height 70
	void Update(Graphics& gfx);

	
private:
	int x = 400;
	int y = 300;
	static constexpr int speed = 1;
	Graphics& gfx;
	Keyboard& kbd;
};
