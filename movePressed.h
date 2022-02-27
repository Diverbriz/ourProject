#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class movePressed
{
private:
	double speed = 0.5;
public:
	void moveArrows(Sprite herosprite) {
		if (Keyboard::isKeyPressed(Keyboard::Left)) { herosprite.move(-0.1 * speed, 0); } //первая координата Х отрицательна =>идём влево
		if (Keyboard::isKeyPressed(Keyboard::Right)) { herosprite.move(0.1 * speed, 0); } //первая координата Х положительна =>идём вправо
		if (Keyboard::isKeyPressed(Keyboard::Up)) { herosprite.move(0, -0.1 * speed); } //вторая координата (У) отрицательна =>идём вверх (вспоминаем из предыдущих уроков почему именно вверх, а не вниз)
		if (Keyboard::isKeyPressed(Keyboard::Down)) { herosprite.move(0, 0.1 * speed); }
	}
};

