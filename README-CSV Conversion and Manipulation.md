## Project Overview: CSV Conversion and Manipulation

This project involves the conversion of a text file containing structured data into a CSV (Comma-Separated Values) format. Additionally, it includes functionalities to read, search, add, and delete records from the generated CSV file. The project consists of the following files:

### `convert_to_csv.h`

This header file declares a function `load_and_convert` responsible for loading data from a text file and converting it into CSV format. It includes the following functions:

- `load_and_convert(const char* filename)`: Reads data from a text file (`filename`) and converts it into CSV format. It saves the converted data into a file named `output.csv`.

### `convert_to_csv.c`

This file contains the implementation of the `load_and_convert` function declared in `convert_to_csv.h`. It includes the following functions:

- `load_and_convert(const char* filename)`: Implementation of the function declared in the header file. It reads data from the input text file, extracts information, and writes it into the `output.csv` file in CSV format.

### `read_csv.h`

This header file declares a function `read_csv` responsible for reading and displaying the content of a CSV file. It includes the following functions:

- `read_csv(const char* csv_filename)`: Reads and prints the content of the CSV file specified by `csv_filename`.

### `read_csv.c`

This file contains the implementation of the `read_csv` function declared in `read_csv.h`. It includes the following functions:

- `read_csv(const char* csv_filename)`: Implementation of the function declared in the header file. It reads each line from the specified CSV file and prints it to the console.

### `main.c`

This file serves as the main entry point of the program. It includes functionalities to manipulate the CSV file generated from the text file. The main functionalities include:

1. **Conversion and Output**: Utilizes the `load_and_convert` function to convert data from the input text file to CSV format and outputs the result to `output.csv`.
2. **Reading CSV**: Utilizes the `read_csv` function to read and display the content of the generated CSV file.
3. **Finding Records**: Implements the `find_name` function to search for specific records by name within the CSV file.
4. **Adding Records**: Implements the `add_record` function to add new records to the CSV file.
5. **Deleting Records**: Implements the `delete_record` function to delete specific records from the CSV file.

Each function is executed sequentially to demonstrate the manipulation of the CSV file.

This project showcases the process of converting structured data from a text file to CSV format and performing various operations on the resulting CSV file.
