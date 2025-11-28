
Feature: Register Page

Background:
Given user is in the registration page


Scenario Outline: User gives valid details
When user gives valid details: username "<username>", email "<email>",password "<password>"
Then user moves to home page

Examples:
|	username	|	email			|	password	|
|	User207		|	user8@gmail.com	|	User1@		|


Scenario Outline: User gives invalid details
When user gives invalid details: username "<username>", email "<email>", password "<password>"
Then the system shows an error message

Examples:
|	username	|	email			|	password	|
|	User124		|	user1@ggcc		|	User1@		|
|	User124		|	user1@g			|	User1@		|
|	User124		|	user1@.c		|	User1@		|
