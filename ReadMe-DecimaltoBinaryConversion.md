## Project Overview: Decimal to Binary Conversion (CGI)

This project involves a CGI (Common Gateway Interface) program written in C for converting decimal numbers to binary representation and displaying the result in an HTML format. The program retrieves a decimal number from the environment variable `QUERY_STRING`, converts it to binary, and outputs the result in an HTML page. Here's an overview of the project components:

### `DecimalToBinaryCGI.c`

This C source file contains the main logic of the CGI program. It includes the following functionalities:

- **Conversion to Binary**: Defines the `convertToBinary` function, which converts a decimal number to its binary representation.
- **Main Functionality**: The `main` function serves as the entry point of the program. It retrieves the decimal number from the environment variable `QUERY_STRING`, converts it to binary using `convertToBinary`, and outputs the result in HTML format.

### `convertToBinary` Function

This function takes a decimal number as input and converts it to its binary representation. It employs the following steps:

1. **Conversion**: Divides the decimal number by 2 iteratively and stores the remainders in an array to obtain the binary representation.
2. **Output**: Prints the binary digits in reverse order to ensure correct representation.

### HTML Output

The program generates an HTML response to display the converted binary number. It includes the following elements:

- **Content-Type Header**: Sets the content type to `text/html` to ensure proper rendering in the browser.
- **HTML Structure**: Defines the HTML structure with appropriate tags for formatting and displaying the result.
- **Decimal Input Display**: Shows the decimal number obtained from the user.
- **Binary Output Display**: Displays the binary representation of the decimal number.

### Main Execution Flow

1. **Environment Variable Retrieval**: Retrieves the decimal number from the `QUERY_STRING` environment variable.
2. **Conversion**: Converts the decimal number to binary using the `convertToBinary` function.
3. **HTML Generation**: Constructs an HTML page to display the original decimal number and its binary representation.
4. **Output**: Prints the HTML content to stdout for CGI response.

This project demonstrates the implementation of a CGI program in C for converting decimal numbers to binary and generating HTML output for web presentation.
