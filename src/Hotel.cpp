#include "../headers/Hotel.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Setters
void Hotel::setName(string &Name)
{
    this->name = Name;
}

void Hotel::setLocation(string &Location)
{
    this->location = Location;
}

void Hotel::setType(string &Type)
{
    this->type = Type;
}

void Hotel::setDescription(string &Description)
{
    this->description = Description;
}

void Hotel::setAmenities(vector<string> &Amenities)
{
    this->amenities = Amenities;
}

void Hotel::setPricing(double Pricing)
{
    this->pricing = Pricing;
}

// Getters
string Hotel::getName()
{
    return name;
}

string Hotel::getLocation()
{
    return location;
}

string Hotel::getType()
{
    return type;
}

string Hotel::getDescription()
{
    return description;
}

vector<string> Hotel::getAmenities()
{
    return amenities;
}

double Hotel::getPricing() const
{
    return pricing;
}

// Methods
void Hotel::showDetails()
{
    cout << "Name: " << name << "\n";
    cout << "Location: " << location << "\n";
    cout << "Type: " << type << "\n";
    cout << "Description: " << description << "\n";
    cout << "Amenities:\n";
    for (string &amenity : amenities)
    {
        cout << amenity << " ,";
    }
}

void Hotel::showPricing() const
{
    cout << "Pricing: " << pricing << "\n";
}

void Hotel::showAmenities()
{
    cout << "Amenities: "
         << "\n";
    for (string &amenity : amenities)
    {
        cout << amenity << " ,";
    }
}

void Hotel::addAmenity(string &amenity)
{
    amenities.push_back(amenity);
}
