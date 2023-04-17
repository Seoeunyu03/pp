#include <iostream>

using namespace std;

class MobilePhone
{
public:
	MobilePhone()
	{
		cout << "MobilePhone을 생성합니다" << endl;
	}
	virtual ~MobilePhone()
	{
		cout << "MobilePhone을 소멸시킵니다" << endl;
	}

	virtual void TurnOn()
	{
		cout << "MobilePhone을 켭니다" << endl;

	}
	void TurnOff()
	{
		cout << "MobilePhone을 끕니다" << endl;
	}
};

class IPhone : public MobilePhone
{
public:
	IPhone()
	{
		cout << "IPhone을 생성합니다" << endl;
	}
	~IPhone()
	{
		cout << "IPhone을 소멸시킵니다" << endl;
	}

	void ApplePay()
	{
		cout << "ApplePay : 유한대학교 등록급 3,264,000원이 결재되었습니다" << endl;
	}
	void Siri()
	{
		cout << "Siri : 당신은 사람 취급 받을 자격이 없습니다" << endl;
	}
	void TurnOn()
	{
		cout << "◑" << endl;
	}
};

class Galaxy : public MobilePhone
{
public:
	Galaxy()
	{
		cout << "Galaxy을 생성합니다" << endl;
	}
	~Galaxy()
	{
		cout << "Galaxy을 소멸시킵니다" << endl;
	}
	void SamsungPay()
	{
		cout << "SamsungPay : 유한대학교 등록급 3,000,000원이 결재되었습니다" << endl;
	}
	void Bixby()
	{
		cout << "Bixby : 이 수업 망해라" << endl;
	}
	void TurnOn()
	{
		cout << "SAMSUNG" << endl;

	}
};


void main()
{
	cout << "MobilePhone에 대한 예제입니다\n" << endl;
	cout << endl;

	MobilePhone** mp = new MobilePhone * [2];
	mp[0] = new IPhone();
	
	mp[1] = new Galaxy();

	for (size_t i = 0; i < 2; i++) {
		mp[i]->TurnOn();
		delete(mp[i]);
	}

	

	//MobilePhone* mp = new IPhone();
	//IPhone* i = (IPhone*)mp;

	//mp->TurnOn();
	//mp->TurnOff();
	//cout << endl;

	//i->Siri();

	//cout << endl;
	//delete(i);

	////delete(mp);
}