#include <stdio.h>
#include <string.h>
#define MAX_CHARS_NAME 100

struct gps_point{
	double latitude;
	enum L_P{NORTH, SOUTH} latitude_pole;
	double longitude;
	enum L_H{EAST, WEST} longitude_hemisphere;
	char location_name[MAX_CHARS_NAME];
};

const char* convertLP(enum L_P lp){
	switch(lp){
		case NORTH:
		       	return "North";
			break;
		case SOUTH:
		       	return "South";
			break;
	}
}	
const char* convertLH(enum L_H lh){
	switch(lh){
		case EAST:
		       	return "East";
			break;
		case WEST:
		       	return "West";
			break;
	}
}	

int main (){
	struct gps_point ucsc, uom;

	ucsc.latitude = 6.902;
	ucsc.latitude_pole = NORTH;
	ucsc.longitude = 79.8585;
	ucsc.longitude_hemisphere = EAST;
	strcpy(ucsc.location_name,"University of Colombo School of Computing");

	uom.latitude = 6.7968;
	uom.latitude_pole = NORTH;
	uom.longitude = 79.8957;
	uom.longitude_hemisphere = EAST;
	strcpy(uom.location_name,"University of Moratuwa");

	printf("%s is situated at (Latitude: %s %f, Longitude: %s %f).\n",ucsc.location_name,convertLP(ucsc.latitude_pole),ucsc.latitude,convertLH(ucsc.longitude_hemisphere),ucsc.longitude);
	printf("%s is situated at (Latitude: %s %f, Longitude: %s %f).\n",uom.location_name,convertLP(uom.latitude_pole),uom.latitude,convertLH(uom.longitude_hemisphere),uom.longitude);


	return 0;


}


