#include <bits/stdc++.h>
#include "raylib.h"

using namespace std;

int main() {
	InitWindow(800, 800, "Hello from c++ raylib");
	float width = GetScreenWidth();
	float height = GetScreenHeight();
	float offset = 200;

	Vector2 center = Vector2{width/2,height/2};
	Vector2 endA = Vector2{width/2-offset, width/2};
	Vector2 endB = Vector2{width/2, width/2-offset};
	Vector2 endC = Vector2{width/2+offset, width/2};
	Vector2 endD = Vector2{width/2, width/2+offset};

	while (!WindowShouldClose()) {
		BeginDrawing();
		DrawLineEx(center, endA, 1.0, RED);
		DrawLineEx(center, endB, 1.0, BLUE);
		DrawLineEx(center, endC, 1.0, GREEN);
		DrawLineEx(center, endD, 1.0, YELLOW);

		EndDrawing();
	}
	CloseWindow();
}
