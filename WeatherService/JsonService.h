#pragma once
#include "Service.h"
#include "include/single_include/nlohmann/json.hpp"
class JsonService: public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};

