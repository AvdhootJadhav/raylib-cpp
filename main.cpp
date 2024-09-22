#include <bits/stdc++.h>
#include "raylib.h"

using namespace std;

int main() {

	Vector2 position = Vector2{0, 0};
	Vector2 size = Vector2{100, 100};

	InitWindow(800, 800, "Hello from c++ raylib");
	while (!WindowShouldClose()) {
		BeginDrawing();
		DrawRectangleV(position, size, RED);
		EndDrawing();
	}
	CloseWindow();
}
