#include <iostream>
using namespace std;

int main() 
{
    float RoadSurface, nLanes, visibility;

    cout<< "Enter the value for number of lanes : ";
    cin >> nLanes;
    cout << "Entre the value for Road surface : ";
    cin >> RoadSurface;
    cout << "Enter value for visibility : ";
    cin >> visibility;
    cout << "\n\n\n";

    float muRoad[3] = { 0 }, muLanes[3] = { 0 }, muVisibility[3] = { 0 };

    if (nLanes <= 1)
    {
        muLanes[0] = 1;
    }
    else if (nLanes <= 2.5) {
        muLanes[0] = (2.5 - nLanes)/ 1.5;
    }
    if (nLanes <= 3) {
        muLanes[1] = (nLanes - 1) / 2;
    }
    else if (nLanes >= 3 && nLanes <= 5) {
        muLanes[1] = (5 - nLanes) / 2;
    }
    if (nLanes >= 3 && nLanes <= 5) {
        muLanes[2] = (nLanes - 3) / 2;
    }
    else if (nLanes > 5) {
        muLanes[2] = 1;
    }
    if (RoadSurface <= 0.5) {
        muRoad[0] = 1;
    }
    else if (RoadSurface <= 1) {
        muRoad[0] = 2 * (1 - RoadSurface);
    }
    if (RoadSurface <= 0.5) {
        muRoad[1] = 2 * (0.5 - RoadSurface);
    }
    else if (RoadSurface <= 1) {
        muRoad[1] = 2 * (1 - RoadSurface);
    }
    if (RoadSurface <= 0.5) {
        muRoad[2] = 2 * RoadSurface;
    }
    else if (RoadSurface > 0.5) {
        muRoad[2] = 1;
    }
    if (visibility <= 0.5) {
        muVisibility[0] = 1;
    }
    else if (visibility <= 1) {
        muVisibility[0] = 2 * (1 - RoadSurface);
    }
    if (visibility <= 0.5) {
        muVisibility[1] = 2 * (0.5 - visibility);
    }
    else if (visibility <= 1) {
        muVisibility[1] = 2 * (1 - visibility);
    }
    if (visibility <= 0.5) {
        muVisibility[2] = 2 * visibility;
    }
    else if (visibility > 0.5) {
        muVisibility[2] = 1;
    }

    cout << "Lanes : " << endl; 
    cout << "MUmin\tMUavg\tMUmax" << endl;
    cout << muLanes[0] << "\t" << muLanes[1] << "\t" << muLanes[2] << endl;
    cout << "\n\n";
    cout << "Road Surface : " << endl; 
    cout << "MUmin\tMUavg\tMUmax" << endl;
    cout << muRoad[0] << "\t" << muRoad[1] << "\t" << muRoad[2] << endl;
    cout << "\n\n";
    cout << "Visibility : " << endl;
    cout << "MUmin\tMUavg\tMUmax" << endl;
    cout << muVisibility[0] << "\t" << muVisibility[1] << "\t" << muVisibility[2] << endl;
    return 0;
}