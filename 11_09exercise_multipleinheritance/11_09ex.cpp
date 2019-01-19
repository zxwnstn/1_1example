#include<iostream>
using namespace std;

class USBDevice
{
private:
	long m_id;
public:
	USBDevice(long id)
		: m_id(id)
	{}

	long getID() { return m_id; }

	void plugAndPlay() {}

};

class NetworkDevice
{
private:
	long m_id;

public:
	NetworkDevice(long id_in)
		: m_id(id_in)
	{}
	long getID() { return m_id; }
	void networking() {}
};

//저 두개를 동시에 상속받을순 없을까?
//가능하다..

class USBNetworkDevice : public USBDevice, public NetworkDevice
{
public:
	USBNetworkDevice(long usb_id, long net_id)
		: USBDevice(usb_id), NetworkDevice(net_id)
	{}

	USBNetworkDevice(long id)
		: USBDevice(id), NetworkDevice(id)
	{}
	//문제는 중복되는 함수에서 생긴다.

};


int main()
{
	NetworkDevice net(123);
	USBNetworkDevice unet(123);
	USBNetworkDevice unet2(1, 2);
	//unet.getID();	// 엠비규어스 오류
	unet.NetworkDevice::getID();	// 해결 방안
	unet.USBDevice::getID();


	//다이아몬드 상속
	// B1 B2는 C로 부터 상속받았다.
	// A는 B1 B2로 부터 상속받았다.
	// 이때 A는 문제점이 생길요지가 매우크며, 사용시 각별한 주의가 필요하다! 다음시간에..
}