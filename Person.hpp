#pragma once
#include<string>



class Person {
public:
	Person() :name_(" "), life_(0), gender_("  "), weight_(0), max_weight_(0) { }
	Person(std::string name, int weight, std::string gender) {
		this->gender_ = gender;
		this->name_ = name;
		this->life_ = 10.0;
		this->weight_ = weight;
		this->max_weight_ =0;
		
	}
	~Person() {}

	void SetFeet (std::string name, double weigth, double morelife) {
		feet.SetFeet(name, weigth, morelife);
	}
	void CloseFeet() {
		feet.CloseFeet();
	}
	
	void SetHead(std::string name, double weight, double morelife) {
		head.SetHead(name, weight, morelife);
	}
	void CloseHead() {
		head.CloseHead();
	}
	std::string Name()const { return name_; }
	std::string NameHead()const { return head.Name(); }
	std::string NameFeet()const { return feet.Name(); }
	double MaxWeight()const { return(head.Weight() + feet.Weight()); }
	double Weight()const { return weight_; }; 
	double Мorelife ()const { return (life_ + head.Мorelife() + feet.Мorelife()); }
	std::string Gender()const { return gender_; }
	
private:
	std::string name_; 
	double life_; // Здоровье
	double max_weight_; //  масса снаряжения
	double weight_; // Масса игрока
	std::string gender_;

	class Head {
	public:
		Head() :name_(" "), weight_(0), more_life_(0) {} 
		~Head() {}
		
		void SetHead(std::string name, double weight, double morelife) {
			this->name_ = name;
			this->more_life_ = morelife;
			this->weight_ = weight;
		}
		
		void CloseHead() {
			this->name_ = "head";
			this->more_life_ = 0;
			this->weight_ = 0;
		}
		
		std::string Name()const { return name_; }
		double Weight()const { return weight_; }		
		double Мorelife()const { return more_life_; }

	private:
		std::string name_; // Название шлема
		double weight_; // Вес 
		double more_life_; // Увеличение жизни
		
	};
	Head head; 

	class Feet {
	public:
		Feet() :name_("  "), more_life_(0), weight_(0) {}
		~Feet() {}
		
		void SetFeet (std::string name, double weight, double morelife) {
			this->name_ = name;
			this->more_life_ = morelife;
			this->weight_ = weight;
		}
		void CloseFeet() {
			this->name_ = "feet";
			this-> more_life_ = 0;
			this->weight_ = 0;
		}
		std::string Name()const { return name_; }
		double Weight()const { return weight_; }	
		double Мorelife ()const { return more_life_; }
	
	private:
		std::string name_; // Название обуви
		double weight_; // Вес 
		double more_life_; // Увеличение жизни
	};
	Feet feet;
};


class Game_item {
public:
	Game_item () :name_("  "), type_("  "), weight_(0) {} 
	Game_item (std::string name, std::string type, double weight) {
		this->name_ = name;
		this->weight_ = weight;
		this->type_ = type;
	}
	std::string Name()const { return name_; }
	double Weight()const { return weight_; }

private:
	std::string name_; // Название предмета	
	std::string type_; // Тип предмета
	double weight_; // Вес предмета	
	
};

class Helmet :public Game_item {
public:
	Helmet () : name_ (" "), more_life_(0), weight_ (0) {}
	Helmet (std::string name, double morelife, double weight) 
	{
		this->more_life_ = morelife; this->name_ = name; this->weight_ = weight;
	}
	~Helmet () { };
	
	
	friend std::ostream& operator << (std::ostream& output, const Helmet& obj) {
		output << obj.Name() <<  obj.more_life_ << obj.Weight();
			return output;
	}
	double Мorelife()const { return more_life_; }
	std::string Name()const { return name_; }
	double Weight()const { return weight_; }
	
private:
	double more_life_; // Увеличение жизни
	std::string name_;
	double weight_;
};

class Boot :public Game_item {
public:
	Boot() : name_(" "), more_life_(0), weight_(0) {}
	Boot(std::string name, double morelife, double weight) {
		this->more_life_ = morelife; this->name_ = name; this->weight_ = weight;
	}
	~Boot() { }

	friend std::ostream& operator<<(std::ostream& output, const Boot& obj) {
		output << obj.Name() << obj.more_life_ << obj.Weight();
		return output;
	}
	double Мorelife()const { return more_life_; }
	std::string Name()const { return name_; }
	double Weight()const { return weight_; }

private:
	double more_life_; // Увеличение жизни
	std::string name_;
	double weight_;
};


