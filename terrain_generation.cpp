// terrain_generation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define OLC_PGE_APPLICATION

#include "olcPixelGameEngine.h"
#include <iostream>

const int SCREEN_WIDTH = 400;
const int SCREEN_HEIGHT = 400;

class Application : public olc::PixelGameEngine
{
public:

    Application()
    {
        sAppName = "Terrain Generation";
    }

    ~Application()
    {

    }
    bool OnUserCreate() override
    {
        return true;
    }

    bool OnUserUpdate(float fElapsedTime) override
    {
        createTerrain();
        return true;
    }


    void createTerrain()
    {
        int rows = 40;
        int cols = 40;
        int row_width = SCREEN_WIDTH / rows;
        int col_width = SCREEN_HEIGHT / cols;
        for (int i = 0; i < SCREEN_WIDTH; i += row_width)
        {
            for (int j = 0; j < SCREEN_HEIGHT; j+= col_width)
            {
                DrawTriangle(j, i, j, i + row_width, j + col_width, i + row_width);
            }
        }
    }
};

int main()
{
    Application app;
    if(app.Construct(SCREEN_WIDTH, SCREEN_HEIGHT, 2, 2))
        app.Start();

    return 0;
}
