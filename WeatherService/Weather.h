#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace::std;

class Weather
{
private:
	string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(string c, double lo, double la, double te, string we, double ws, int cl);
};