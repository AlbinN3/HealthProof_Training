@validinvalid
Feature: Log in
Scenario: Log in with valid value
Given user in login page for valid values
When user gives valid details
Then user goes to Home page

Scenario: log in with invalid value
Given user in login page for invalid value
When user gives invalid value
Then System shows error