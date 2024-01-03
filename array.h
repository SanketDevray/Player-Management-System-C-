#include"player.cpp"
class MyArray{
	int size, index;
	Player *play;
public:
	
	MyArray();
	MyArray(int);
	MyArray(MyArray &);
	bool isFull();
	bool isEmpty();
	void display();
	bool addPlayer(Player &);
    bool removePlayers(int );
    bool topThree();
    bool searchPlayer(int );
	~MyArray();
};
