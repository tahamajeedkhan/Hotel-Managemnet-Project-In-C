
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>
typedef struct person{
	char name[50],nic[50],nationality[30],address[50],email_id[30];
	int age[2],n_day,choice;
	int room_no;
//	char *roomtype;
//	int billprice;
//	char *program;
}person;
int login()
{
	char username[30];
	char c_username[30]={"tahamajeedkhan"};
	char password[32],ch;
//	char c_password[32]={'t','a','h','a','m','a','j','e','e','d','1','8','7'};
	char c_password[32]={"tahamajeed187"};
	int i=1,j,k,a;
	do
	{
		if(i==5)
		{
			printf("\t\tUser Disable.\n\n");
			return 0;
		}
		
		printf("\t\tEnter the Username: ");
		gets(username);
		printf("\t\tEnter the Password: ");
		gets(password);
//		for(j=0;j<100;j++)
//		{
//			ch=getch();
//			if(ch==13)
//			{
//				break;
//			}
//			password[j]=ch;
//			ch='*';
//			printf("%c",ch);
//		}
//		printf("\n");
//		for(k=0,j=0;k<13;j++,k++);
//		{
//			if(password[j]==c_password[k])
//			{
//				if(k==12)
//				{
//					printf("\n\t\tUsername\\Password is inncorrect.Enter a correct Username\\Password.\n\n");
//					a=5;
//					break;
//				}
//				
//			}
//			else
//			{
//				if(k==12)
//				{
//					printf("\n\t\tUsername\\Password is inncorrect.Enter a correct Username\\Password.\n\n");
//					a=5;
//					break;
//				}
//			}
//		}
//		if(a==5)
//		{
//			break;
//		}
		if( strcmp(username,c_username)==0 && strcmp(password,c_password)==0)
		{
			printf("\n\t\tLogin Successfully.\n\n");
			printf("\n\t\tEnter any key to continue......");
			getch();
			return 1;
		}
		else
		{
			printf("\n\t\tUsername\\Password is inncorrect.Enter a correct Username\\Password.\n\n");
		}
		i++;
	}while(i>0);
}
//int customer_details(int type)
//{
//	return person.n_day;
//}
void room_booking()
{
	int choice,hours,day,total;
	int in_date,in_month,in_year;
	int out_date,out_month,out_year;
	printf("\t\t.........Welcome To The Grand SAT Hotel...........\n\n");
	printf("\t\t1.Type 1            Rs.20000 Per Room Per Night\n\n");
	printf("\t\t\tFeature:\n");
	printf("\t\t\t\tTwo Persons Bed Room.\n");
	printf("\t\t\t\tMini Refrigerator In Room.\n");
	printf("\t\t\t\tFree Use Of health Club facilitation.\n");
	printf("\t\t\t\tBuffet Breakfast.\n\n");
	printf("\t\t2.Type 2         Rs.25500 Per Room Per Night\n\n");
	printf("\t\t\tFeature:\n");
	printf("\t\t\t\tTwo Persons Bed Room.\n");
	printf("\t\t\t\tMini Refrigerator In Room.\n");
	printf("\t\t\t\tFree Use Of health Club facilitation.\n");
	printf("\t\t\t\tExcuetive Longue Facilities.\n");
	printf("\t\t\t\tButler Service.\n");
	printf("\t\t\t\tHealth Club.\n\n");
	printf("\t\t3.Type 3     Rs.60000 Per Room Per Night\n\n");
	printf("\t\t\tFeature:\n");
	printf("\t\t\t\tAirport Pick And Drop Service By a Separate Car.\n");
	printf("\t\t\t\tSeparate Living Area,\n");
	printf("\t\t\t\tTwo Persons Bed Room.\n");
	printf("\t\t\t\tMini Refrigerator In Room.\n");
	printf("\t\t\t\tFree Use Of health Club facilitation.\n");
	printf("\t\t\t\t2 Piece Pressing/Laundry.\n");
	printf("\t\t\t\tBuffet Breakfast.\n");
	printf("\t\t\t\tExcutive Longue Facilities.\n");
	printf("\t\t\t\tButler Service.\n");
	person *p;
	FILE *fp;
	int i;
	p = (person*)calloc(1,sizeof(person));
	fp = fopen("bookingrecords.txt.","a+");
	for(i=0;i==0;i++)
	{
		printf("\t\tSelect Your Choice: ");
		scanf("%d",&p[i].choice);
		system("cls");
		printf("\t\t.........Welcome To The Grand SAT Hotel...........\n\n");
		printf("\t\tEnter the Coustomer Details to Continue.... \n\n");
		printf("\t\tEnter Your Name: ");
		fflush(stdin);
		gets(p[i].name);
		printf("\t\tEnter Your CNIC/Passport Number: ");
		fflush(stdin);
		gets(p[i].nic);
		printf("\t\tEnter your Age: ");
		fflush(stdin);
		scanf("%d",&p[i].age);
		printf("\t\tEnter your Resdential Address: ");
		fflush(stdin);
		gets(p[i].address);
		printf("\t\tEnter your Email Adress: ");
		fflush(stdin);
		gets(p[i].email_id);
		fflush(stdin);
		printf("\t\tEnter your Nationality: ");
		fflush(stdin);
		gets(p[i].nationality);
		printf("\t\tEnter the number of days of staying in the Hotel:");
		scanf("%d",&p[i].n_day);
		printf("\t\tEnter the Room Number: ");
		scanf("%d",&p[i].room_no);
		fwrite(&p[i],sizeof(person),1,fp);
	}
	fclose(fp);
	p[i].choice=choice;
	system("cls");
//	day=customer_details(choice);
//	printf("\t\tEnter the Check-In Date:\n");
//	printf("\t\tDay: ");
//	fflush(stdin);
//	scanf("%d",&in_date);
//	printf("\t\tMonth: ");
//	fflush(stdin);
//	scanf("%d",&in_month);
//	printf("\t\tYear: ");
//	fflush(stdin);
//	scanf("%d",&in_year);
//	printf("\t\tEnter the Check-Out Date:\n");
//	printf("\t\tDay: ");
//	fflush(stdin);
//	scanf("%d",&out_date);
//	printf("\t\tMonth: ");
//	fflush(stdin);
//	scanf("%d",&out_month);
//	printf("\t\tYear: ");
//	fflush(stdin);
//	scanf("%d",&out_year);
//	printf("Enter the Hour of Check Out (0-24): ");
//	fflush(stdin);
//	scanf("%d",&hours);
//	if(out_year-in_year==0)
//	{
//		if(out_month-in_month==0)
//		{
//			if(out_date-in_date==0)
//			{
//				day=1;
//			}
//			day=out_date-in_date;
//		}
//		else
//		{
//			day;
//		}
//	}
//	else
//	{
//		
//	}
//	if(day>12 && day<=24)
//	{
//		day++;
//	}
	switch(choice)
	{
		case 1:
			{
				total=day*20000;
				printf("%d",total);
			}
		case 2:
			{
				total=day*25500;
			}
		case 3:
			{
				total=day*60000;
			}
	}
}
void display()
{
	person p1;
	FILE *fp;
	int j;
	fp = fopen("bookingrecords.txt.","r");
	printf("Room Type\t\tName\t\tCNIC/Passport Number\t\tAge\t\tResdential Address\t\tEmail Address\t\tNationality\t\tNo.Days\n\n");
	while(fread(&p1,sizeof(person),1,fp))
	{
		printf("%d\t\t%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t%s\t\t%s\t\t%d\n\n",p1.choice,p1.room_no,p1.name,p1.nic,p1.age,p1.address,p1.email_id,p1.nationality,p1.n_day);
	}
	printf("\n\t\tEnter any key to continue......");
	getch();
}
void add_booking()
{
	int choice,day;
	printf("\t\t.........Welcome To The Grand SAT Hotel...........\n\n");
	printf("\t\t1.Type 1            Rs.20000 Per Room Per Night\n\n");
	printf("\t\t\tFeature:\n");
	printf("\t\t\t\tTwo Persons Bed Room.\n");
	printf("\t\t\t\tMini Refrigerator In Room.\n");
	printf("\t\t\t\tFree Use Of health Club facilitation.\n");
	printf("\t\t\t\tBuffet Breakfast.\n\n");
	printf("\t\t2.Type 2         Rs.25500 Per Room Per Night\n\n");
	printf("\t\t\tFeature:\n");
	printf("\t\t\t\tTwo Persons Bed Room.\n");
	printf("\t\t\t\tMini Refrigerator In Room.\n");
	printf("\t\t\t\tFree Use Of health Club facilitation.\n");
	printf("\t\t\t\tExcuetive Longue Facilities.\n");
	printf("\t\t\t\tButler Service.\n");
	printf("\t\t\t\tHealth Club.\n\n");
	printf("\t\t3.Type 3     Rs.60000 Per Room Per Night\n\n");
	printf("\t\t\tFeature:\n");
	printf("\t\t\t\tAirport Pick And Drop Service By a Separate Car.\n");
	printf("\t\t\t\tSeparate Living Area,\n");
	printf("\t\t\t\tTwo Persons Bed Room.\n");
	printf("\t\t\t\tMini Refrigerator In Room.\n");
	printf("\t\t\t\tFree Use Of health Club facilitation.\n");
	printf("\t\t\t\t2 Piece Pressing/Laundry.\n");
	printf("\t\t\t\tBuffet Breakfast.\n");
	printf("\t\t\t\tExcutive Longue Facilities.\n");
	printf("\t\t\t\tButler Service.\n");
	person *p;
	FILE *fp;
	int i;
	p = (person*)calloc(1,sizeof(person));
	fp = fopen("bookingrecords.txt.","a");
	for(i=0;i==0;i++)
	{
		printf("\t\tSelect Your Choice: ");
		scanf("%d",&p[i].choice);
		system("cls");
		printf("\t\t.........Welcome To The Grand SAT Hotel...........\n\n");
		printf("\t\tEnter the Coustomer Details to Continue.... \n\n");
		printf("\t\tEnter Your Name: ");
		fflush(stdin);
		gets(p[i].name);
		printf("\t\tEnter Your CNIC/Passport Number: ");
		fflush(stdin);
		gets(p[i].nic);
		printf("\t\tEnter your Age: ");
		fflush(stdin);
		scanf("%d",&p[i].age);
		printf("\t\tEnter your Resdential Address: ");
		fflush(stdin);
		gets(p[i].address);
		printf("\t\tEnter your Email Adress: ");
		fflush(stdin);
		gets(p[i].email_id);
		fflush(stdin);
		printf("\t\tEnter your Nationality: ");
		fflush(stdin);
		gets(p[i].nationality);
		printf("\t\tEnter the number of days of staying in the Hotel:");
		scanf("%d",&p[i].n_day);
		printf("\t\tEnter the Room Number: ");
		scanf("%d",&p[i].room_no);
		fwrite(&p[i],sizeof(person),1,fp);
	}
	fclose(fp);
	p[i].choice=choice;
	system("cls");
}
void search_details_room_no()
{
	person p1;
	FILE *fp;
	int j,room_no,found;
	fp = fopen("bookingrecords.txt.","r");
	printf("Enter the Room Number: ");
	scanf("%d",&room_no);
	system("cls");
	printf("Room Type\t\tRoom No\t\tName\t\tCNIC/Passport Number\t\tAge\t\tResdential Address\t\tEmail Address\t\tNationality\t\tNo.Days\n\n");
	while(fread(&p1,sizeof(person),1,fp))
	{
		if(p1.room_no==room_no)
		{
			found=1;
		printf("%d\t\t%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t%s\t\t%s\t\t%d\n\n",p1.choice,p1.room_no,p1.name,p1.nic,p1.age,p1.address,p1.email_id,p1.nationality,p1.n_day);
		}
	}
	if(!found)
	{
		printf("\n\n\t\tNo Room is Alloted/Found In the System of the entered Room Number.\n");
	}
	printf("\n\t\tEnter any key to continue......");
	getch();
}
void search_details_name()
{
	person p1;
	FILE *fp;
	int j,found;
	char c_name;
	fp = fopen("bookingrecords.txt.","r");
	printf("\t\tEnter the Customer Name: ");
	fflush(stdin);
	gets(c_name);
	system("cls");
	printf("Room Type\t\tRoom No\t\tName\t\tCNIC/Passport Number\t\tAge\t\tResdential Address\t\tEmail Address\t\tNationality\t\tNo.Days\n\n");
	while(fread(&p1,sizeof(person),1,fp))
	{
		if(strcmp(p1.name,c_name)==0)
		{
			found=1;
			printf("%d\t\t%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t%s\t\t%s\t\t%d\n\n",p1.choice,p1.room_no,p1.name,p1.nic,p1.age,p1.address,p1.email_id,p1.nationality,p1.n_day);
		}
	}
	if(!found)
	{
		printf("\n\n\t\tNo Rooms are Alloted/Found In the System with the name: %s\n",c_name);
	}
	printf("\n\t\tEnter any key to continue......");
	getch();
}
int main()
{
	int choice,x,i=1;
//	person.billprice=0;
//	person.program="notchosen";
	printf("\t\t==================================================\n");
	printf("\t\t=                                                =\n");
	printf("\t\t=                                                =\n");
	printf("\t\t=******** Welcome To The Grand SAT Hotel ********=\n");
	printf("\t\t=                                                =\n");
	printf("\t\t=                                                =\n");
	printf("\t\t==================================================\n\n");
	x=login();
	if(x==0)
	{
		return 0;
	}
	do
	{
		i++;
		system("cls");
		printf("\t\t.........Welcome To The Grand SAT Hotel...........\n\n");
		printf("\t\t1. Frist Room Booking.\n");
		printf("\t\t2. Add More Booking\n");
		printf("\t\t3. View All Customer Room Records.\n");
		printf("\t\t4. Search Customer Details By Room Number.\n");
		printf("\t\t5. Search Customer Details By Name.\n");
		printf("\t\t6. Check Out.\n");
		printf("\t\t7. Services\n");
		printf("\t\t8. Exit.\n");
		printf("\t\tSelect your Choice: ");
		scanf("%d",&choice);
		system("cls");
		switch(choice)
		{
			case 1:
				{
					room_booking();
					break;
				}
			case 2:
				{
					add_booking();
					break;
				}
			case 3:
				{
					display();
					break;
				}
			case 4:
				{
					search_details_room_no();
//					wait(1);
					break;
				}
			case 5:
				{
					search_details_name();
					break;
				}
			case 6:
				{
					
					break;
				}
			case 7:
				{
					
					break;
				}
			case 8:
				{
					printf("\n\n\t\tThank You For using the Hotel Management program.\n\n");
					printf("\t\tGood Bye!.\n");
					return 0;
				}
			default:
				{
					printf("\n\n\t\tInvalid Input.\n\n");
				}
		}
	}while(i>0);
	return 0;
}
//		case 2:
//			{
//				system("cls");
//				printf("1.Frozen Pizzas.\n");
//				printf("2.Premium Artisan Galatos.\n");
//				printf("3.All Day Eggs.\n");
//				printf("4.All Day sweet Breakfast(Eggless).\n");
//				printf("5.Soups.\n");
//				printf("6.Appetizers.\n");
//				printf("7.Salads.\n");
//				printf("8.Sandwiches.\n");
//				printf("9.Bugers.\n");
//				printf("10.Seafood Mains.\n");
//				printf("11.Beef & Chicken Mains.\n");
//				printf("12.Pastas.\n");
//				printf("13.Wood Fired Pizzas.\n");
//				printf("14.Desserts.\n");
//				printf("15.Hot Beverages.\n");
//				printf("16.Cold Beverages.\n");
//				printf("17.Cold Coffee && Shakes.\n");
//				printf("18.Smoothies.\n");
//				printf("19.Juices && Coaktails.\n\n");
//				printf("Select Your Choice: ");
//				scanf("%d",&choice);
//				switch(choice)
//				{
//					case 1:
//						{
//							system("cls");
//							printf("1.Pepperoni Pizza (Frozen)          				Rs. 1040\n");
//							printf("2.Pizza Margarita (Frozen)        				    Rs. 940\n");
//							printf("3.Chicken Jalappeno Pizza (Frozen)  				Rs. 1040\n");
//							printf("4.Spicy Peppercorn Salami (Frozen)  				Rs. 1060\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 2:
//						{
//							system("cls");
//							printf("1.Sugar Free Hazelnut Creme 400g                    Rs.1040\n");
//							printf("2.Walnut & Salted Maple Gelato Tub                  Rs.960\n");
//							printf("3.Chocalate Hazelnut && Wafferino Gelato Tub   		Rs.960\n");
//							printf("4.Coffe Gelato With Chocolate Toffee Crunch         Rs.960\n");
//							printf("5.Salted Carmel Gelato Tub                          Rs.910\n");
//							printf("6.Sugar Free Chocolate Gelato Tub                   Rs.1040\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 3:
//						{
//							system("cls");
//							printf("1.Pakistani Omelette								Rs.760\n");
//							printf("2.Spinach Omelette					 				Rs.590\n");
//							printf("3.Butter Croissant					 				Rs.360\n");
//							printf("4.Cheddar Cheese Omelette				 			Rs.830\n");
//							printf("5.Scrambled Eggs with Sauteed Mushroom 				Rs.820\n");
//							printf("6.Smoked Salmon Omelette							Rs.920\n");
//							printf("7.The 4-Cheese Omelette 				 			Rs.890\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 4:
//						{
//							system("cls");
//							printf("1.Butter Croissant									Rs.360\n");
//							printf("2.Apple & Cinnamon French Toast						Rs.380\n");
//							printf("3.Blueberry Pancake									Rs.610\n");
//							printf("4.Creme Brulee French Toast							Rs.610\n");
//							printf("5.Frozen Smoothie Bowl								Rs.940\n");
//							printf("6.Nutella French Toast								Rs.610\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 5:
//						{
//							system("cls");
//							printf("1.LemonGrass Soup With Chicken & Vegetables			Rs.440\n");
//							printf("2.Mushroom broth Soup								Rs.490\n");
//							printf("3.Cream of Chicken Soup								Rs.490\n");
//							printf("4.Mushroom Soup										Rs.490\n");
//							printf("5.Roasted Tomato Soup With Corn & Basil				Rs.480\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 6:
//						{
//							system("cls");
//							printf("1.Shrimp Tacos										Rs.790\n");
//							printf("2.Fries												Rs.410\n");
//							printf("3.Sweet Patato Fries								Rs.540\n");
//							printf("4.Criss Cut Fries									Rs.570\n");
//							printf("5.Chicken Wings										Rs.690\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 7:
//						{
//							system("cls");
//							printf("1.The Berry Salad								 	Rs.790\n");
//							printf("2.The Cobb Salad									Rs.880\n");
//							printf("3.Spict Thai Salad									Rs.740\n");
//							printf("4.The Citrus										Rs.860\n");
//							printf("5.The Russain Salad									Rs.810\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 8:
//						{
//							system("cls");
//							printf("1.Chicken Ciabatta Sandwich							Rs.960\n");
//							printf("2.The Smoked Salmon Club							Rs.1390\n");
//							printf("3.Hunter Beef Sandwich								Rs,1090\n");
//							printf("4.Chicken Croissant Sandwich						Rs.960\n");
//							printf("5.The TAS Club										Rs.1120\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 9:
//						{
//							system("cls");
//							printf("1.Fusion Burger										Rs.980\n");
//							printf("2.Chicken Cheese Burger								Rs.960\n");
//							printf("3.Crispy Fried Chicken Burger						Rs.960\n");
//							printf("4.Smoked BBQ Burger									Rs.1020\n");
//							printf("5.The Jalapeno Burger								Rs.960\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 10:
//						{
//							system("cls");
//							printf("1.Grilles Herbed Red Snapper						Rs.1210\n");
//							printf("2.Thai Prawn Green Curry							Rs.1020\n");
//							printf("3.Fish & Chips										Rs.980\n");
//							printf("4.Grilled Prawns with Crispy Garlic					Rs.940\n");
//							printf("5.Prawn Tempura										Rs.960\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 11:
//						{
//							system("cls");
//							printf("1.Flame Grilled Chicken								Rs.1190\n");
//							printf("2.Beef Undecut with Chimichurri						Rs.1410\n");
//							printf("3.Jalapeno Orange Chicken 							Rs.990\n");
//							printf("4.Moroccan Chicken									Rs.990\n");
//							printf("5.Grilled porcini Steak								Rs.1420\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 12:
//						{
//							system("cls");
//							printf("1.The 2 Cheese Ravioli								Rs.940\n");
//							printf("2.Beef Lasagna										Rs.990\n");
//							printf("3.Pasta Alfredo										Rs.990\n");
//							printf("4.Spaghetti Bolognese								Rs.1080\n");
//							printf("5.Penne & Cheese									Rs.990\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 13:
//						{
//							system("cls");
//							printf("1.Pizza Capricciosa									Rs.960\n");
//							printf("2.The Italian Meatball Pizza 						Rs.1040\n");
//							printf("3.TAS's Cheese & Fig Pizza 							Rs.1060\n");
//							printf("4.Buffalina											Rs.1040\n");
//							printf("5.The Blue Cheese 									Rs.940\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 14:
//						{
//							system("cls");
//							printf("1.TAS Signature Chocolate Cake						Rs.630\n");
//							printf("2.Strawberry Cheese Cake							Rs.680\n");
//							printf("3.Mango Tart 										Rs.560\n");
//							printf("4.Raspberry Chocolate Brownie						Rs.660\n");
//							printf("5.Double Chocolate Brownie							RS.680\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 15:
//						{
//							system("cls");
//							printf("1.Blgian Hot Chocolate								Rs.390\n");
//							printf("2.Americano											Rs.320\n");
//							printf("3.Cafe Mocha										Rs.420\n");
//							printf("4.Cappuccino 										Rs.430\n");
//							printf("5.Carmel Macchiato									Rs.390\n");
//							printf("6.Latte												Rs.430\n");
//							printf("7.Green Tea											Rs.190\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 16:
//						{
//							system("cls");
//							printf("1.Pepsi												Rs.140\n");
//							printf("2.7 UP												Rs.140\n");
//							printf("3.Marinda											RS.140\n");
//							printf("4.Dew												Rs.140\n");
//							printf("5.Diet 7 UP											Rs.140\n");
//							printf("6.Soda Lime											Rs.280\n");
//							printf("7.Soda												Rs.380\n");
//							printf("8.Iced Tea 											Rs.350\n");
//							printf("9.Mineral Water 									Rs.160\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 17:
//						{
//							system("cls");
//							printf("1.Carmel Frappe										Rs.460\n");
//							printf("2.Mocha Frappe										Rs.460\n");
//							printf("3.Iced Latte										Rs.390\n");
//							printf("4.Vanilla Milkshake									Rs.530\n");
//							printf("5.Chocolate Milkshake								Rs.530\n");
//							printf("6.Oero Milkshake									Rs.540\n");
//							printf("7.Mango Milkshake									Rs.540\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 18:
//						{
//							system("cls");
//							printf("1.Peach Smoothie									Rs.440\n");
//							printf("2.Passion Fruit										Rs.440\n");
//							printf("3.Strawberry										Rs.440\n");
//							printf("4.All Berries										Rs.460\n");
//							printf("5.Blueberry Smoothie								Rs.440\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					case 19:
//						{
//							system("cls");
//							printf("1.Apple Juice										Rs.420\n");
//							printf("2.Lemonate											Rs.380\n");
//							printf("3.Blue Margarita									Rs.390\n");
//							printf("4.Pina Colada										Rs.390\n");
//							printf("5.Mango Juice										Rs.420\n");
//							printf("6.Seasonal Juice									Rs.420\n");
//							printf("Select Your Choice: ");
//							scanf("%d",&choice);
//							break;
//						}
//					default:
//						{
//							printf("Invalid Input.\n");
//						}
//				}
//				break;
//			}
//		case 3:
//			{
//				printf("1.Table Tennis 						Rs.3000\n");
//				printf("2.Tennis Court						Rs.4500\n");
//				printf("3.Gym								Rs.3500\n");
//				printf("4.Board Games						Rs.2000\n");
//				printf("Select Your Choice: ");
//				scanf("%d",&choice);
//				break;
//			}
//	}
//	return 0;
//void room_choice(){
//	system("cls");
//	int room;
//	char ans;
//	switch(person.roomno)
//	{
//		case :
//		{
//			printf("Please veiw all the option above. \n\n");
//			printf("Select Your Choice: ");
//			scanf("%d",&room);
//			
//			
//			
//			
//			
//		}
//	}
//}		
//}
