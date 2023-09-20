#include <iostream>
#include <string>
using namespace std;

class Creature {
public:
	Creature();
	
	void SetName(string name);
	string GetName();

	void TakeDamage(float damage);
	
	float GetHealth();
private:
	string Name;
	float Health;

protected:
	int NumberOfLimbs;
};

class Goblin : public Creature {
public:
	Goblin();
	int GetNumberOfLimbs();
};


int main() {
	Creature Igor;
	Igor.SetName("Igor");

	cout << "Creature Name: " << Igor.GetName() << endl;
	cout << "Creature Health: " << Igor.GetHealth() << endl;
	cout << "Creature Takes Damage!" << endl;
	
	Igor.TakeDamage(12.0f);
	
	Goblin Gobby;
	cout << Gobby.GetName() << endl;
	cout << Gobby.GetName() << " has " << Gobby.GetNumberOfLimbs() << " limbs." << endl;
	return 0;
}

Creature::Creature() {
	cout << "A creature has been created!\n";
	Health = 100;
}

void Creature::SetName(string name) {
	Name = name;
}

string Creature::GetName() {
	return Name;
}

float Creature::GetHealth() {
	return Health;
}

void Creature::TakeDamage(float damage) {
	float total = Health - damage;
	
	if (total <= 0) {
		cout << GetName() << " has died!" << endl;
	}
	else
	{
		Health -= damage;
	}

	cout << GetName() << " Health: " << GetHealth() << endl;
}

Goblin::Goblin() {
	NumberOfLimbs = 5;

	SetName("Gobby");
}

int Goblin::GetNumberOfLimbs() {
	return NumberOfLimbs;
}
