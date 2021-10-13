# Credit-card-validator

This program uses the Luhn Algorigthm to validate a CC number.
You can enter 'exit' anytime to quit

Step 1 is to double every second digit, starting from the right. If it
results in a two digit number, add both the digits to obtain a single
digit number. Finally, sum all the answers to obtain 'doubleEvenSum'.  
 
Step 2 is to add every odd placed digit from the right to the value 'doubleEvenSum'.

Step 3 is to check if the final 'doubleEvenSum' is a multiple of 10.
If yes, it is a valid CC number. Otherwise, not.
