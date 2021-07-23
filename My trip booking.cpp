using namespace std;
#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <ctime> 
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int greentext()
{	
	SetConsoleTextAttribute(hConsole, 2);  
}
int whitetext()
{
	SetConsoleTextAttribute(hConsole, 15);  
}
int redtext ()
{
	SetConsoleTextAttribute(hConsole,  4);  
}
int bluetext ()
{
	SetConsoleTextAttribute(hConsole, 11);  
}
int yellowtext ()
{
	SetConsoleTextAttribute(hConsole, 14);  
}
int darktext ()
{
	SetConsoleTextAttribute(hConsole, 8);  
} 
bool MenuLoop = true;
string name ("*****");
string surname ("*****");
string street ("*****");
string area ("*****");
string city ("*****");
string postcode ("*****");
string tel ("00");
string hotelName;
int house (00);
int startDate(00);
int startMonth (00);
int startYear(00);
int endDate(00);
int endMonth(00);
int endYear(00);
int userNumber(00);
int userSelection;
string userType("*****");
string hotel ("*****");
string room;
int hotelDate(00);
int hotelMonth(00);
int hotelYear(00);
double hotelPrice(0.00);
double oberoi = 450.00;
double smartplaza = 400.00;
double tajmotel = 900.00;
double aerostar = 450.00;
double lemontree = 550.00;
double lemeridian = 380.00;
double redfox = 400.00;
double devpalace = 500.00;
void resetuserDetails()
{ 
	name =     "*****";
     surname =  "*****";
     house = 00;
     street = "*****";
     area = "*****";
     city = "*****";
     postcode = "*****";
     startDate  = 00;
     startMonth = 00;
     startYear  = 00;
     endDate  = 00;
     endMonth = 00;
     endYear  = 00;
     tel = "00";
     userNumber = 00;
     userType   = "*****";
     hotel = "*****";
     hotelDate = 00;
     hotelMonth = 00;
     hotelYear = 00;
     hotelPrice = 00;
};
void bookingForm()
{
	system ("cls");
	bluetext();
	cout << "\t\t\t      Booking Details\n";
	whitetext();
	cout << "\t________________________________________________________________\n\n";
	cout << "\tBooking Form   \t";
	cout << "\t  user: ";
	if (name != "*****")
	{
		greentext();
	}
	cout << name << " ";             
	whitetext();    
	if (surname != "*****")
	{
		greentext();
	}
	cout << surname << "\n";
	whitetext();
	cout << "\n\t\t         user Type: ";
	if (userType != "*****")
	{
		greentext();
	}
	cout << "Member";
	whitetext();
	cout << "\n\t\t                hotel: ";
	if (hotel != "*****")
	{
		greentext();
	}
    	cout << hotelName;
    	whitetext();
     cout << "\n\t\t           hotel Date: ";
    	if (hotelDate != 00)
	{
		greentext();
	}
    	cout << hotelDate << "/" << hotelMonth << "/" << hotelYear;
	whitetext();
     cout << "\n\t\t          room no: ";
    	if (hotelPrice != 00.00)
	{
		greentext();
	}
    	cout << room;
    	whitetext();
    	cout << "\n\t________________________________________________________________\n\n";
    	cout << "\n";
};
void bookingScript()
{
	double discount;
	int hotelChoice;
	char confirmationSave;
    	if (userType == "Normal")
    	{
		discount = 0.50;
	}
    	if (userType == "Chair Resort")
	{
     	discount = 0.30;
    	}
    if (userType == "Air Conditioned")
    	{
     	discount = 0;
    	}
    	if (userType == "*****")
	{
     	discount = 1.0;
    	}
	bookingForm();
	cout << "Please select an Resort:\n\n";
	cout << "1 - oberoi International\n";
	cout << "2 - smartplaza Inn\n";
	cout << "3 - tajmotel Resort\n";
	cout << "4 - aerostar Inn\n";
	cout << "5 - Lemon Tree Restaurant\n";
	cout << "6 - lemeridian Restaurant\n";
	cout << "7 - redfox International\n";
	cout << "8 - Dev Palace\n>";
	cin >> hotelChoice;
	if (hotelChoice == 1)
	{
		hotelName="oberoi International"; hotelPrice = oberoi * discount;
	}
	if (hotelChoice == 2)
	{
		hotelName="smartplaza Inn"; hotelPrice = smartplaza * discount;
	}
	if (hotelChoice == 3)
	{
		hotelName= "tajmotel Resort"; hotelPrice = tajmotel * discount;
	}
	if (hotelChoice == 4)
	{
		hotelName ="aerostar Inn"; hotelPrice = aerostar * discount;
	}
	if (hotelChoice == 5)
	{
		hotelName = "Lemon Tree Restaurant"; hotelPrice = lemontree * discount;
	}
	if (hotelChoice == 6)
	{
		hotelName = "lemeridian Restaurant"; hotelPrice = lemeridian * discount;
	}
	if (hotelChoice == 7)
	{
		hotel = "redfox International"; hotelPrice = redfox * discount;
	}
	if (hotelChoice == 8)
	{
		hotelName = "Dev Palace"; hotelPrice = devpalace * discount;
	}
 	bookingForm();
	cout << "\tPlease enter Booking Date(DD): ";
	cin >> hotelDate;
	while (cin.fail() ||   hotelDate > 31 || hotelDate < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid date (1-31): ";
     	cin >> hotelDate;
    	}
    	bookingForm();
    	cout << "\tPlease enter Booking Month(MM): ";
    	cin >> hotelMonth;
    	while (cin.fail() || hotelMonth > 12 || hotelMonth < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid month (1-12): ";
     	cin >> hotelMonth;
	}
    	bookingForm();
    	cout << "\tPlease enter Booking Year(YY): ";
    	cin >> hotelYear;
    	while (cin.fail() || hotelYear > 99 || hotelYear < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid Year (1-99): ";
     	cin >> hotelYear;
	}
	bookingForm();
	cout<<"Enter your favourite room(W1/M1): ";
	cin>>room;
    	bookingForm();
    	cout << "Is this information correct? <Y/N>";
    	cin >> confirmationSave;
    	if (confirmationSave == 'y' || confirmationSave == 'Y')
	{
    	string saveBookingName;
    	stringstream out;
    	cout << name << " " << surname << ".booking";
    	saveBookingName = out.str(); 
    	ofstream myfile;       
    	myfile.open (saveBookingName.c_str(), ios::out);
    	myfile << name << "\n";
    	myfile << surname << "\n";
    	myfile << userType << "\n";
    	myfile << hotel << "\n";
    	myfile << hotelDate << "\n";
    	myfile << hotelMonth << "\n";
    	myfile << hotelYear << "\n";
    	myfile << room;
    	myfile.close();
    	bookingForm();
    	greentext();
    	cout << "\tBooking have been saved\n\n\t";
    	whitetext();
    	};
    	system ("pause");
};
void userForm()
{ 
	system ("cls");
	bluetext();
	cout << "\t\t\t      user Details\n";
	whitetext();
	cout << "\t	________________________________________________________________\n\n";
	cout << "\tuser Form  ";
	cout << "\t  user: ";
	if (name != "*****")
	{
		greentext();
	} 
	cout << name << " ";              
	whitetext();    
	if (surname != "*****")
	{
		greentext();
	}
	cout << surname << "\n";
	whitetext();
	cout << "\t\t\t";
	cout << "\t Address: ";
	if (house != 00)
	{
		greentext();
	}
	cout << house << " ";
	whitetext();
	if (street != "*****")
	{
		greentext();
	}
	cout << street << "\n";
	whitetext();
	cout << "\t\t";
	cout << "\t\t          ";
	if (area != "*****")
	{
		greentext();
	}
	cout << area << "\n";
	whitetext();
	cout << "\t\t\t\t          ";
	if (city != "*****")
	{
		greentext();
	}
	cout << city << "\n";
	whitetext();
	cout << "\t\t\t\t          ";
	if (postcode != "*****")
	{
		greentext();
	}
	cout << postcode << "\n";
	whitetext();
	cout << "\t\t\t   Telephone: ";
	if (tel != "00")
	{
		greentext();
	}
	cout << tel;
	whitetext();
     cout << "\t\t\t      Start date: ";
	if (startDate != 00)
	{
		greentext();
	}
	cout << startDate << "/";
    	whitetext();
	if (startMonth != 00)
	{
		greentext();
	}	
	cout << startMonth << "/";
	whitetext();
	if (startYear != 00)
	{
		greentext();
	}
	cout << startYear;
	whitetext();
	cout << "\tEnd date: ";
	whitetext();
	if (endDate != 00)
	{
		greentext();
	}
	cout << endDate << "/";
	whitetext();
	if (endMonth != 00)
	{
		greentext();
	}
	cout << endMonth << "/";
	whitetext();
	if (endYear != 00)
	{
		greentext();
	}
	cout << endYear << "\n";
	whitetext();
	cout << "\t________________________________________________________________\n\n";
	cout << "\t\t       user number: ";
	if (userNumber != 00)
	{
		greentext();
	}
	cout << userNumber;
	whitetext();
	cout << "\n\t\t         user Type: ";
	if (userType != "*****")
	{
		greentext();
	}
	cout << userType;
	whitetext();
	cout << "\n\t________________________________________________________________\n\n";
	cout << "\n";
};
void savefile()
{
    string saveFileName;
    stringstream out;
    out << name << " " << surname;
    saveFileName = out.str();
    ofstream myfile;              
    myfile.open (saveFileName.c_str(), ios::out);
    myfile << name << "\n";
    myfile << surname << "\n";
    myfile << house << "\n";
    myfile << street << "\n";
    myfile << area << "\n";
    myfile << city << "\n";
    myfile << postcode << "\n";
    myfile << tel << "\n";
    myfile << startDate << "\n";
    myfile << startMonth << "\n";
    myfile << startYear << "\n";
    myfile << endDate << "\n";
    myfile << endMonth << "\n";
    myfile << endYear << "\n";
    myfile << userNumber << "\n";
    myfile << userType << "\n";
    myfile.close();
    userForm();
    greentext();
    cout << "\tDetails have been saved\n\n\t";
    whitetext();
    system ("pause");
    }
 
void userDetails()
{
 
	char saveYN;
 	userForm();
	cout << "\tPlease enter customers first name: ";
	cin >> ws;
	getline (cin, name);
	userForm();
	cout << "\tPlease enter customers surname: ";
	cin >> surname;
	userForm();
	cout << "\tPlease enter customers house number: ";
	cin >> house;
     while (cin.fail()||  house < 1)
	{
		cin.clear(); 
		cin.ignore();
		cout << "\n\tPlease enter a valid house number: "; 
		cin >> house;
	}
	userForm();
	cout << "\tPlease enter customers street: ";
	cin >> ws;                   
	getline (cin, street); 
	userForm();
	cout << "\tPlease enter customer area: ";
	getline (cin, area);
	userForm();
	cout << "\tPlease enter customer city: ";
	getline (cin, city);
	userForm();
	cout << "\tPlease enter customer postcode: ";
	cin >> ws;
	getline (cin, postcode);
	userForm();
	cout << "\tPlease enter Telephone Number: ";
	getline (cin, tel);
	while (cin.fail())
	{
     	cin.clear();
     	cin.ignore();
     	cout << "\tPlease enter Telephone Number: ";
     	cin >> tel;
	}
	userForm();
	cout << "\tPlease enter user Start Date(DD): ";
	cin >> startDate;
	while (cin.fail() || startDate > 31 || startDate < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid date (1-31): ";
     	cin >> startDate;
	}
	userForm();
	cout << "\tPlease enter user Start Month(MM): ";
	cin >> startMonth;
	while (cin.fail() || startMonth > 12 || startMonth < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid month (1-12): ";
     	cin >> startMonth;
	}
	userForm();
	cout << "\tPlease enter user Start Year(YY): ";
	cin >> startYear;
	while (cin.fail() || startYear > 99 || startYear < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid Year (1-99): ";
     	cin >> startYear;
	}
	userForm();
	cout << "\tPlease enter user End Date(DD): ";
	cin >> endDate;
	while (cin.fail() || endDate > 31 || endDate < 1){
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid date (1-31): ";
     	cin >> endDate;
	}
	userForm();
	cout << "\tPlease enter user End Month(MM): ";
	cin >> endMonth;
	while (cin.fail() || endMonth > 12 || endMonth < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid month (1-12): ";
     	cin >> endMonth;
	}
	userForm();
	cout << "\tPlease enter user End Year(YY): ";
	cin >> endYear;
	while (cin.fail() || endYear > 99 || endYear < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid year (1-99): ";
     	cin >> endYear;
	}
	userForm();
	cout << "\tEnter 6 Digit user card number: ";
	cin >> userNumber;
	while (cin.fail() || userNumber < 100000 || userNumber > 999999)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid user card number (6 Digits): ";
     	cin >> userNumber;
	}
	userForm();
	cout << "\tPlease enter user type:\n\t1 - Normal\n\t2 - Chair Resort\n\t3 - Air Conditioned\n\t> : ";
	cin >> userSelection;
	while (cin.fail() || userSelection < 1 || userSelection >3)
	{
     	cin.clear();
     	cin.ignore();            
     	cout << "\n\tPlease enter a valid user type.\n\t1 - Normal - 10.00 Per month\n\t2 - Chair Resort - 15.00 Per month\n\t3 - Air Conditioned  - 20.00 Per month\n\t> : ";
     	cin >> userSelection;
	}
	switch (userSelection)
	{
		case 1 :
			userType = "Normal";
     		break;
		case 2 :
     		userType = "Chair Resort";
     		break;
		case 3 :
     		userType = "Air Conditioned";
     		break;
	};
	userForm();
	cout << "\tSave these details to a file? <Y/N> ";
	cin >> saveYN;
	if (saveYN == 'y' || saveYN == 'Y')
	{
     	savefile();
	}
};
void createBooking()
{
 
    char confirm;
    system ("cls");
    char filebooking [100];
    ifstream file_ptr;
    cout << "\n\t\t\t\tCreate a Booking\n\n";
    system ("dir/b *.");
    cout << "\n\n\tPlease type the name of the user OR ";
    cout << "type x to return to main menu: ";
    cin.ignore();
    gets (filebooking);
    if (filebooking[0]  != 'x')
    {
 		file_ptr.open(filebooking,ios::in);
    		while(!file_ptr)
        	{
        		cout << "user does not exist\n";
        		gets (filebooking);
        		file_ptr.open(filebooking,ios::in);
        	}
        	getline(file_ptr, name);
        	getline(file_ptr, surname);
        	file_ptr >> house;
        	getline(file_ptr, street);
        	getline(file_ptr, street);
        	getline(file_ptr, area);
        	getline(file_ptr, city);
        	getline(file_ptr, postcode);
        	getline(file_ptr, tel);
        	file_ptr >> startDate>>startMonth>>startYear>>endDate>>endMonth>>endYear>>userNumber;
     	getline(file_ptr, userType); 
     	getline(file_ptr, userType);
		userForm();
     	greentext();
     	whitetext();
     	file_ptr.close();
		cout << "\n\tCreate booking for this user? <Y/N>";
    		cin >> confirm;
    		if (confirm == 'y' || confirm == 'Y')
		{
 			bookingScript();
        	}
    	};
};
 
void openFile()
{

	char confirm;
	system ("cls");
	char filebooking [100];
	ifstream file_ptr;
	cout << "\n\t\t\t\tCreate a Booking\n\n";
	system ("dir/b *.");
	cout << "\n\n\tPlease type the name of the user OR ";
	cout << "type x to return to main menu: ";
	cin.ignore();
	gets (filebooking);
    if (filebooking[0]  != 'x')
    {
 		file_ptr.open(filebooking,ios::in);
    		while(!file_ptr)
        	{
        		cout << "user does not exist\n";
        		gets (filebooking);
        		file_ptr.open(filebooking,ios::in);
        	}
     	getline(file_ptr, name);
     	getline(file_ptr, surname);
     	getline(file_ptr, userType);
     	getline(file_ptr, hotel);
     	file_ptr >> hotelDate;
     	file_ptr >> hotelMonth;
     	file_ptr >> hotelYear;
     	file_ptr >> room;
     	bookingForm();
     	greentext();
     	whitetext(); 
     	file_ptr.close();
     	system ("pause");
	}
}
void priceList()
{
	system ("cls");
	yellowtext();
	cout << "\t\tPrice List\n\n";
	cout << "\t\t\t\tBusess\n\t";
	cout << "\t\t\tNone user  |  Normal  |  Chair Resort  |  Air Condition";
	cout << "\n\n\toberoi International.......   \x9c" << oberoi << "\t          " << oberoi * 0.9 << "\t      " << oberoi * 0.85 << "   \t\t" << oberoi * 0.6;
	cout << "\n\n\tAK Inn.............   \x9c" << smartplaza << "\t          " << smartplaza * 0.9 << "\t      " << smartplaza * 0.85 << "\t        " << smartplaza * 0.6;
	cout << "\n\n\ttajmotel Resort............   \x9c" << tajmotel << "\t          " << tajmotel * 0.9 << "\t      " << tajmotel * 0.85 << "\t        " << tajmotel * 0.6;
	cout << "\n\n\taerostar Inn...........   \x9c" << aerostar << "\t          " << aerostar  * 0.9 << "\t      " << aerostar * 0.85 << "\t        " << aerostar * 0.6;
	cout << "\n\n\tLemontree Restaurant..........   \x9c" << lemontree << "\t          " << lemontree * 0.9 << "\t      " << lemontree * 0.85  << "\t        " << lemontree * 0.6;
	cout << "\n\n\tlemeridian Restaurant.......   \x9c" << lemeridian << "\t          " << lemeridian * 0.9 << "\t      " << lemeridian * 0.85 << "   \t\t" << lemeridian * 0.6;
	cout << "\n\n\tredfox International.........   \x9c" << redfox << "\t          " << redfox * 0.9 << "\t      " << redfox * 0.85 << "\t        " << redfox * 0.6;
	cout << "\n\n\tDev Palace.........   \x9c" << devpalace << "\t          " << devpalace * 0.9 << "\t      " << devpalace * 0.85 << "\t\t" << devpalace * 0.6;
	cout << "\n\n\n\t";
	whitetext();
system ("pause");
};
void exit()
{
	MenuLoop = false; 
}; 
void mainMenu()
{
	int menuchoice;
	system ("cls");
	
	
	cout << "\n\n\n\t\t\t\t*************************\n";
	cout <<       "\t\t\t\t*******Make My Trip******\n";
	cout <<       "\t\t\t\t******************-Sadman\n";
	cout <<       "\n\n\t\t\t\n";
	cout << "\t\t\t\t1 - Register user\n\n";
	cout << "\t\t\t\t2 - Create a new booking\n\n";
	cout << "\t\t\t\t3 - Show Bookings\n\n";
	cout << "\t\t\t\t4 - View price list\n\n";
	cout << "\t\t\t\t5 - Exit\n\n\n";
	cout << "\tPlease choose an option: ";
	cin >> menuchoice;
	while (cin.fail())
	{	cin.clear();
     	cin.ignore();
     	cout << "\n\t\tPlease enter a valid number:"; 
		cin >> menuchoice;
	};
	switch (menuchoice)
	{
     	case 1:
          	userDetails();
          	break;
     	case 2:
          	createBooking();
          	break;
     	case 3:
          	openFile();
          	break;
        case 4 :
            priceList();
            break;
		case 5:
          	exit();
         	break;
     	default:
     	cout << "\n\tPlease enter a correct menu choice\n\n\t";
     	system ("pause");
	};
};
void password(){
 
    string pass;
    int passCount = 0;
 
    cout << "\n\n\n\t\t\t\t******************\n";
    cout <<       "\t\t\t\t**Enter Password**\n";
    cout <<       "\t\t\t\t******************\n";
    cout <<       "\n\n\t\t\t\t>";
    cin  >> pass;           
 
    while (pass != "password")
    {
        passCount ++;
        redtext();
        cout << "\t\t\t\tPassword Incorrect!\n";
        if (passCount >= 3)             
        {
                redtext();
                cout << "\n\t\t\t\tLOGIN FAILED!";
                whitetext();
                exit(0);
        };
 
        whitetext();
        cout << "\t\t\t\tTry Again:\n\t\t\t\t>";
        cin >> pass;
 
        };
    greentext();
    cout << "\n\t\t\t\tPassword Accepted!\n\t\t\t\tPress any key to continue...";
    whitetext();
    cin.ignore();
    cin.get();
};
int main()
{
	password();                                
	while (MenuLoop == true)
	{
		mainMenu();
	}     
	return 0;
}

