#include #include #include class Library { int BookNo; char BName[25]; char Author[25]; char Publisher[25]; float Price; int No_of_Copies; int No_of_Copies_Issued; public: void initial() { cout<>Price; cout<>No_of_Copies; } void issue_book () { cout<<"Enter book details......."<0) { cout<<"enter How many book you want to issue:";  cin>>No_of_Copies_Issued;  if(No_of_Copies>=No_of_Copies_Issued) { No_of_Copies=No_of_Copies-No_of_Copies_Issued; cout<>BookNo; cout<Issue book...."<Return Book....."<>ch; switch(ch) { case 1:  11.issue_book(); break; case 2: 11.return_book(); break; } getch();