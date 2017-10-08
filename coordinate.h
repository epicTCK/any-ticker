#ifndef _COORDINATE_H_
#define _COORDINATE_H_

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

bool operator<( const Coordinate& left, const Coordinate& right );

#endif // _COORDINATE_H_
