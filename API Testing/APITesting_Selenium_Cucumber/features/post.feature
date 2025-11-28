Feature: testing POST request
Scenario: testing the API for POST
Given the user in the URL https://jsonplaceholder.typicode.com/posts
When he sends the post request
Then he gets the response of 200 and the data