#Proper Trench Coats - Online Ordering Application

Welcome to the Proper Trench Coats Store Online Ordering Application README! This application is designed to facilitate online ordering of fashionable and elegant trench coats. The application offers two modes: administrator and user. Below, you'll find detailed information on each mode and the functionalities available. Administrators can manage the trench coat database, while users can explore the available trench coats and make purchases.
####Admin mode:
>add new trench coat;
>delete trench coat;
>update trench coat info;
>view all trench coat;

####User mode:
>browse trench coats;
>add trench coat to basket;
>continue browsing;
>view shopping basket(either in command line, CSV or HTML format);

###Additional Features
>usage of STL vector - improving memory management and performance while maintaining compatibility with standard library containers;
>usage of STL algorithms - enhancing readability and reducing the likelihood of errors;
>test coverage requirement - to ensure the reliability and robustness of the application, a minimum test coverage of 98% has been enforced for all layers, except the UI;
>data persistence - entities are now stored in a text file using the iostream library. Upon starting the program, entities are read from the file, and modifications made during program execution are stored back in the file;
>exception handling - exceptions are utilized to signal errors, including repository errors and validation errors;
>file format selection - depending on the user's choice data can be store either in CSV or HTML format;
