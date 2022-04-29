#include<stdio.h>
// Program Name: Program give Basic information About Top Cars a User
// Date /11/04/2022/
int TopCars(int ino2 )
{
     int iCnt = 0;

          if(ino2 == 407)
          {
              printf("BMW car price starts at Rs 39.84 Lakh for the cheapest model which is X1 and the price of most expensive model, which is M8 starts at Rs 2.17 Crore. BMW offers 20 car models in India, including 8 cars in SUV category, 6 cars in Sedan category, 1 car in Convertible category, 5 cars in Coupe category. More Info Visit Link>> https://www.carwale.com/bmw-cars/  \n");

          }
          else if(ino2 == 409)
          {
              printf(" Audi car price starts from Rs. 34.99 Lakh for Q2 to Rs. 2.19 Crore for RS7. Audi offers a total of fifteen products which are Petrol and Electric powered cars. Audi Q7 is a popular SUV car in India , Audi A6 is one of the top Sedan cars in India Audi RS7 is one of the top Luxury cars in India More Info Visit Link>> https://www.zigwheels.com/newcars/Audi \n");
          }
          else if(ino2 == 411)
          {
             printf(" Land Rover car price starts at Rs 65.23 Lakh for the cheapest model which is Discovery Sport and the price of most expensive model, which is Range Rover starts at Rs 2.11 Crore. Land Rover offers 7 car models in India, including 7 cars in SUV category. Land Rover has 1 upcoming car in More Info visit Link https://www.carwale.com/land-rover-cars/ \n");
          }
          else if(ino2 == 777)
          {
              printf(" There are a total of 27 Mercedes-Benz models currently on sale in India. These include 8 Sedans, 11 SUVs, 1 MUV, 1 Hatchback, 5 Coupes and 1 Luxury. Mercedes-Benz has 4 upcoming car launches in India - the EQA, C-Class 2022, GLB, EQS.\n");
          }
          else if(ino2 == 1218)
          {
               printf(" Ferrari car price starts at Rs 3.50 Crore for the cheapest model which is Portofino and the price of most expensive model, which is 812 starts at Rs 5.20 Crore. Ferrari offers 4 car models in India, including 1 car in Convertible category, 3 cars in Coupe category. Ferrari has 2 upcoming cars in India,\n");
          }
          else if(ino2 == 799)
          {
            printf(" Mahindra car price starts from Rs. 6.15 Lakh for KUV100 NXT to Rs. 31.84 Lakh for Alturas G4. Mahindra offers a total of fourteen products which are Petrol , Diesel , Electric and CNG powered cars. Mahindra Thar is a popular SUV car in India and Mahindra E Verito is one of the top\n");
          }
          else if(ino2 == 888)
          {
              printf(" The price of Toyota Fortuner starts at Rs. 31.79 Lakh and goes upto Rs. 44.63 Lakh. Toyota Fortuner is offered in 8 variants - the base model of Fortuner is 4X2\n");
          }
          else
          {
              printf(" We Can Type Wrong Info Number\n");
          }
          
          }
      


int main()
{
    int  ino1 = 0;

    printf(" Enter Number for  Cars info >> 407 [BMW] >> 409 [Audi]  >> 411 [Rang Rover] >> 777 [Mercedes-Benz] >> 1218 [Ferrari]>> 799 [Mahindra] >> 888 [ Fortuner] \n");
    scanf("%d",&ino1);

    
     TopCars(ino1);


   return 0;

}
