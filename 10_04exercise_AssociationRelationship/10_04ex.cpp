#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Doctor;	// forward declaration
//��������� ���ʿ䰡 �ֱ⶧���� ���漱���� �ؾߵȴ�.
//����� cpp�� ������ �Ǹ�, ���漱�����ص� �ٵ� ��ã�� ��찡 �����.
//Association����� ���� �� �������� ��¿������ ����Ҷ��� �и��� �ִ�.
//���漱���� ���ִ°�� �̷��� ���ް���� �ľ��ϰ� �����ϴ°��� ����.


class Patient
{
private:
	string m_name;
	vector<Doctor*> m_doctors;
public:
	Patient(string name_in)
		: m_name(name_in)
	{}

	void addDoctor(Doctor * new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}

	friend class Doctor;

	void meetDoctor();
	/*{
		for (auto &e : m_doctors)
		{
			cout << "Meet doctor : " << e->m_name << endl;
		}
	}*/
	//m_doctors�� �����Ϳ� �� class Doctor�� ������ �ִ��� 
	//�˱��� ����. ���� �ϴ� class Doctor�� ������ ���־�� �Ѵ�.
	
};

class Doctor
{
private:
	string m_name;
	vector<Patient*> m_patients;
	//����: �ǻ簡 �ǻ縦 ������ �ϴ� reflecive association ���谡 
	// �������� �ִ�.
public:
	Doctor(string name_in)
		: m_name(name_in)
	{}

	void addPatient(Patient * new_patient)
	{
		m_patients.push_back(new_patient);
	}

	friend class Patient;

	void meetPatient()
	{
		for (auto &e : m_patients)
		{
			cout << "Meet patients : " << e->m_name << endl;
		}
	}
};

void Patient::meetDoctor()
{
	for (auto &e : m_doctors)
	{
		cout << "Meet doctor : " << e->m_name << endl;
	}
}



int main()
{
	Patient *p1 = new Patient("Jack Jack");
	Patient *p2 = new Patient("Dash");
	Patient *p3 = new Patient("Violet");

	Doctor *d1 = new Doctor("Doctor K");
	Doctor *d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	// patients meet doctors
	p1->meetDoctor();

	// doctors meet patients
	d1->meetPatient();

	//delete
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;
	
	return 0;
}