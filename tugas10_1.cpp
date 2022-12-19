 #include <stdio.h>
#include <conio.h>

void input(int t,int b){

   if ((t>=21&&t<=31 && b==12) || (t>=1&&t<=20 && b==1)){
      printf("\n Bintang Anda Capricorn");
   }
   else if ((t>=21&&t<=31 && b==1) || (t>=1&&t<=20 && b==2)){
      printf("\nBintang Anda Aquarius");
   }
   else if((t>=21&&t<=28 && b==2) || (t>=1&&t<=20 && b==3)){
      printf("\nBintang Anda Pisces");
   }
   else if ((t>=21&&t<=31 && b==3) || (t>=1&&t<=20 && b==4)){
      printf("\nBintang Anda Aries");
   }
   else if((t>=21&&t<=30 && b==4) || (t>=1&&t<=20 && b==5)){
      printf("\nBintang Anda Taurus");
   }
   else if ((t>=21&&t<=31 && b==5) || (t>=1&&t<=20 && b==6)){
      printf("\nBintang Anda Gemini");
   }
   else if((t>=21&&t<=30 && b==6) || (t>=1&&t<=20 && b==7)){
        printf("\nBintang Anda Cancer");
   }
   else if((t>=21&&t<=31 && b==7) || (t>=1&&t<=20 && b==8)){
      printf("\nBintang Anda Leo");
   }
   else if((t>=21&&t<=31 && b==8) || (t>=1&&t<=20 && b==9)){
      printf("\nBintang Anda Virgo");
   }
   else if((t>=21&&t<=30 && b==9) || (t>=1&&t<=20 && b==10)){
      printf("\nBintang Anda Libra");
   }
   else if((t>=21&&t<=31 && b==10) || (t>=1&&t<=20 && b==11)){
      printf("\nBintang Anda Scorpio");
   }
   else if((t>=21&&t<=30 && b==11) || (t>=1&&t<=20 && b==12)){
      printf("\nBintang Anda Sagitarius");
   }

}

main(){

   int t, b;
   printf("\t\t--PROGRAM ZODIAK--\n");
   printf("\t\t==================");
   printf("\n Tanggal Lahir : "); scanf("%d",&t);
   printf("\n Bulan Lahir : "); scanf("%d",&b);
   input(t,b);
  getch();
}
