#ifndef _LIFE_OBJECT_H_
#define _LIFE_OBJECT_H_

class Coordinate{
	public:
		Coordinate(int newX, int newY) {
			x = newX;
			y = newY;
		}
		int x;
		int y;
		std::string to_str();
};

#endif // _LIFE_OBJECT_H_
