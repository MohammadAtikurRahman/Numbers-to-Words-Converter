#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_SIZE 5

int main() {
	int item, choice, i;
	int arr_stack[MAX_SIZE];
	int top = 0;
//	int exit = 1;
	do {
		printf("\n1.Enter value \n2.Display \nOthers to exit");
		printf("\nEnter Your Choice : ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			if (top == MAX_SIZE)
				printf("\Stack is Full!");
			else {
				printf("\nEnter The Value to be pushed : ");
				scanf("%d", &item);
				printf("\n## Position : %d , Pushed Value  : %d ", top, item);
				arr_stack[top++] = item;

			}
			break;




		case 2:
			//	printf("\n## Stack Size : %d ", top);
			for (i = (top - 1); i >= 0; i--){

				if((arr_stack[i]>0)&&(arr_stack[i]<2)){

					printf("");          //// eida lagbe na

				}

				/////////////////////////////////////////////////////////////////////////
				if((arr_stack[i]>99999)&&(arr_stack[i]<=9999999)){

					int y=arr_stack[i]/100000;             // vag die lakh e 1 unite, 12 unite korsi..then lakh korsi

					if(y==1){                               // y er mode 1 ba 12 unite

						printf("one");
					}

					else if(y==2){

						printf("two ");
					}

					else	 if(y==3){

						printf("three ");
					}

					else	  if(y==4){

						printf("four ");
					}

					else   if(y==5){

						printf("five ");
					}

					else    if(y==6){

						printf("six ");
					}




					else    if(y==7){

						printf("seven ");
					}




					else    if(y==8){

						printf("eight ");
					}




					else    if(y==9){

						printf("nine ");
					}


					else    if(y==10){

						printf("ten ");
					}

					else    if(y==11){

						printf("eleven");
					}




					if(y==12){
						printf(" twelve");
					}




					if(y==13){
						printf(" thirteen");
					}



					if(y==14){
						printf(" fourteen");
					}



					if(y==15){
						printf(" fifteen");
					}



					if(y==16){
						printf(" sixteen");
					}



					if(y==17){
						printf(" seventeen");
					}


					if(y==18){
						printf(" eighteen");
					}

					if(y==19){
						printf(" nineteen");
					}

					if(y==20){
						printf(" twenty");
					}



					if(y==21){
						printf(" twenty-one");
					}



					if(y==22){
						printf(" twenty-two");
					}



					if(y==23){
						printf(" twenty-three");
					}

					if(y==24){
						printf(" twenty-four");
					}


					if(y==25){
						printf(" twenty-five");
					}




					if(y==26){
						printf(" twenty-six");
					}




					if(y==27){
						printf(" twenty-seven");
					}






					if(y==28){
						printf(" twenty-eight");
					}






					if(y==29){
						printf(" twenty-nine");
					}


					if(y==30){
						printf(" thirty");
					}


					if(y==31){
						printf(" thirty-one");
					}



					if(y==32){
						printf(" thirty-two");
					}


					if(y==33){
						printf(" thirty-three");
					}




					if(y==34){
						printf(" thirty-four");
					}

					if(y==35){
						printf(" thirty-five");
					}



					if(y==36){
						printf(" thirty-six");
					}





					if(y==37){
						printf(" thirty-seven");
					}


					if(y==38){
						printf(" thirty-eight");
					}




					if(y==39){
						printf(" thirty-nine");
					}


					if(y==40){
						printf(" forty");
					}



					if(y==41){
						printf(" forty-one");
					}






					if(y==42){
						printf(" forty-two");
					}




					if(y==43){
						printf(" forty-three");
					}



					if(y==44){
						printf(" forty-four");
					}






					if(y==45){
						printf(" forty-five");
					}






					if(y==46){
						printf(" forty-six");
					}




					if(y==47){
						printf(" forty-seven");
					}


					if(y==48){
						printf(" forty-eight");
					}




					if(y==49){
						printf(" forty-nine");
					}



					if(y==50){
						printf(" fifty");
					}

					if(y==51){
						printf(" fifty one");
					}
					if(y==52){
						printf(" fifty two");
					}

					if(y==53){
						printf(" fifty three");
					}

					if(y==54){
						printf(" fifty four");
					}

					if(y==55){
						printf(" fifty five");
					}


					if(y==56){
						printf(" fifty six");
					}


					if(y==57){
						printf(" fifty seven");
					}




					if(y==58){
						printf(" fifty eight");
					}



					if(y==59){
						printf(" fifty nine");
					}



					if(y==60){
						printf(" sixty");
					}

					if(y==61){
						printf(" sixty one");
					}


					if(y==62){
						printf(" sixty two");
					}


					if(y==63){
						printf(" sixty three");
					}


					if(y==64){
						printf(" sixty four");
					}


					if(y==65){
						printf(" sixty five");
					}




					if(y==66){
						printf(" sixty six");
					}



					if(y==67){
						printf(" sixty seven");
					}


					if(y==68){
						printf(" sixty eight");
					}



					if(y==69){
						printf(" sixty nine");
					}



					if(y==70){
						printf(" seventy");
					}

					if(y==71){
						printf(" seventy one");
					}
					if(y==72){
						printf(" seventy two");
					}
					if(y==73){
						printf(" seventy three");
					}
					if(y==74){
						printf(" seventy four");
					}
					if(y==75){
						printf(" seventy  five");
					}
					if(y==76){
						printf(" seventy six");
					}

					if(y==77){
						printf(" seventy seven");
					}
					if(y==78){
						printf(" seventy eight");
					}
					if(y==79){
						printf(" seventy nine");
					}
					if(y==80){
						printf(" eighty");
					}

					if(y==81){
						printf(" eighty one");
					}

					if(y==82){
						printf(" eighty two");
					}

					if(y==83){
						printf(" eighty three");
					}

					if(y==84){
						printf(" eighty four");
					}

					if(y==85){
						printf(" eighty five");
					}

					if(y==86){
						printf(" eighty six");
					}

					if(y==87){
						printf(" eighty seven");
					}

					if(y==88){
						printf(" eighty eight");
					}


					if(y==89){
						printf(" eighty nine");
					}


					if(y==90){
						printf(" ninty");
					}

					if(y==91){
						printf(" ninty one");
					}

					if(y==92){
						printf(" ninty two");
					}

					if(y==93){
						printf(" ninty three");
					}

					if(y==94){
						printf(" ninty four");
					}

					if(y==95){
						printf(" ninty five");
					}


					if(y==96){
						printf(" ninty six");
					}


					if(y==97){
						printf(" ninty seven");
					}


					if(y==98){
						printf(" ninty eight");
					}

					if(y==99){
						printf(" ninty nine");
					}

					printf(" Lakch");


				}

				                                                //(arr_stack[i]%1000000!=0)&&(arr_stack[i]%1000000>=10000)&&(arr_stack[i]%11000000<=99999)
				//////////////////////////////////////////////////////////////
				                                                //(arr_stack[i]%1000000!=0)&&(arr_stack[i]%1000000>=10000)&&(arr_stack[i]%11000000<=99999)
				if((arr_stack[i]>999)&&(arr_stack[i]<=9999999)&&(arr_stack[i]%100000!=0)&&(arr_stack[i]%100000>=10000)&&(arr_stack[i]%100000<=99999)   ){          //
					//
					int c=arr_stack[i]/1000;
					int s=arr_stack[i]/100;

					int o=arr_stack[i]/10000;   
					//11 double umite          //// kaj baki
					int g=arr_stack[i]%100000;
					int u=g/1000;  //// 1
					if(c==1||u==1){

						printf(" one ");                                 //
					}

					else if(c==2||u==1){

						printf("two ");
					}

					else	 if(c==3||u==3){

						printf("three ");
					}

					else	  if(c==4||u==4){

						printf("four ");
					}

					else   if(c==5||u==5){

						printf("five ");
					}

					else    if(c==6||u==6){

						printf("six ");
					}




					else    if(c==7||u==7){

						printf("seven ");
					}




					else    if(c==8||u==8){

						printf("eight ");
					}




					else    if(c==9||u==9){

						printf("nine ");
					}



					if(c==10||u==10){
						printf(" ten");
					}


					if(c==11||u==11){
						printf(" eleven");
					}


					if(c==12||u==12){
						printf(" twelve");
					}




					if(c==13||u==13){
						printf(" thirteen");
					}



					if(c==14||u==14){
						printf(" fourteen");
					}



					if(c==15||u==15){
						printf(" fifteen");
					}



					if(c==16||u==16){
						printf(" sixteen");
					}



					if(c==17||u==17){
						printf(" seventeen");
					}


					if(c==18||u==18){
						printf(" eighteen");
					}

					if(c==19||u==19){
						printf(" nineteen");
					}

					if(c==20||u==20){
						printf(" twenty");
					}



					if(c==21||u==21){
						printf(" twenty-one");
					}



					if(c==22||u==22){
						printf(" twenty-two");
					}



					if(c==23||u==23){
						printf(" twenty-three");
					}

					if(c==24||u==24){
						printf(" twenty-four");
					}


					if(c==25||u==25){
						printf(" twenty-five");
					}




					if(c==26||u==26){
						printf(" twenty-six");
					}




					if(c==27||u==27){
						printf(" twenty-seven");
					}






					if(c==28||u==28){
						printf(" twenty-eight");
					}






					if(c==29||u==29){
						printf(" twenty-nine");
					}


					if(c==30||u==30){
						printf(" thirty");
					}


					if(c==31||u==31){
						printf(" thirty-one");
					}



					if(c==32||u==32){
						printf(" thirty-two");
					}


					if(c==33||u==33){
						printf(" thirty-three");
					}




					if(c==34||u==34){
						printf(" thirty-four");
					}

					if(c==35||u==35){
						printf(" thirty-five");
					}



					if(c==36||u==36){
						printf(" thirty-six");
					}





					if(c==37||u==37){
						printf(" thirty-seven");
					}


					if(c==38||u==38){
						printf(" thirty-eight");
					}




					if(c==39||u==39){
						printf(" thirty-nine");
					}


					if(c==40||u==40){
						printf(" forty");
					}



					if(c==41||u==41){
						printf(" forty-one");
					}






					if(c==42||u==42){
						printf(" forty-two");
					}




					if(c==43||u==43){
						printf(" forty-three");
					}



					if(c==44||u==44){
						printf(" forty-four");
					}






					if(c==45||u==45){
						printf(" forty-five");
					}






					if(c==46||u==46){
						printf(" forty-six");
					}




					if(c==47||u==47){
						printf(" forty-seven");
					}


					if(c==48||u==48){
						printf(" forty-eight");
					}




					if(c==49||u==49){
						printf(" forty-nine");
					}



					if(c==50||u==50){
						printf(" fifty");
					}

					if(c==51||u==51){
						printf(" fifty one");
					}
					if(c==52||u==52){
						printf(" fifty two");
					}

					if(c==53||u==53){
						printf(" fifty three");
					}

					if(c==54||u==54){
						printf(" fifty four");
					}

					if(c==55||u==55){
						printf(" fifty five");
					}


					if(c==56||u==56){
						printf(" fifty six");
					}


					if(c==57||u==57){
						printf(" fifty seven");
					}




					if(c==58||u==58){
						printf(" fifty eight");
					}



					if(c==59||u==59){
						printf(" fifty nine");
					}



					if(c==60||u==60){
						printf(" sixty");
					}

					if(c==61||u==61){
						printf(" sixty one");
					}


					if(c==62||u==62){
						printf(" sixty two");
					}


					if(c==63||u==63){
						printf(" sixty three");
					}


					if(c==64||u==64){
						printf(" sixty four");
					}


					if(c==65||u==65){
						printf(" sixty five");
					}




					if(c==66||u==66){
						printf(" sixty six");
					}



					if(c==67||u==67){
						printf(" sixty seven");
					}


					if(c==68||u==68){
						printf(" sixty eight");
					}



					if(c==69||u==69){
						printf(" sixty nine");
					}



					if(c==70||u==70){
						printf(" seventy");
					}

					if(c==71||u==71){
						printf(" seventy one");
					}
					if(c==72||u==72){
						printf(" seventy two");
					}
					if(c==73||u==73){
						printf(" seventy three");
					}
					if(c==74||u==74){
						printf(" seventy four");
					}
					if(c==75||u==75){
						printf(" seventy  five");
					}
					if(c==76||u==76){
						printf(" seventy six");
					}

					if(c==77||u==77){
						printf(" seventy seven");
					}
					if(c==78||u==78){
						printf(" seventy eight");
					}
					if(c==79||u==79){
						printf(" seventy nine");
					}


					if(c==80||u==80){
						printf(" eighty");
					}

					if(c==81||u==81){
						printf(" eighty one");
					}

					if(c==82||u==82){
						printf(" eighty two");
					}

					if(c==83||u==83){
						printf(" eighty three");
					}

					if(c==84||u==84){
						printf(" eighty four");
					}

					if(c==85||u==85){
						printf(" eighty five");
					}

					if(c==86||u==86){
						printf(" eighty six");
					}

					if(c==87||u==87){
						printf(" eighty seven");
					}

					if(c==88||u==88){
						printf(" eighty eight");
					}


					if(c==89||u==89){
						printf(" eighty nine");
					}


					if(c==90||u==90){
						printf(" ninty");
					}

					if(c==91||u==91){
						printf(" ninty one");
					}

					if(c==92||u==92){
						printf(" ninty two");
					}

					if(c==93||u==93){
						printf(" ninty three");
					}

					if(c==94||u==94){
						printf(" ninty four");
					}

					if(c==95||u==95){
						printf(" ninty five");
					}


					if(c==96||u==96){
						printf(" ninty six");
					}


					if(c==97||u==97){
						printf(" ninty seven");
					}


					if(c==98||u==98){
						printf(" ninty eight");
					}

					if(c==99||u==99){
						printf(" ninty nine");
					}

					printf(" thousands ");


				}
				////////////////////////////////////////////////////////////////////

				// if((arr_stack[i]>1000)&&(arr_stack[i]<99999))

				// if((arr_stack[i]>99)&&(arr_stack[i]<1000))
				if((arr_stack[i]>99)&&(arr_stack[i]<=9999999)&&(arr_stack[i]%1000!=0)&&(arr_stack[i]%1000>=100)&&(arr_stack[i]%1000<=999)       ){

					int c=arr_stack[i]/100;


					int e=arr_stack[i]%1000;
					int d=e/100;


					int f=arr_stack[i]%1000;


					int p=f/100;

					int l=arr_stack[i]%1000;
					int v=l/100;


					/// d hajer jonno handred
					if(c==1||d==1||p==1||v==1){

						printf("one ");
					}

					else if(c==2||d==2||p==2||v==2){

						printf("two ");
					}

					else	 if(c==3||d==3||p==3||v==3){

						printf("three ");
					}

					else	  if(c==4||d==4||p==4||v==4){

						printf("four ");
					}

					else   if(c==5||d==5||p==5||v==5){

						printf("five ");
					}

					else    if(c==6||d==6||p==6||v==6){

						printf("six ");
					}




					else    if(c==7||d==7||p==7||v==7){

						printf("seven ");
					}




					else    if(c==8||d==8||p==8||v==8){

						printf("eight ");
					}




					else    if(c==9||d==9||p==9||v==9){

						printf("nine ");
					}


					// laste duita zero tinta zero off korte hobe

					printf("Hundred");




				}


				////   / /    //////////////////////////////////////////// 

				int b;
				b=arr_stack[i]%100;



				if(b==1){
					printf("one");
				}


				if(b==2){
					printf(" two");
				}


				if(b==3){
					printf(" three");
				}

				if(b==4){
					printf(" four");
				}



				if(b==5){
					printf(" five");
				}



				if(b==6){
					printf(" six");
				}

				if(b==7){
					printf("seven");
				}


				if(b==8){
					printf(" eight");
				}



				if(b==9){
					printf(" nine");
				}



				if(b==10){
					printf(" ten");
				}


				if(b==11 ){
					printf(" eleven");
				}


				if(b==12){
					printf(" twelve");
				}


				if(b==13){
					printf(" thirteen");
				}


				if(b==14){
					printf(" fourteen");
				}


				if(b==15){
					printf(" fifteen");
				}


				if(b==16){
					printf(" sixteen");
				}


				if(b==17){
					printf(" seventeen");
				}


				if(b==18){
					printf(" eighteen");
				}

				if(b==19){
					printf(" nineteen");
				}

				if(b==20){
					printf(" twenty");
				}

				if(b==21){
					printf(" twenty-one");
				}

				if(b==22){
					printf(" twenty-two");
				}

				if(b==23){
					printf(" twenty-three");
				}

				if(b==24){
					printf(" twenty-four");
				}


				if(b==25){
					printf(" twenty-five");
				}

				if(b==26){
					printf(" twenty-six");
				}

				if(b==27){
					printf(" twenty-seven");
				}

				if(b==28){
					printf(" twenty-eight");
				}

				if(b==29){
					printf(" twenty-nine");
				}


				if(b==30){
					printf(" thirty");
				}


				if(b==31){
					printf(" thirty-one");
				}

				if(b==32){
					printf(" thirty-two");
				}

				if(b==33){
					printf(" thirty-three");
				}

				if(b==34){
					printf(" thirty-four");
				}

				if(b==35){
					printf(" thirty-five");
				}

				if(b==36){
					printf(" thirty-six");
				}

				if(b==37){
					printf(" thirty-seven");
				}

				if(b==38){
					printf(" thirty-eight");
				}

				if(b==39){
					printf(" thirty-nine");
				}

				if(b==40){
					printf(" forty");
				}

				if(b==41){
					printf(" forty-one");
				}

				if(b==42){
					printf(" forty-two");
				}

				if(b==43){
					printf(" forty-three");
				}

				if(b==44){
					printf(" forty-four");
				}

				if(b==45){
					printf(" forty-five");
				}

				if(b==46){
					printf(" forty-six");
				}


				if(b==47){
					printf(" forty-seven");
				}

				if(b==48){
					printf(" forty-eight");
				}


				if(b==49){
					printf(" forty-nine");
				}

				if(b==50){
					printf(" fifty");
				}

				if(b==51){
					printf(" fifty one");
				}
				if(b==52){
					printf(" fifty two");
				}

				if(b==53){
					printf(" fifty three");
				}

				if(b==54){
					printf(" fifty four");
				}

				if(b==55){
					printf(" fifty five");
				}


				if(b==56){
					printf(" fifty six");
				}


				if(b==57){
					printf(" fifty seven");
				}

				if(b==58){
					printf(" fifty eight");
				}



				if(b==59){
					printf(" fifty nine");
				}



				if(b==60){
					printf(" sixty");
				}

				if(b==61){
					printf(" sixty one");
				}


				if(b==62){
					printf(" sixty two");
				}


				if(b==63){
					printf(" sixty three");
				}


				if(b==64){
					printf(" sixty four");
				}


				if(b==65){
					printf(" sixty five");
				}




				if(b==66){
					printf(" sixty six");
				}



				if(b==67){
					printf(" sixty seven");
				}


				if(b==68){
					printf(" sixty eight");
				}



				if(b==69){
					printf(" sixty nine");
				}



				if(b==70){
					printf(" seventy");
				}

				if(b==71){
					printf(" seventy one");
				}
				if(b==72){
					printf(" seventy two");
				}
				if(b==73){
					printf(" seventy three");
				}
				if(b==74){
					printf(" seventy four");
				}
				if(b==75){
					printf(" seventy  five");
				}
				if(b==76){
					printf(" seventy six");
				}

				if(b==77){
					printf(" seventy seven");
				}
				if(b==78){
					printf(" seventy eight");
				}
				if(b==79){
					printf(" seventy nine");
				}


				if(b==80){
					printf(" eighty");
				}

				if(b==81){
					printf(" eighty one");
				}

				if(b==82){
					printf(" eighty two");
				}

				if(b==83){
					printf(" eighty three");
				}

				if(b==84){
					printf(" eighty four");
				}

				if(b==85){
					printf(" eighty five");
				}

				if(b==86){
					printf(" eighty six");
				}

				if(b==87){
					printf(" eighty seven");
				}

				if(b==88){
					printf(" eighty eight");
				}


				if(b==89){
					printf(" eighty nine");
				}


				if(b==90){
					printf(" ninty");
				}

				if(b==91){
					printf(" ninty one");
				}

				if(b==92){
					printf(" ninty two");
				}

				if(b==93){
					printf(" ninty three");
				}

				if(b==94){
					printf(" ninty four");
				}

				if(b==95){
					printf(" ninty five");
				}


				if(b==96){
					printf(" ninty six");
				}


				if(b==97){
					printf(" ninty seven");
				}


				if(b==98){
					printf(" ninty eight");
				}

				if(b==99){
					printf(" ninty nine");
				}




				///////////////////////////////////////////////////////////////////


			}

			break;
		default:
			//exit = 0;
			break;
		}
	} while (exit);

	return 0;
}
