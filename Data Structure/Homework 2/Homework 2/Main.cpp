// Student ID: B10615043
// Date: Nov. 2, 2018
// Last Update: Nov. 12, 2018
// Problem statement: This C++ program is for Homework2.
#include <iostream>
#include "Client.h"

using namespace std;

int main()
{
	cout << "How many Clients? (integer):";
	int numClient;
	while (cin >> numClient)
	{
		cout << endl;
		vector<Client> list;
		for (int i = 0; i < numClient; i++)
		{
			int arrival, service, waiting;
			cout << "Client " << i + 1 << endl;
			cout << "\tArrival time:";
			cin >> arrival;
			cout << "\tService time:";
			cin >> service;
			cout << "\tAllowable waiting time:";
			cin >> waiting;
			cout << endl;
			list.push_back(Client(arrival, service, waiting));
		}
		int time = 0;
		vector<int> queue;
		int checkClient = numClient;
		while (checkClient)
		{
			// check who ready add it to queue
			for (int i = 0; i < numClient; i++)
			{
				if (list[i].getArrival() == time)
				{
					// check Clinet can wait or not
					// check queue empty
					if (queue.empty())
					{
						queue.push_back(i);
					}
					else
					{
						// check newClient can wait
						int nowWaiting = 0;
						for (int j= 0; j < queue.size(); j++)
						{
							nowWaiting += list[queue[j]].getService();
						}
						if (nowWaiting <= list[i].getWaiting())
						{
							queue.push_back(i);
						}
						// check lastClient can allows the newClient to do it. 
						else
						{
							int newWaiting = 0;
							for (int j = 0; j < queue.size() - 1; j++)
							{
								newWaiting += list[queue[j]].getService();
							}
							int lastwaiting = newWaiting + list[i].getService();
							if (queue.size() >= 2 && list[i].getWaiting() >= newWaiting && list[queue[queue.size() - 1]].getWaiting() >= lastwaiting)
							{
								queue.insert(queue.end() - 1, i);
							}
							else
							{
								list[i].setServe(false);
								checkClient--;
							}
						}
					}
				}
			}

			// start to service
			for (int i = 0; i < queue.size(); i++)
			{
				if (!i)
				{
					list[queue[i]].countdownService();
				}
				else
				{
					list[queue[i]].countdownWaiting();
				}
			}
			if (queue.size()>0 && !list[queue[0]].getService())
			{
				list[queue[0]].setServe(true);
				list[queue[0]].setDeparture(time + 1);
				queue.erase(queue.begin());
				checkClient--;
			}
			time++;
		}

		// output the result
		cout << "====================Result====================" << endl;
		cout << "\t\tServed or not?\tDeparture time" << endl;
		for (int i = 0; i < numClient; i++)
		{
			cout << "Client " << i + 1 << ":\t";
			if (list[i].getServe())
			{
				cout << "Yes\t\t" << list[i].getDeparture() << endl;
			}
			else
			{
				cout << "No\t" << endl;
			}
		}
		cout << endl << "How many Clients? (integer):";
	}
	return 0;
}
