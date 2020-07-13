#include <iostream>
#include <sstream>
using namespace std;

class Student {

	int age;
	int standard;
	string first_name;
	string last_name;

    public:
		void set_age(int nAge)
		    {
		        age = nAge;
		    }
		    void set_standard(int nStandard)
		    {
		        standard = nStandard;
		    }
		    void set_first_name(string nFirstname)
		    {
		        first_name = nFirstname;
		    }
		    void set_last_name(string nLastName)
		    {
		        last_name = nLastName;
		    }
		    int get_age() {return age;}
		    int get_standard() {return standard;}
		    string get_first_name() {return first_name;}
		    string get_last_name() {return last_name;}

		    string to_string()
		    {
		        stringstream ss;
		        char c = ',';
		        ss << age << c << first_name << c << last_name << c << standard;
		        return ss.str();
		    }
};



int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
