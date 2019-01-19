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

//�� �ΰ��� ���ÿ� ��ӹ����� ������?
//�����ϴ�..

class USBNetworkDevice : public USBDevice, public NetworkDevice
{
public:
	USBNetworkDevice(long usb_id, long net_id)
		: USBDevice(usb_id), NetworkDevice(net_id)
	{}

	USBNetworkDevice(long id)
		: USBDevice(id), NetworkDevice(id)
	{}
	//������ �ߺ��Ǵ� �Լ����� �����.

};


int main()
{
	NetworkDevice net(123);
	USBNetworkDevice unet(123);
	USBNetworkDevice unet2(1, 2);
	//unet.getID();	// ����Ծ ����
	unet.NetworkDevice::getID();	// �ذ� ���
	unet.USBDevice::getID();


	//���̾Ƹ�� ���
	// B1 B2�� C�� ���� ��ӹ޾Ҵ�.
	// A�� B1 B2�� ���� ��ӹ޾Ҵ�.
	// �̶� A�� �������� ��������� �ſ�ũ��, ���� ������ ���ǰ� �ʿ��ϴ�! �����ð���..
}