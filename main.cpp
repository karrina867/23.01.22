#include "SFML/Graphics.hpp"
#include"const.h"
#include"boll.h"
#include"bat.h"
#include"left bat.h"
using namespace sf;
int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(WINDOW_HIGHT, WINDOW_HIGHT), "SFML Works!");
	window.setFramerateLimit(60);

	//сщздание игровых обьектов
	Ball ball;
	LeftBat left_bat(20, WINDOW_HIGHT / 2 - 50);

	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// 1 Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
		// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		//2 update (изменение игровых обьектов
		ball.update();
		left_bat.update();
		// 3  Отрисовка окна
		//3.1 очистка окна
		window.clear(Color(60, 60, 60, 0));
		// 3.2 рисуем игровые обьекты (в памяти)
		window.draw(ball.getShape());
		window.draw(left_bat.getShape());
		// 3.3 отображение на экране
		window.display();
	}
	return 0;
} 