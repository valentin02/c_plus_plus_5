#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h> 
using namespace std;

struct Flight
{
	string model;
	string number;
	string destination;
	int capacity;
	int unit_cost;
	int total_value;
};

void input(int size, Flight* flight)
{
	for (int i = 0; i < size; i++)
	{
		cout << endl << endl << "\tFlight #" << i + 1 << endl;
		cout << "Enter car model: ";
		getline(cin, flight[i].model);
		//cin.get();

		cout << "Enter car number: ";
		getline(cin, flight[i].number);
		//cin.get();

		cout << "Enter destination: ";
		getline(cin,flight[i].destination);
		//cin.get();

		cout << "Enter load capacity (tons): ";
		cin >> flight[i].capacity;
		//cin.get();

		cout << "Enter the unit cost of cargo: ";
		cin >> flight[i].unit_cost;
		//cin.get();

		cout << "Enter total value of cargo: ";
		cin >> flight[i].total_value;
		cin.get();

		cout << "\n________________________________________________________\n";
	}
}

void output(int size, Flight* flight)
{
	ofstream out;         
		out.open("C:\\Users\\intel\\source\\repos\\c_plus_plus_5"); 
		if (out.is_open())
		{
			for (int i = 0; i < size; i++)
			{
			out << endl << endl << "\tFlight #" << i + 1;
			out << endl << "Model: ";
			out << flight[i].model;

			out << endl << "Number: ";
			out << flight[i].number;

			out << endl << "Destination: ";
			out << flight[i].destination;

			out << endl << "Load capacity (tons): ";
			out << flight[i].capacity;

			out << endl << "Unit cost of cargo: ";
			out << flight[i].unit_cost;

			out << endl << "Total value of cargo: ";
			out << flight[i].total_value << "\n________________________________________________________\n";
			}
		}
		out.close();
}

void print(int size, Flight* flight)
{
	for (int i = 0; i < size; i++)
	{
		cout << endl << endl << "\tFlight #" << i + 1;

		cout << endl << "Model: ";
		cout << flight[i].model;

		cout << endl << "Number: ";
		cout << flight[i].number;

		cout << endl << "Destination: ";
		cout << flight[i].destination;

		cout << endl << "Load capacity (tons): ";
		cout << flight[i].capacity;

		cout << endl << "Unit cost of cargo: ";
		cout << flight[i].unit_cost;

		cout << endl << "Total value of cargo: ";
		cout << flight[i].total_value << "\n________________________________________________________\n";
	}
}

void read(int size, Flight*flight)
{
	ifstream file2("D:\\hello.txt");
	string temp;

	for (char i = 0; i < size; i++)
	{
		getline(file2, temp);
		getline(file2, flight[i].model);
		getline(file2, flight[i].number);
		getline(file2, flight[i].destination);
		file2 >> flight[i].capacity;
		file2 >> flight[i].unit_cost;;
		file2 >> flight[i].total_value;
		getline(file2, temp);
	}
	file2.close();
}

void find(int size, Flight*flight)
{
	for (int i=0; i<size; i++)
		if (flight[i].capacity >= 2)
		{
			cout << endl << endl << "\tFlight #" << i + 1;

			cout << endl << "Model: ";
			cout << flight[i].model;

			cout << endl << "Number: ";
			cout << flight[i].number;

			cout << endl << "Destination: ";
			cout << flight[i].destination;

			cout << endl << "Load capacity (tons): ";
			cout << flight[i].capacity;

			cout << endl << "Unit cost of cargo: ";
			cout << flight[i].unit_cost;

			cout << endl << "Total value of cargo: ";
			cout << flight[i].total_value << "\n________________________________________________________\n";
		}
}

int main()
{
	int const size = 10;
	Flight* flight = new Flight[size];
	//input(size, flight);
	read(size, flight);
	print(size, flight);
	cout << "\n\n\t\tFind";
	find(size, flight);
}
