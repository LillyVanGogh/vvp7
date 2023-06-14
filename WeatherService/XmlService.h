#pragma once
#include "pugixml-1.13/src/pugixml.hpp"
#include "Service.h"
class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};

