#include <iostream>
#include <cctype>
#include <algorithm>
#include <vector>
#include <cmath>
#include <istream>
using namespace std;

void Simple_Substitution_Cipher()
{
    string choose; // Declare a string variable to store the user's choice
    string end;    // Declare a string variable to store the input for continuation

    // Infinite loop for program execution
    while (true)
    {
        // Display menu options
        cout<<endl;
        cout << "======== welcome to Simple Substitution Cipher ========" << endl;
        cout << "1-Cipher a message " << endl;
        cout << "2-Decipher a message " << endl;
        cout << "3-Return " << endl;
        cout << "Enter what you want: ";

        // Input validation loop
        while(true)
        {
            cin >> choose;
            if (choose == "1" || choose == "2" || choose == "3" )
            {
                break;
            }
            else
            {
                cout<<"Please, enter a valid choice: ";
                continue;
            }
        }

        // Cipher message
        if(choose == "1")
        {
            string alpha = "abcdefghijklmnopqrstuvwxyz";
            string letters = "abcdefghijklmnopqrstuvwxyz";
            string key;
            string cipher_letters;
            string Plain_text;

            // Prompt user to enter the key
            cout << "Enter 5 letters for key: ";
            cin.ignore(); // Clear the newline character from the input buffer

            // Input validation loop for key
            while (true)
            {
                getline(cin, key);
                if (key.length()==5 && isalpha(key[0]) && isalpha(key[1]) && isalpha(key[2]) && isalpha(key[3]) && isalpha(key[4]) )
                {
                    break;
                }
                else
                {
                    cout<<"Please, enter a valid key: ";
                    continue;
                }
            }

            // Convert key to lowercase
            for (int i = 0 ; i<key.length() ; i++)
            {
                key[i]=tolower(key[i]);
            }

            // Build cipher alphabet
            for(int i = 0 ; i<5 ; i++)
            {
                for(int j = 0 ; j<26 ; j++)
                {
                    if (key[i]==letters[j])
                    {
                        letters.erase(j,1);
                        break;
                    }
                }
            }

            cipher_letters = key+letters;

            // Prompt user to enter the plaintext
            cout<<"Enter the Plain text: ";
            getline(cin, Plain_text);

            // Convert plain text to lowercase
            for (int i = 0 ; i<Plain_text.length() ; i++)
            {
                Plain_text[i]=tolower(Plain_text[i]);
            }

            // Perform encryption
            for(int i = 0 ; i<Plain_text.length() ; i++)
            {
                for(int j = 0 ; j<26 ; j++)
                {
                    if (Plain_text[i]==alpha[j])
                    {
                        Plain_text[i]=cipher_letters[j] ;
                        break ;
                    }
                }
            }

            // Display the encrypted message
            cout << "" << endl;
            cout << Plain_text << endl ;
            cout << "" << endl;
        }

        // Decipher message
        if(choose == "2")
        {
            string alpha = "abcdefghijklmnopqrstuvwxyz";
            string letters = "abcdefghijklmnopqrstuvwxyz";
            string key;
            string cipher_letters;
            string Plain_text;

            // Prompt user to enter the key
            cout << "Enter 5 letters for key: ";
            cin.ignore(); // Clear the newline character from the input buffer

            // Input validation loop for key
            while (true)
            {
                getline(cin, key);
                if (key.length()==5 && isalpha(key[0]) && isalpha(key[1]) && isalpha(key[2]) && isalpha(key[3]) && isalpha(key[4]) )
                {
                    break;
                }
                else
                {
                    // Make the user enter a valid key
                    cout<<"Please, enter a valid key: ";
                    continue;
                }
            }

            // Convert key to lowercase
            for (int i = 0 ; i<key.length() ; i++)
            {
                key[i]=tolower(key[i]);
            }

            // Build cipher alphabet
            for(int i = 0 ; i<5 ; i++)
            {
                for(int j = 0 ; j<26 ; j++)
                {
                    if (key[i]==letters[j])
                    {
                        letters.erase(j,1);
                        break;
                    }
                }
            }

            cipher_letters = key+letters;

            // Prompt user to enter the ciphertext
            cout<<"Enter the Ciphertext: ";
            getline(cin, Plain_text);

            // Convert ciphertext to lowercase
            for (int i = 0 ; i<Plain_text.length() ; i++)
            {
                Plain_text[i]=tolower(Plain_text[i]);
            }

            // Perform decryption
            for(int i = 0 ; i<Plain_text.length() ; i++)
            {
                for(int j = 0 ; j<26 ; j++)
                {
                    if (Plain_text[i]==cipher_letters[j])
                    {
                        Plain_text[i]=alpha[j] ;
                        break ;
                    }
                }
            }

            // Display the decrypted message
            cout << "" << endl;
            cout << Plain_text << endl ;
            cout << "" << endl;
        }

        // End program
        if(choose == "3")
        {
            cout << "" << endl;
            cout << "Return......." << endl;
            cout << "" << endl;
            break;
        }
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void RouteCipher()
{
  string choice;
  while (true)
  {
  // Output welcome message and show options to user
  cout << endl << "======== Welcome To Encryption And Decryption Program ========" << endl;
  cout << endl << "1-Cipher a message " << endl;
  cout << "2-Decipher a message " << endl;
  cout << "3-Return " << endl;
  cout << "Enter what you want: ";


    while(true)
    {
     cin >> choice;
     cin.ignore();
     if (choice == "1" || choice == "2" || choice == "3" )
      {
        break;
      }
      else
        {
          cout<<"Please, enter a valid choice: ";
          continue;
        }
     }

 if(choice == "1")
 {
  int key;
  string word;
  string result = "";

  // Input the message that will be encrypted
  cout << "Please Enter The Message You Want To Encrypt: ";
  getline(cin, word);
  cout << endl;

  // Input the secret key
  cout << "Please Enter The Secret Key: ";
  cin >> key;
  cout << endl;

  // Remove spaces from the message
  for (int i = 0; i < word.size(); i++)
  {
    if (!isspace(word[i]))
    {
      result += word[i];
    }
  }

  // Calculate the number of rows and columns for the 2D array
  int columns = key, x = 0, rows = ceil(result.size() / (float)key);
  char message[rows][columns];

  // Fill the 2D array
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      message[i][j] = toupper(result[x]);
      x++;
    }
  }

  // Add 'X' in Empty cells
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      if (!isalpha(message[i][j]))
      {
        message[i][j] = 'X';
      }
    }
  }

  // Output the encrypted message
  cout << "The Message After Encryption: ";
  int top = 0, bot = rows - 1;
  int lift = 0, right = columns - 1;
  while (top <= bot && lift <= right)
  {
    for (int i = top; i <= bot; i++)
    {
      cout << message[i][right];
    }
    right--;
    if (top <= bot)
    {
      for (int i = right; i >= lift; i--)
      {
        cout << message[bot][i];
      }
      bot--;
    }
    if (lift <= right)
    {
      for (int i = bot; i >= top; i--)
      {
        cout << message[i][lift];
      }
      lift++;
    }
    for (int i = lift; i <= right; i++)
    {
      cout << message[top][i];
    }
    top++;
  }
  cout << endl;
}


else if( choice == "2" )
{
  int key;
  string word;
  string result = "";

  // Input the message that will be decrypted
  cout << "Please Enter The Message You Want To Decrypt: ";
  getline(cin, word);
  cout << endl;

  // Input the secret key
  cout << "Please Enter The Secret Key: ";
  cin >> key;
  cout << endl;

  // Calculate the number of rows and columns for the 2D array
  int columns = key;
  int x = 0;
  int rows = ceil(word.size() / (float)key);
  char message[rows][columns];

  // Initialize variables for traversing the 2D array
  int top = 0, bot = rows - 1;
  int lift = 0, right = columns - 1, v = 0;

  // Fill the 2D array in a pattern spiral
  while (top <= bot && lift <= right)
  {
    for (int i = top; i <= bot; i++)
    {
      message[i][right] = word[v];
      v++;
    }
    right--;
    if (top <= bot)
    {
      for (int i = right; i >= lift; i--)
      {
        message[bot][i] = word[v];
        v++;
      }
      bot--;
    }
    if (lift <= right)
    {
      for (int i = bot; i >= top; i--)
      {
        message[i][lift] = word[v];
        v++;
      }
      lift++;
    }
    for (int i = lift; i <= right; i++)
    {
      message[top][i] = word[v];
      v++;
    }
    top++;
  }

  // Output the decrypted message
  cout << "The Message After Decryption: ";
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << message[i][j];
    }
  }
  cout << endl;
}

    else if (choice == "3")
    {
        cout << "" << endl;
        cout << "Return......." << endl;
        cout << "" << endl;
        break;
    }

    // If choice was not 1 or 2 or 3 output a message for user to alert him.
    else
    {
      cout << "Please Enter A Valid Choice: ";
    }
}
}


////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////

void Vignere_Cipher()
{
  while (true)
  {


  cout<<endl;
  cout << "======== welcome to Vignere Cipher ========" << endl;
  cout << "1-Cipher a message " << endl;
  cout << "2-Decipher a message " << endl;
  cout << "3-Return " << endl;
  cout << "Enter what you want: ";
  string choose; // Declare a string variable to store the user's choice


   // Make the user enter a valid selection
   while(true)
        {
            cin >> choose;
            if (choose == "1" || choose == "2" || choose == "3" )
            {
                break;
            }
            else
            {
                cout<<"Please, enter a valid choice: ";
                continue;
            }
        }
if (choose=="1"){
   string massege,key,repet1,repet2,space;
    getline(cin,massege);
    cout<<"enter your massege to cipher "<<endl;
     getline(cin,massege);
    double len1=(massege.length());
    while (true){  // Validate message length (less than or equal to 80 characters)
        if (len1<=80){
            break;
        }
        else{
            cout<<"error ,enter your massege again:"<<endl;
         getline(cin,massege);
         len1=(massege.length());
            continue;
        }
    }
    cout<<"enter your key "<<endl;
    getline(cin,key);
    double len2=(key.length());
    while (true){   // Validate key length (less than or equal to 8 characters)
        if (len2<=8){
            break;
        }
        else{
            cout<<"error ,enter your key again: "<<endl;
    getline(cin,key);
      len2=(key.length());
            continue;
        }
        }
        for ( int i=0 ;i<len1;i++){  // Convert message and key to uppercase
            massege[i]=toupper(massege[i]);
        }
        for ( int i=0 ;i<len2;i++){
            key[i]=toupper(key[i]);
        }
    repet1=" ";
    for ( int i=0;i<int(len1/len2);i++){    // Generate a repeated key
    repet1=repet1+key;
    }
space=" ";    // Handle any remaining characters for the non-integer division
for(int x=0;x<(((len1/len2)-int(len1/len2)))*len2;x++){
space=space+key[x];
}
repet1.erase(0,1);
space.erase(0,1);
repet2=repet1+space;
cout<<repet2<<endl;
 string result=" ";
for (int i=0 ; i<(len1);i++){  // Perform Vigen�re encryption
    if (isalpha(massege[i])){
       int x = static_cast<int>(massege[i]);
       int y = static_cast<int>(repet2[i]);
        int z= ((x+y)%26)+65;
        char ch= static_cast<char>(z);
        result=result+ch;
    }
    else{
result=result+massege[i];
    }
}
result.erase(0,1);
cout<< " the encrypted massege : "<<endl<<result; // Display the encrypted result
    }
if (choose=="2"){
  int letter;
    string massege,key,repet1,repet2,space;
     getline(cin,massege);
    cout<<"enter your massege to decipher "<<endl;
    getline(cin,massege);
    double len1=(massege.length());
    while (true){ // Validate key length (less than or equal to 8 characters)
        if (len1<=80){
            break;
        }
        else{
            cout<<"error ,enter your massege again:"<<endl;
         getline(cin,massege);
         len1=(massege.length());
            continue;
        }
    }
    cout<<"enter your key "<<endl;
    getline(cin,key);
    double len2=(key.length());
    while (true){ // Validate key length (less than or equal to 8 characters)
        if (len2<=8){
            break;
        }
        else{
            cout<<"error ,enter your key again: "<<endl;
    getline(cin,key);
      len2=(key.length());
            continue;
        }
        }
        for ( int i=0 ;i<len1;i++){ // Convert message and key to uppercase
            massege[i]=toupper(massege[i]);
        }
        for ( int i=0 ;i<len2;i++){
            key[i]=toupper(key[i]);
        }
        cout<<massege<<endl;
    cout<<len1<<endl<<len2<<endl;
    repet1=" ";
    for ( int i=0;i<int(len1/len2);i++){ // Generate a repeated key
    repet1=repet1+key;
    }
space=" ";
for(int x=0;x<(((len1/len2)-int(len1/len2)))*len2;x++){ // Handle any remaining characters for the non-integer division
space=space+key[x];
}
repet1.erase(0,1);
space.erase(0,1);
cout<<space<<endl;
repet2=repet1+space;
cout<<repet2<<endl;
 string result=" ";
for (int i=0 ; i<(len1);i++){ // Perform Vigen�re decryption
    if (isalpha(massege[i]))
    {
       int x = static_cast<int>(massege[i]);
       int y = static_cast<int>(repet2[i]);
        int z= x-65;
        for (int i=65; i<=90;i++){
            letter=i;
            if(((i+y)%26)==z){
                char ch= static_cast<char>(letter);
                result=result+ch;
            }
}
}
else{
       result=result+massege[i];
      }
}
result.erase(0,1);
cout<<"the decrypted massege "<<endl<<result;  // Display the decrypted result
}
if(choose == "3")
        {
            cout << "" << endl;
            cout << "Return......." << endl;
            cout << "" << endl;
            break;
        }
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////


// main program
int main()
{


    while (true)
    {
    // print welcome message
    cout<<endl;
    cout << "======== welcome to Ciphers and decrypts program ========" << endl;
    cout << "Which program Do You Want ?" << endl;
    cout << "1-Simple Substitution Cipher " << endl;
    cout << "2-Route Cipher " << endl;
    cout << "3-Vignere Cipher " << endl;
    cout << "4-End " << endl;
    cout << "Enter what you want: ";
    string choice1;

  while(true)
        {
            cin >> choice1;
            if (choice1 == "1" || choice1 == "2" || choice1 == "3" || choice1 == "4"  )
            {
                break;
            }
            else
            {
                cout<<"Please, enter a valid choice: ";
                continue;
            }
        }


    // the programe for Simple Substitution Cipher
    if (choice1 == "1")
    {
      cout<<"\n";
      cout <<"======================================================";
      cout<<"\n";
      Simple_Substitution_Cipher();
      cout<<"\n";
      cout <<"======================================================";
      cout<<"\n";
      continue ;
    }

    // the programe for Route Cipher
    else if (choice1 == "2")
    {
      cout<<"\n";
      cout <<"======================================================";
      cout<<"\n";
      RouteCipher();
      cout<<"\n";
      cout <<"======================================================";
      cout<<"\n";
      continue ;
    }


    // the programe for Vignere Cipher
    else if (choice1 == "3")
    {
      cout<<"\n";
      cout <<"======================================================";
      cout<<"\n";
      Vignere_Cipher();
      cout<<"\n";
      cout <<"======================================================";
      cout<<"\n";
      continue ;
    }



    // end main program
    else if (choice1 == "4")
    {
      cout<<endl;
      cout<<"Ending the program............";
      cout<<"\n";
      exit(4);
    }
    return 0;
}
}
