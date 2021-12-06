#include<stdio.h>

/**This program predicts the freezing temperature of a water sample with a measured salinity level based on previously collected data***/
int main()
{
	//------Declaring varibles
	double salinityVal0 = 10.00;	//adjacent salinity values
	double salinityVal1 = 20.00;

	double temp0 = 21.1854;			//corresponding freezing temps for salinity values
	double temp1 = 4.4924;

	double salinitySample = 7.734;	//known salinity of water sample


	//Calculating the predicted freezing temp with given salinity
	double tempPrediction = temp0 + ((temp1 - temp0)*((salinitySample - salinityVal0)/(salinityVal1 - salinityVal0)));	//predicted freezing temperature

	printf("The predicted freezing temperature of water with salinity \nof %f  precent is %f degrees Fahrenheit.\n\n\n", salinitySample, tempPrediction );

	printf("The predicted freezing temperature of water with salinity \nof %0.2f  precent is %0.4f degrees Fahrenheit.\n\n\n", salinitySample, tempPrediction);

	//Converting predicted temp to celsius
	double tempCelsius = (((tempPrediction - 32) * 5) / 9);
	//Converting given salinity to ppt
	double salinityPPT = salinitySample * 10;

	printf("The predicted freezing temperature of water with salinity \nof %0.2f  ppt is %0.4f degrees Celsius.\n\n\n", salinityPPT, tempCelsius);


	return 0;
}