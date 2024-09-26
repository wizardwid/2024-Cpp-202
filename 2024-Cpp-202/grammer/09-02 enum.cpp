#include <iostream>
#include <map>

using namespace std;

void main() {
	// 0 : ÇÑ½Ä, 1 : ÀÏ½Ä, 2 : Áß½Ä
	int style = 0;

	switch (style)
	{
	case 0:
		cout << "±èÄ¡, ½Ó, ºñºö¹ä" << endl;
		break;
	case 1:
		cout << "ÃÊ¹ä, ¿ìµ¿, Å¸ÄÚ¾ß³¢" << endl;
		break;
	case 2:
		cout << "µ¿ÆÄÀ°, ¸¶¶óÅÁÈÄ·ç" << endl;
		break;
	default:
		break;
	}

}