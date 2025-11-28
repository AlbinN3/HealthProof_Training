@multiplelogin
Feature: Login with different users
Scenario Outline: Login with multiple values

Given the user in the login window
When he enters valid "<username>" and valid "<password>"
Then he reaches the HOME page

Examples:
| username	|	password	|
| user1		|	password1	|
| user2		|	password2	|
| user3		|	password3	|
| user4		|	password4	|
