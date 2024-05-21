
Welcome to the Encryption and Decryption Program, i and my team made this C++ code to implements a simple encryption and decryption algorithm.

#the Route Cipher# (This is by my made)
In this cipher users to input a message, choose a secret key, and encrypt or decrypt the message based on their choice.  
Route Cipher  is a transposition cipher that rearranges the characters of the message in a spiral pattern. The encryption function hides the message within a 2D array, and the decryption function reconstructs the original message.

#Simple Substitution Cipher#
In this cipher, a replacement alphabet is used to replace each letter by another one. See http://practicalcryptography.com/ciphers/simple-substitution-cipher/ 
For example, if we use this cipher alphabet:
plain alphabet : abcdefghijklmnopqrstuvwxyz
cipher alphabet: phqgiumeaylnofdxjkrcvstzwb
We can encrypt the following sentence as follows: (convert message and key to lower or upper case)
Plain text : I love C plus plus
Cipher text: a ndsi q xnvr xnvr

#Vignere Cipher#  
In this method, a keyword is repeatedly added character by character to each alphabetic letter in the original message. The addition is carried out using the ASCII codes for each of the characters, modulo 26 (the number of letters in the alphabet), and the result is added to the code for the letter 'A' in the ASCII code sequence. For example, if the original message is "due November 4" and the keyword is "HWone", the message will be encrypted as follows:

  message:   DUE NOVEMBER 4

  repeated keyword:   HWONEHWONEHWON

  encrypted message:   KQS RVRSZFLN 4

