#include "IDevice.h"

IDevice::IDevice() {}

void IDevice::TurnOn(){
	m_DeviceStatus = DEVICE_TURNED_ON;
}

void IDevice::TurnOff(){
	m_DeviceStatus = DEVICE_TURNED_OFF;
}

bool IDevice::GetStatus(){
	return m_DeviceStatus;
}
