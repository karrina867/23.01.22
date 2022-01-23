#include "SFML/Graphics.hpp"
#include"const.h"
#include"boll.h"
#include"bat.h"
#include"left bat.h"
using namespace sf;
int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(WINDOW_HIGHT, WINDOW_HIGHT), "SFML Works!");
	window.setFramerateLimit(60);

	//�������� ������� ��������
	Ball ball;
	LeftBat left_bat(20, WINDOW_HIGHT / 2 - 50);

	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// 1 ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
		// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		//2 update (��������� ������� ��������
		ball.update();
		left_bat.update();
		// 3  ��������� ����
		//3.1 ������� ����
		window.clear(Color(60, 60, 60, 0));
		// 3.2 ������ ������� ������� (� ������)
		window.draw(ball.getShape());
		window.draw(left_bat.getShape());
		// 3.3 ����������� �� ������
		window.display();
	}
	return 0;
} 