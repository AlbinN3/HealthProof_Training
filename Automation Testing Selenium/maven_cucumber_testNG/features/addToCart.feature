
Feature: Add to cart

Scenario: User adds an item to cart
Given user in the headphones section
When user adds a headphone to cart
Then the product appears in the cart