@register
Feature: Registering users
Scenario Outline: Testing registration feature
Given the user in the registration page
When he enters valid "<gender>" and valid "<firstname>" and valid "<lastname>" and a valid "<email>"
Then the system navigates to home page of the user

Examples:
|	gender	|	firstname	|	lastname	|	email	|
|	Male	|	Albin		|	nelson		|	albin@	|