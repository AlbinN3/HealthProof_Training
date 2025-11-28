@search
Feature: Search the product

Scenario: Search valid product
Given the user in the home page for searching valid project
When he enters the valid product details and submits
Then system displays the product info


Scenario: Search invalid product
Given the user in the home page for searching invalid project
When he enters the invalid product details and submits
Then system displays error message