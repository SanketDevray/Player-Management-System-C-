#include"array.h"

MyArray::MyArray(){
	play= NULL;
	size = 0;
	index = -1;
	
}
MyArray::MyArray(int s){
	
	size = s;
	index = -1;
	play= new Player[size];
}
MyArray::MyArray(MyArray & t){
	size = t.size;
	index = t.index;
	play= new Player[size];
	for(int i = 0; i<=index ; i++){
		play[i] = t.play[i];
	}
}
bool MyArray::isFull(){
	if(index == size-1){
		return true;
	}
	else {
		return false;
	}
}
bool MyArray::isEmpty(){
	
	if(index == -1){
		return true;
	}
	else{
		return false;
	}
}
bool MyArray::addPlayer(Player &t) {
    if (isFull()) {
        cout << "\n Array is already full" << endl;
    } else {
        if (index < size - 1) {
            play[++index] = t;
            cout << "Player added successfully" << endl;
        } else {
            cout << "Cannot add more Players. Array is full." << endl;
        }
    }
}

bool MyArray::searchPlayer(int joursey){
	if(isEmpty()){
		cout<<"\n Insert Elements First -> ";
		return false;
	}
	else{
		for(int i = 0 ; i <= index ; i++){
			if(play[i].getJno() == joursey){
				return i;
			}
			
		}
		return -1;
	}
}
bool MyArray::removePlayers(int joursey) {
    if (isEmpty()) {
        cout << "\n No element Is there to delete " << endl;
        return false;
    } else {
        int pos = searchPlayer(joursey);
        if (pos == -1) {
            cout << "\n Element to be delete not present" << endl;
            return false;
        } else {
            while (pos < index) {
                play[pos] = play[pos + 1];
                pos++;
            }
            index--;
            cout << "Element Deleted Successfully" << endl;
            return true;
        }
    }
}

void MyArray::display(){
	if(isEmpty()){
		cout<<"\nNO Element to Display "<<endl;
	}
	
	else{
		for(int i=0;i<=index ;i++){
			play[i].displayPlayer();
		}
		
	}
}
bool MyArray::topThree(){

}
MyArray::~MyArray() {
    delete[] play;
}
