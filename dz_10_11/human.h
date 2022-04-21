#ifndef human_H
#define human_H



#include <iostream>
#include <string>
using namespace std;



//dz 10 
class Human {
protected:
	string surname, name, midname;
	int age;
public:
	Human() {
		name = "";
		surname = "";
		midname = "";
		age = 0;

	}
	Human(string name, string surname, string midname, int age) {
		this->name = name;
		this->midname = midname;
		this->surname = surname;
		this->age = age;

	}
	virtual void print() = 0;
	~Human() {}
};




class Student :public Human {
private:
	bool on_lesson;
public:
	Student() :Human() {
		on_lesson = 0;
	}
	Student(string name, string surname, string midname, int age, bool on_lesson) :Human(name, surname, midname, age) {
		this->on_lesson = on_lesson;
	}
	void print() override {
		cout << name << "\t" << surname << "\t" << midname << "\t" << age << "\t" << on_lesson << endl;
	}

};

class Boss :public Human {
private:
	int  number_of_workers;
public:
	Boss() :Human() {
		number_of_workers = 0;
	}
	Boss(string name, string surname, string midname, int age, int number_of_workers) :Human(name, surname, midname, age) {
		this->number_of_workers = number_of_workers;
	}
	void print() override {
		cout << name << "\t" << surname << "\t" << midname << "\t" << age << "\t" << number_of_workers << endl;
	}

};

//11

class Animal {
protected:
	int age;
	string color;
public:
	Animal(int age, string color) {
		this->age = age;
		this->color = color;

	}
	virtual void voice() = 0;


};



class Parrot :public Animal {
public:
	Parrot(int age, string color) :Animal(age, color) {

	}
	void voice() override {
		cout << "sing\n";
	}
};


class Dog :public Animal {
public:
	Dog(int age, string color) :Animal(age, color) {

	}
	void voice() override {
		cout << "Gawg\n";
	}
};


class Cat :public Animal {
public:
	Cat(int age, string color) :Animal(age, color) {

	}
	void voice() override {
		cout << "Meow\n";
	}
};


#endif // !HEADER_H
