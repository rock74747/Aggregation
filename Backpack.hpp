#pragma once



class Backpack {
public:
	Backpack() :name_(" "), weight_(0), max_weight_(0) { }
	Backpack(std::string name, int weight) {
		this->name_ = name;
		this->weight_ = weight;
		this->max_weight_ = 0;
	}
	~Backpack() {};

	std::string Name()const { return name_; }
	double Weight()const { return weight_; };

private:
	std::string name_;
	double max_weight_; //  масса девайсов
	double weight_; // Масса рюкзака
};

class  Aid_kit : public Backpack {
public:
	Aid_kit() :name_(" "), weight_(0), more_life_(0) {}
	Aid_kit(std::string name, double morelife, double weight)
	{
		this->name_ = name; this->weight_ = weight; this->more_life_ = morelife;
	}
	~Aid_kit() { };

	double Мorelife()const { return more_life_; }
	std::string Name()const { return name_; }
	double Weight()const { return weight_; }

	void Print() {
		std::cout << Мorelife() << ' ';
	}

	friend std::ostream& operator<<(std::ostream& output, const Aid_kit& obj) {
		output << obj.Name() << obj.Мorelife() << obj.Weight();
		return output;
	}

private:
	std::string name_; // Название 
	double weight_; // Вес 
	double more_life_; // Увеличение жизни
};

class Tent : public Backpack {
public:
	Tent() :name_(" "), weight_(0), more_life_(0) {}
	Tent(std::string name, double morelife, double weight)
	{
		this->name_ = name; this->weight_ = weight; this->more_life_ = morelife;
	}
	~Tent() { };

	double Мorelife()const { return more_life_; }
	std::string Name()const { return name_; }
	double Weight()const { return weight_; }
private:
	std::string name_; // Название 
	double weight_; // Вес 
	double more_life_; // Увеличение жизни
};


class  Preserves : public Backpack {
public:
	Preserves() :name_(" "), weight_(0), more_life_(0) {}
	Preserves(std::string name, double morelife, double weight)
	{
		this->name_ = name; this->weight_ = weight; this->more_life_ = morelife;
	}
	~Preserves() { };

	double Мorelife()const { return more_life_; }
	std::string Name()const { return name_; }
	double Weight()const { return weight_; }

	void Print() {
		std::cout << Мorelife() << ' ';
	}
private:
	std::string name_; // Название 
	double weight_; // Вес
	double more_life_; // Увеличение жизни
};