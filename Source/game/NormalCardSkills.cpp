#include <Card.h>
#include <CardSkill.h>

int main() {
	if (Card_Skill_Type == 1)
	{
		int (*funcPtr)() = nullptr;
		switch (Card_Normal_Skill_Identification) {
		case 1:
			funcPtr = Beloved_Bestows;
			break;
		default:
			break;
		}
		if (funcPtr) {
			funcPtr();
		}
	}
}