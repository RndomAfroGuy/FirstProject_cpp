#include <iostream>
#include <vector>

using namespace std;

int main() {
	char selected_op{};
	int add_number{};
	vector <int> number_list{};
	do
	{
		cout << "\n \\----Selection Menu----/" << endl;
		cout << "\nP. Print Numbers" << endl;
		cout << "A. Add Numbers" << endl;
		cout << "M. Display mean of the numbers" << endl;
		cout << "S. Display the smallest number" << endl;
		cout << "L. Display the largest number" << endl;
		cout << "Q. Quit\n" << endl;

		bool on_going{ true };

		//verifying if the app can continue by checking the state of the on_going variable


		cout << "Choose a option from above : ";
		cin >> selected_op;

		selected_op = tolower(selected_op);

		switch (selected_op)
		{
		case 'p': // this case is choosen in case u want to see the numbers at the list DOOOONNNEEEE!!
		{
			cout << "you've choosen to print the numbers\n" << endl;
			if (number_list.size() > 0) {
				cout << "[";
				for (int i = 0; i < number_list.size(); i++) {
					cout << " " << number_list.at(i) << " ";
				}
				cout << "]" << endl;
			}
			else {
				cout << "[]- the list is empty" << endl;
			}

			break;
		}
		case 'a': //in case you select to add a number DONEEEEE!!!
		{
			cout << "you've choosen to add a number. Which number would you wish to add : ";
			cin >> add_number;
			number_list.push_back(add_number);
			cout << "number " << add_number << " was added!";
			break;
		}
		case 'm': //DONE!!!!
		{
			float mean{};
			float sum{};
			cout << "the mean of the numbers is: ";
			if (number_list.size() > 0) {
				for (int i = 0; i < number_list.size(); i++) {
					sum += number_list.at(i);
				}
				mean = sum / number_list.size();
				cout << mean;
			}
			else {
				cout << "Unable to calculate - no data";
			}
			break;
		}
		case 's': //DONE!!!
		{
			int small_number{ number_list.at(0) };
			if (number_list.size() > 0) {
				cout << "[";
				for (int i = 0; i < number_list.size(); i++) {
					cout << " " << number_list.at(i) << " ";
				}
				cout << "]" << endl;
				for (int i = 0; i < number_list.size(); i++) {
					if (number_list.at(i) < small_number) {
						small_number = number_list.at(i);
					}
				}
				cout << "the smallest number is: ";
				cout << small_number;

			}
			else {
				cout << "Unable to determine smallest number - list is empty.";
			}
			break;
		}
		case 'l': //DONE!!
		{
			int large_number{ number_list.at(0) };


			if (number_list.size() > 0) {
				cout << "[";
				for (int i = 0; i < number_list.size(); i++) {
					cout << " " << number_list.at(i) << " ";
				}
				cout << "]" << endl;
				for (int i = 0; i < number_list.size(); i++) {
					if (number_list.at(i) > large_number) {
						large_number = number_list.at(i);
					}
				}

				cout << "the largest number is: ";
				cout << large_number;

			}
			else {
				cout << "Unable to determine largest number - list is empty.";
			}
			break;
		}

		case 'q':
		{

			on_going = false;
			cout << "GoodBye" << endl;
			break;
		}

		default:
			cout << "Unknown selection please try again";
			break;
		}


	} while (selected_op != 'q' && selected_op != 'Q');
}

