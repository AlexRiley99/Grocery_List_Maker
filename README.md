# Grocery List Maker
## A Web Application for Creating and Managing A Grocery List On A Budget
#### Alex Riley
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
  ## What It Is/What It Does
  - It is a 1-page web application that allows the user to create and manage a grocery list while also working with a budget
  - It includes a tooltip at the top of the page to help guide the user if they don't know what to do. However, the design is intuitive and self-explanatory on its        own.
- First, the user enters a budget amount and clicks "Set Budget". This will save the budget amount and display it at the bottom of the screen next to "Budget: "
  - This amount can be changed at any time by entering a different number and clicking "Set Budget" to reset it.
- Next, the user can begin entering grocery list items.
  - This includes the name, quantity, and anticipated cost of one unit. So, for example, if the user is planning on buying 7 apples, they should enter the expected
      price of 1 apple. This allows the application to make correct calculations, as total = (quantity * expected cost of 1 unit).
  - The user clicks the "Add" button after entering each item. The item, its quantity, and its expected cost is then displayed in the "Your List" section. This also saves the new item, its quantity, and its cost to their respective array lists, which allows the JavaScript to make calculations later. 
- Once the user is finished entering all of their items, they click the "Done" button. This calculates their total and the difference between their total and their budget amount.
  - If the difference is a positive number, a green message displays that says "You are under budget by (X amount)! Way to save money!"
  - If the difference is exactly 0.00, a green message displays that says "You're right on budget!"
  - If the difference is a negative number, a red message displays that says "Oops! You're over budget by (X amount)! You may edit your list by clicking the Edit button."
- If the user wants or needs to, they may edit their list as they see fit by clicking the "Edit" button. Or, if they want to delete their entire list and start over,
  they may click the "Delete" button. 
  - Clicking the "Delete" button will result in a pop-up message confirming that the user wants to delete their list, as it cannot be recovered. Clicking "Ok" will delete the whole list. Clicking "Cancel" will cancel this action and keep the current list.
  - Clicking the "Edit" button opens up the editor
    *The editor includes a tooltip at the top, incase the user needs help. However, its design is intuitive just like the main application.
    *First, it will ask which item the user wants to edit. The application accesses list items via their index in the array list, so this item number is then passed to the JavaScript, which subtracts 1 from the number (as array lists are 0-indexed) to get the item's index.
    +Entering an item number and clicking "Confirm" will retrieve the item from the array list and display its informaton at the bottom of the screen, with buttons
    that say "Replace" or "Remove". Clicking "Remove" will delete the item. Clicking "Replace" opens the input fields for item replacement.
    +The "Replace" form shows the current item's name, quantity, and cost above three text entry fields for the new values. The user enters the new name, quantity, and
    cost and then clicks the "Done" button. Once the "Done" button is clicked, the original item is replaced with the new one and calculations are performed again to
    get the new total, difference, and message.
    *The "Close" button closes the editor
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Languages and Tools Used
### Languages
- HTML
- CSS
- JavaScript
### Tools
- Visual Studio Code
  - Development environment
- Git
  - Version control
- GitHub
  - Repository
- GitHub Pages
  - Hosting
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
## The Development Process
### Initial Setup
- I created the GitHub repository and then cloned it in VS Code
- I used GitHub pages to host the web application so that it can be accessed via my personal website
### Design
- I began by saving some stock photos of grocery store aisles. Once I had one that I liked, I used it as a background image for the web application.
- I gave each parent div element a beige gradient background and each child div a transparent background to allow the parent div's background to show through.
  This is a linear gradient that goes from the upper left corner to the lower right corner and is semi-transparent. Underneath this gradient is a paper grain
  texture, to go along with the grocery list theme.
- The "Item" section uses the Indie Flower font, which simulates handwriting to go with the grocery list theme and give it a more human feel.
- The buttons are a chocolate brown color to compliment the other background colors 
### Development
- I started by creating HTML, CSS, and JavaScript files. I only needed one of each for this project.
- The HTML handles the layout of the page, the CSS handles the other features such as fonts, colors, etc., and the JavaScript handles the saving of user input to an
  array, displaying the grocery list, and making and displaying calculations. 
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Future Changes
-  I plan to add a feature that allows the user to save their grocery list to their local device
-  I will add a feature that calculates tax by having the user enter the tax amount for their state and factoring it into calculations
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Credits
#### Alex Riley
- Designed and developed the website
