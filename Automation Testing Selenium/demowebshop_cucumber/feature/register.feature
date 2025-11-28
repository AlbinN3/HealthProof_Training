Feature: Registering new user
Scenario: Registering with valid value
Given the user want to register
When he enters the username as "asmin" and password as "adminpass"
Then he reaches the welcome page