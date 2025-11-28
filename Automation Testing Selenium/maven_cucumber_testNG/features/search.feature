
Feature: Search bar

Background:
Given user is in home page

Scenario: User searches for a valid product
When the user searches for a valid product
Then the system shows a list of products

Scenario: User searches for an invalid product
When the user searches for an invalid product
Then the system shows no records found