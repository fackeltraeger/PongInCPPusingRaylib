
#include <iostream>
#include <raylib.h>

int main()
{
    std::cout << "Hello World!\n";

    const int screenWidth = 750;
    const int screenHeight = 500;

    InitWindow(screenWidth, screenHeight, "Pavan's Pong Game!");

    while (false == WindowShouldClose()) // this loop will run until the esc-button/close-window is clicked.
    {
        // a blank screen will be created.
        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}