/*
// TASK 1
#include<iostream>
using namespace std;
int main ()
{
// NAME: NOORFATIMA     ROLLNUM:L1F26BSCS0095
char letter,symbol;
cout<<"Enter a letter:";
cin>>letter;
cout<<"Enter a symbol or digit:";
cin>>symbol;
cout<<"letter:"<<letter<<endl;
cout<<"symbol or digit:"<<symbol;
return 0;

}*/


/*
//TASK  2
#include<iostream>
using namespace std;
int main ()
{
// NAME: NOORFATIMA     ROLLNUM:L1F26BSCS0095
char gradeLetter = 'A',section = 'C',initial = 'M';
cout<<"Grade:"<<gradeLetter<<endl;
 cout<<"Section:"<<section<<endl;
 cout<<"Initial:"<<initial<<endl;
cout<<"ASCII code of grade:"<<(int)gradeLetter<<endl;
cout<<"Nextletter:"<<(char)(gradeLetter + 1)<<endl;
 cout<<"Grade + 1 without cast:"<< gradeLetter + 1<<endl;
cout<<"Letters BTW A and Z:"<<'Z' - 'A'<<endl;
cout<<"Grade afterA,B,C:"<<(char)(gradeLetter + 3)<<endl;
 // Observation 1:gradeLetter + 1 prints 66 because the char is converted to its ASCII value.
 // Observation 2:'A' is a character, while "A" is a string literal. char c = "A"; gives a compiler error because char stores one character.
return 0;
}*/






/*
//TASK 3
#include<iostream>
using namespace std;
int main()
{
    // NAME: NOORFATIMA ROLLNUM:L1F26BSCS0095
char firstinitial,middleinitial,lastinitial;
cout<<"Enter your first initial: ";
cin>>firstinitial;
cout<<"Enter your middle initial: ";
cin>>middleinitial;
cout<<"Enter your last initial: ";
cin>>lastinitial;
cout<<"Badge: "<<firstinitial<<"."<<middleinitial<<"."<<lastinitial<<"."<<endl;
// Experiment 1:The badge remains the same because cin reads one character at a time
// Experiment 2:cin skips spaces and new linesso the enter key does not matter
 return 0;
}
*/






/*
//TASK 4      PART A
#include<iostream>
using namespace std;
int main()
{
 // NAME: NOORFATIMA ROLLNUM:L1F26BSCS0095
char first,second,third;
cout<<"Type three characters: ";
cin.get(first);
cin.get(second);
cin.get(third);
cout<<"First: ["<<first<<"] code "<<(int)first<<endl;
cout<<"Second: ["<<second<<"] code "<<(int)second<<endl;
cout<<"Third: ["<<third<<"] code "<<(int)third<<endl;
 // cin.get() also reads spaces as characters.
 return 0;
}*/





/*
//PART B
#include<iostream>
using namespace std;
int main()
{
 // NAME: NOORFATIMA ROLLNUM:L1F26BSCS0095
 char first,second,third;
 cout<<"Type three characters: ";
 cin>>first>>second>>third;
cout<<"First: ["<<first<<"] code "<<(int)first<<endl;
 cout<<"Second: ["<<second<<"] code "<<(int)second<<endl;
 cout<<"Third: ["<<third<<"] code "<<(int)third<<endl;
  // cin >> skips spaces and reads the next characters.
    return 0;
}
*/
















