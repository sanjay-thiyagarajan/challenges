#include <stdio.h>

int main() {
     
     int first_rate=0,second_rate=0,inhrs,inmin,outhrs,outmin,total,time;
     char veh_type;
     char type_final[10];
     
     printf ("Type of vehicle ?");
     scanf("%c",&veh_type);
     printf ("Hour vehicle entered lot(0-24)?");
     scanf ("%d",&inhrs);
     printf ("Minute vehicle entered lot(0-60)?");
     scanf ("%d",&inmin);
     printf ("Hour vehicle left lot(0-24)?");
     scanf ("%d",&outhrs);
     printf ("Minute vehicle left lot(0-60)?");
     scanf ("%d",&outmin);

     
     if(!((inhrs >= 0 && inhrs <24)||(inmin >=0 && inmin < 60)||(outhrs >=0 && outhrs < 24)&&(outmin >=0&&outmin<60)))
     {
         printf ("Invalid Input..Terminating");
     }
     else
     {
        time = outhrs - inhrs ;
        if((outmin -inmin)>=30)
         time++;
     
         
         switch (veh_type )
         {
             case 'C':    
             type_final = "Car";
            if(time <= 3 )
            {
                first_rate =     (outhrs-inhrs)*10;
                total += first_rate ;
            }
            if(time > 3 )
            {
                second_rate =     (outhrs-inhrs)*5;
                total += second_rate ;
            }
            break ;
            
             case 'T':
             type_final = "Truck";
            if(time <= 2 )
            {
                first_rate =     (outhrs-inhrs)*20;
                total += first_rate ;
            }
            if(time > 2 )
            {
                second_rate =     (outhrs-inhrs)*10;
                total += second_rate ;
            }
            break ;
            
            case 'B':
            type_final = "Bus";
             if(time <= 1 )
            {
                first_rate =     (outhrs-inhrs)*30;
                total += first_rate ;
            }
            if(time > 1)
            {
                second_rate =     (outhrs-inhrs)*15;
                total += second_rate ;
            }
            break ;     
        default : printf ("Vehicle Type is not recognized..!");
        break;    
      }
     printf ("\t\t PARKING LOT CHARGES");
     printf ("\nType of vehicle: %s",type_final );
     printf ("\nTIME-IN\t %d : %d",inhrs ,inmin);
     printf ("\nTIME-OUT\t %d : %d",outhrs ,outmin);
     printf ("\n\t------------");
     printf ("\nPARKING TIME\t %d : %d",(outhrs -inhrs),(outmin -inmin));
     printf ("\nROUNDED TOTAL\t %d",time);
     printf ("\n\t------------");
     printf ("\nTOTAL CHARGES\t %d",total);
     
     
     }


    return 0;
}