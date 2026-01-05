
#include <iostream>
#include <raylib.h>

int main()
{
    std::cout << "Hello World!\n";

    const int screenWidth = 750;
    const int screenHeight = 500;

    InitWindow(screenWidth, screenHeight, "Pavan's Pong Game!");

    Image icon = LoadImage("ball.png");
    SetWindowIcon(icon);                 
    UnloadImage(icon);                   

    SetTargetFPS(60); // 60 frames/second, if not mentioned it runs as fast as system config.

    while (false == WindowShouldClose()) // this loop will run until the esc-button/close-window is clicked.
    {
        // a blank screen will be created.
        BeginDrawing();
        DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, YELLOW); // line in the middle
        DrawRectangle(10, screenHeight / 2 - 30, 20, 60, WHITE);
        DrawRectangle(screenWidth - 30, screenHeight/2-30 , 20, 60, WHITE);
        DrawCircle(screenWidth / 2, screenHeight / 2, 30, GREEN);        //draw the ball, where postioning in the middile of the window (topleft is (0,0) and bottomright is (750,500))
        EndDrawing();
    }

    CloseWindow();
    return 0;
}