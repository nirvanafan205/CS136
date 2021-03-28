#include <iostream>

using namespace std;

class Patient
{
	private:

		string name;
		string address;
		int phone;
		char gender;
		int file_number;
		int registration_date;

	public:

		void setName(string name_)
		{
			name = name_;
		}

		string getName()
		{
			return name;
		}

		void setAddress(string home)
		{
			address = home;
		}

		string getAddress()
		{
			return address;
		}

		void setNumber(int digits)
		{
			phone = digits;
		}

		int getNumber()
		{
			return phone;
		}

		void setGender(char sex)
		{
			gender = sex;	
		}

		char getGender()
		{
			return gender;
		}

		void setFile(int file_info)
		{
			file_number = file_info;
		}

		int getFile()
		{
			return file_number;
		}

		void setRegistration(int reg_number)
		{
			registration_date = reg_number;
		}

		int getRegistration()
		{
			return registration_date;
		}

		void print()
		{
			cout << "Patient information" << endl;
			//patients class info

			cout << "Cancer information" << endl;
			//CancerPatient's class info
		}
};

class CancerPatient : public Patient
{
	private:

		string cancer_type;
		int cancer_stage;
		int diagnoses_date;
		string medications;

	public:

		Patient caller;

		void setCancerType(string type)
		{
			cancer_type = type;
		}

		string getCancerType()
		{
			return cancer_type;
		}

		void setCancerStage(int stage)
		{
			cancer_stage = stage;
		}

		int getStage()
		{
			return cancer_stage;
		}

		void setDate(int date)
		{
			diagnoses_date = date;
		}

		int getDate()
		{
			return diagnoses_date;
		}

		void setMedications(string med)
		{
			medications = med;
		}

		string getMedications()
		{
			return medications;
		}

		void printC()
		{
			caller.print();			
		}
};
