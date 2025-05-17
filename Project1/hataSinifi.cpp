#include "hataSinifi.h"
using namespace std;

HataSinifi::HataSinifi(string _hataMesaji) {
	hataMesaji = _hataMesaji;
}

string HataSinifi::getHataMesaji() {
	return hataMesaji;
}