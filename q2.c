#include <stdio.h>
#include <string.h>
#define MAX_CHARS_NAME 100

struct gps_point{
	double latitude;
	char latitude_pole[10];
	double longitude;
	char longitude_hemisphere[10];
	char location_name[MAX_CHARS_NAME];
};


int main (){
	struct gps_point gps[8];
	int i;

	for(i=0; i<2; i++){
		printf("Enter Location :\n");
		scanf("%s",gps[i].location_name);
		printf("Enter Latitude pole:\n");
		scanf("%s",gps[i].latitude_pole);
		printf("Enter Latitude:\n");
		scanf("%lf",&(gps[i].latitude));
		printf("Enter Longitude Hemisphere:\n");
		scanf("%s",gps[i].longitude_hemisphere);
		printf("Enter Longitude:\n");
		scanf("%lf",&(gps[i].longitude));
	
	}

	for(i = 0; i<2; i++){
		printf("%s is situated at (Latitude: %s %f, Longitude: %s %f).\n",gps[i].location_name,gps[i].latitude_pole,gps[i].longitude_hemisphere,gps[i].latitude,gps[i].longitude);
	}



	return 0;


}

