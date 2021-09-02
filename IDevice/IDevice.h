#pragma once
#include <string>

class IDevice{
public:
	IDevice();
	virtual ~IDevice(){}
	void TurnOn();
	void TurnOff();
	bool GetStatus();

private:
	std::string m_brand;
	std::string m_model;
	std::string m_color;
	unsigned int m_height;
	unsigned int m_width;
	unsigned int m_lenth;
	bool m_DeviceStatus;
	enum DeviceStatus{
		DEVICE_TURNED_OFF	= 0,
		DEVICE_TURNED_ON	= 1
	};
};

