   printf("\nEnter Your First name = ");
    scanf("%s",&Fname); // GETTING INPUT FROM THE USER HERE "%s" IS FORMAT SPECIFIER FOR WORDS WHOSE LENGTH GRATER THAN 1 AND "&" IS AN ATTRIBUTE THAT ACCESS THE MEMORY LOCATION OF "Fname" VARIABLE
    printf("\nEnter Your First name = ");
    scanf("%s",&Lname);
    printf("\nEnter Your age = ");
    scanf("%d,&age");
    printf("\nEnter Your salary = ");
    scanf("%lf",&income);

    printf("\n++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n++ First name =           %15s ++",Fname);
    printf("\n++ Last name  =           %15s ++",Lname);
    printf("\n++ age        =           %15d ++",age);
    printf("\n++ Income     =          %16lf ++",income);
    printf("\n++++++++++++++++++++++++++++++++++++++++++++");