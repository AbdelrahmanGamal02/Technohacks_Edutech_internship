#include <stdio.h>
#include <stdlib.h>

#define Value_Of_End_File  EOF
#define File_Closed_Successfully  0

int main()
{
    FILE *Source_File = NULL;
    FILE *Destination_File = NULL;

    char Source_file_Path[1000];
    char Destination_file_Path[1000];

    int choice = 0;
    char check_character = '\0';
    int Check_Close_File = 1;

    printf("Please Enter The Path Of Source File :\n");
    gets(Source_file_Path);

    printf("Please enter the number of operation you want to be done : \n 1) Create File \n 2) Copy File \n 3) Move File \n 4) Delete File \n");
    scanf("%i" , &choice);
    switch(choice)
    {

    case 1:
        {
            Source_File = fopen(Source_file_Path , "w");
            if(NULL != Source_File)
            {
                printf("File Created successfully \n");

            }
            else
            {
                printf("Failed To Create File \n");

            }
            break;
        }

    case 2:
        {
            Source_File = fopen(Source_file_Path , "r");
            printf("Please Enter The Path Of Destination File :\n");
            fflush(stdin);
            gets(Destination_file_Path);
            Destination_File = fopen(Destination_file_Path , "w");
            if(NULL != Destination_File)
            {
                printf("Destination File is Ready\n");

                do
                {
                    check_character = getc(Source_File);
                    if (Value_Of_End_File != check_character) // to prevent add unwanted character and stop at the end of file
                    {
                        putc(check_character, Destination_File);
                    }
                }while(Value_Of_End_File != check_character);


                Check_Close_File = fclose(Destination_File);
                if(File_Closed_Successfully == Check_Close_File)
                {
                    printf("Copy Process done Successfully and File Closed \n");
                }else
                {
                    printf("There Are A problem In The cLose Of Destination File \n");
                }
            }
            else
            {
                printf("Failed To Create Destination File \n");
            }
            break;
        }

    case 3:
        {
            Source_File = fopen(Source_file_Path , "r");
            printf("Please Enter The Path Of Destination File :\n");
            fflush(stdin);
            gets(Destination_file_Path);
            Destination_File = fopen(Destination_file_Path , "w");
            if(NULL != Destination_File)
            {
                printf("Destination File is Ready\n");

                do
                {
                    check_character = getc(Source_File);
                    if (Value_Of_End_File != check_character) // to prevent add unwanted character and stop at the end of file
                    {
                        putc(check_character, Destination_File);
                    }
                }while(Value_Of_End_File != check_character);

                fclose(Source_File);
                remove(Source_file_Path);

                Check_Close_File = fclose(Destination_File);
                if(File_Closed_Successfully == Check_Close_File)
                {
                    printf("Move Process done Successfully and File Closed \n");
                }else
                {
                    printf("There Are A problem In The cLose Of Destination File \n");
                }
            }
            else
            {
                printf("Failed To Create Destination File \n");
            }
            break;
        }

    case 4:
        {
            fclose(Source_File);
            int result = remove(Source_file_Path);
            if(0 == result)
            {
                printf("File Deleted Successfully \n");
            }
            else
            {
                printf("Unable To Delete File \n");

            }
            break;
        }


    }



    return 0;
}
