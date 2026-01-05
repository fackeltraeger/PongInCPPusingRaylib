
#include <iostream>
#include <raylib.h>

class ballMovement
{
private:
    int xSpeed, ySpeed, radius;
    float x, y;

public:

    ballMovement(float x, float y, int radius, int xSpeed, int ySpeed)
    {
        this->radius = radius;
        this->x = x;
        this->y = y;
        this->xSpeed = xSpeed;
        this->ySpeed = ySpeed;
    }

    void InitBall()
    {
        //draw the ball, where postioning in the middile of the window (topleft is (0,0) and bottomright is (750,500))
        DrawCircle(x, y, radius, GREEN);
    }

    void update()
    {
        x += xSpeed;
        y += ySpeed;
    }
};


int main()
{
    std::cout << "Hello World!\n";

    const int screenWidth = 750;
    const int screenHeight = 500;

    InitWindow(screenWidth, screenHeight, "Pavan's Pong Game!");

    Image icon = LoadImage("ball.png");
    SetWindowIcon(icon);                 
    UnloadImage(icon);        

    ballMovement ball(screenWidth / 2, screenHeight / 2, 20, 4, 4);
    SetTargetFPS(60); // 60 frames/second, if not mentioned it runs as fast as system config.

    while (false == WindowShouldClose()) // this loop will run until the esc-button/close-window is clicked.
    {
        // a blank screen will be created.
        BeginDrawing();
        //update
        ball.update(); 
        //clearing background and  printing again, for excluding the render of the design previously drawn
        ClearBackground(BLACK);
        DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, YELLOW); // line in the middle
        ball.InitBall();
        DrawRectangle(10, screenHeight / 2 - 30, 20, 60, WHITE);
        DrawRectangle(screenWidth - 30, screenHeight/2-30 , 20, 60, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}