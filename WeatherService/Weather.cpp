#include "Weather.h"

Weather::Weather(string c, double lo, double la, double te, string we, double ws, int cl)
{
	city = c;
	lon = lo;
	lat = la;
	temperature = te;
	weather = we;
	windSpeed = ws;
	clouds = cl;
}
