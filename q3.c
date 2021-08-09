#include<stdio.h>

struct gps_diff{
	double latt_dif;
	double long_dif;
}; 

struct gps_point{
	double lattitude;
	double longitude;
} ;

void gpsSubstract(struct gps_point p1, struct gps_point p2, struct gps_diff diff1){
	diff1.latt_dif = p1.lattitude - p2.lattitude;
	diff1.long_dif = p1.longitude - p2.longitude;

	printf("\n Latitude Difference:%f ",diff1.latt_dif);
	printf("\n Longitude Difference:%f ",diff1.long_dif);
}


int main(){

	struct gps_point p1, p2;
	struct gps_diff diff1;

	printf("Enter Latitude of Location 0: \n");
	scanf("%lf", &p1.lattitude);
	printf("Enter Longitude of Location 0: \n");
	scanf("%lf", &p1.longitude);

	printf("Enter Latitude of Location 1: \n");
	scanf("%lf", &p2.lattitude);
	printf("Enter Longitude of Location 1: \n");
	scanf("%lf", &p2.longitude);

	gpsSubstract(p1, p2, diff1);

	return 0;

}




