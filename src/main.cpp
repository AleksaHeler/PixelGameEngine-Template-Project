#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

#include "main.h"

class PGETemplateProject : public olc::PixelGameEngine
{
public:
	PGETemplateProject()
	{
		sAppName = "PGETemplateProject";
	}

public:
	bool OnUserCreate() override
	{
		// Called once at the start, so create things here
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		// called once per frame
		for (int x = 0; x < ScreenWidth(); x++)
			for (int y = 0; y < ScreenHeight(); y++)
				Draw(x, y, olc::Pixel(rand() % 255, rand() % 255, rand()% 255));	
		return true;
	}
};

int main()
{
	PGETemplateProject demo;
	if (demo.Construct(256, 240, 4, 4))
		demo.Start();

  return EXIT_SUCCESS;
}

