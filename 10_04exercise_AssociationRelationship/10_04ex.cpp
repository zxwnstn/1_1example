#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Doctor;	// forward declaration
//양방향으로 알필요가 있기때문에 전방선언을 해야된다.
//헤더와 cpp로 나누게 되면, 전방선언을해도 바디를 못찾는 경우가 생긴다.
//Association관계는 비교적 덜 쓰이지만 어쩔수없이 써야할때가 분명히 있다.
//전방선언이 되있는경우 이러한 제휴관계라 파악하고 접근하는것이 좋다.


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
	//m_doctors의 포인터에 즉 class Doctor에 무엇이 있는지 
	//알길이 없다. 따라서 일단 class Doctor로 밑으로 빼주어야 한다.
	
};

class Doctor
{
private:
	string m_name;
	vector<Patient*> m_patients;
	//참고: 의사가 의사를 만나야 하는 reflecive association 관계가 
	// 있을수도 있다.
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