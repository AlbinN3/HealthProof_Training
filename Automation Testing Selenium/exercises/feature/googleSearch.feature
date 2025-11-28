@goofle
Feature: Testing google
Scenario Outline: Search with multiple values
Given the user in the google page
When he enters the "<keyword>" to search and submits
Then the user clicks the first link

Examples:
|	keyword		|
|	qtp			|
|	selenium 	|
|	rft			|