#include <bits/stdc++.h>
#include "raylib.h"
#include "raymath.h"

#define maxDepth 3
#define branchCount 6
#define angle 2*3.14/branchCount

using namespace std;

const vector<Color> color = {BLUE, RAYWHITE, DARKBLUE};
const int colorSet = color.size();

void drawSnowflake(int depth, Vector2 origin, float length, float thickness) {
	if (depth == maxDepth) {
		return;
	}
	for (auto i=1;i<=branchCount; i++) {
		Vector2 dest = Vector2{};
		dest.x = origin.x + cos(angle*i)*length;
		dest.y = origin.y + sin(angle*i)*length;
		DrawLineEx(origin, dest, thickness, color[(depth%colorSet)]);
		drawSnowflake(depth+1, dest, length*0.5, thickness*0.5);
	}
}

int main() {
	InitWindow(800, 800, "SnowFlake");
	float width = GetScreenWidth();
	float height = GetScreenHeight();
	float length = 100;
	float thickness = 10;

	Vector2 origin = Vector2{width/2, height/2};
	while (!WindowShouldClose()) {
		BeginDrawing();
		drawSnowflake(0, origin, length, thickness);
		EndDrawing();
	}
	CloseWindow();
}
