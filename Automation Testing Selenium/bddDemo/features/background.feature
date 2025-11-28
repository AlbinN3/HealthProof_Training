@smoketesting
Feature: Log in 

Background:

Scenario: login with valid details 
When user enters the valid details
Then user goes to home page

Scenario: Login with invalid details
When user enters the invalid details
Then System throws an error