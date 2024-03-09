#include <iostream>
#include <cmath>
using namespace std;

// Function for encryption
void encryption()
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

//##########################################################################//

// Function for decryption
void decryption()
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

//##########################################################################//

// The Main Function
int main()
{
  char choice;

  // Output welcome message and show options to user
  cout << endl << "# Welcome To Encryption And Decryption Program #" << endl;
  while (1)
  {
    cout << endl << "If You Want To Encryption Enter 'A'" << endl;
    cout << "If You Want To Decryption Enter 'B'" << endl;
    cout << "If You Want To Exit Enter 'C'" << endl;

    char choice1;
    cin >> choice1;
    cin.ignore();
    char choice2 = toupper(choice1);

    
    if (choice2 == 'A')
    {
      encryption();   // Call encryption function 
    }
    else if (choice2 == 'B')
    {
      decryption();   // Call decryption function
    }
    else if (choice2 == 'C')
    {
      
      exit('C');     // Exit the program
    }
    
    // If choice was not A or B or C outpu a message for user to alert him.
    else
    {
      cout << "Please Enter A Valid Choice: ";      
    }
  }
}
