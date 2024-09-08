# OpenDocs
This repository serves as an example for Task-06. The repository used for this example is the Flask application.

## Flask

### Overview 

Flask is a web framework that allows developers to build lightweight web applications quickly and easily with Flask Libraries.
It was developed by Armin Ronacher, leader of the International Group of Python Enthusiasts(POCCO). It is basically based on the WSGI toolkit and Jinja2 templating engine.

### Features

    Flask is easy to use and easily understandable for new users in Web Framework.
    It can also be used as any third-party plugin extension.
    It is also used for prototyping purposes.

### Setup Instructions 

#### Install Flask on Windows, Linux, macOS
 
**Step 1: Install Virtual Environment**

A virtual environment in Python is an isolated workspace that allows you to manage dependencies for different projects without conflicts with the system's global Python installation.
We will install Flask in a virtual environment to avoid problems with conflicting libraries.

Python 3 comes with a preinstalled virtual environment module called venv.
If your system does not have venv or you previously removed it, the sections below show how to install the module on Linux, macOS, and Windows.

*Install virtualenv on Linux*

In this tutorial, we will use Ubuntu.
The virtualenv module is available in the official Ubuntu repository, and we will install it using apt.
Follow the steps below:

1. Open the Linux terminal.

2. Use the following command to install virtualenv:

```sudo apt install python3-venv```

*Install virtualenv on macOS*

On macOS, we will use pip, a package manager for Python that allows you to install, update, and manage libraries and dependencies for your Python projects. Follow the steps below:

1. Open the terminal.

2. Install virtualenv on macOS with the following command:

```sudo python3 -m pip3 install virtualenv```

*Install virtualenv on Windows*

Like in macOS, we will use the pip package manager to install virtualenv:

1. Open the command line with administrator privileges.

2. Use pip to install virtualenv on Windows:

```pip install virtualenv```

**Step 2: Create an Environment**

After setting up the virtualenv module on your system, create an environment for Flask.
First, create a new directory by following the steps below, and then move on to the section for your operating system:

1. Make a separate directory for your project:

```mkdir [project_name]```

2. Navigate to the directory:

```cd [project_name]```

*Create an Environment in Linux and macOS*

We will initialize the virtual environment for Flask within the directory you created in the previous step.
When you create an environment, a new folder with the environment's name appears in your project directory.

To create a virtual environment, use the venv module and choose a name:

```python3 -m venv [environment_name]```

For example:

```python3 -m venv env_test```

The command creates a new virtual environment named env_test.

*Create an Environment in Windows*

Create and name a virtual environment in Windows using the following syntax:

```py -3 -m venv [environment_name]```

List the folder structure using the dir command to confirm it was created:

```dir *[project_name]*```

**Step 3: Activate the Environment**

Activate the virtual environment before installing Flask.
The name of the activated environment shows up in the CLI after activation. 
Follow the steps in the section pertaining to your operating system:

*Activate the Environment on Linux and macOS*

Use the syntax below to activate the virtual environment in Linux and macOS:

```source [environment_name]/bin/activate```

*Activate the Environment on Windows*

For Windows, activate the virtual environment with:

```[environment_name]\Scripts\activate```

**Step 4: Install Flask**

Install Flask within the activated environment using pip:

```pip install Flask```

Flask is installed automatically with all the dependencies.

**Step 5: Test the Development Environment**

This section shows how to test your Flask development environment by creating a simple Hello World application that prints "Hello World!". 
Follow the steps below:

1. Create a new file in the Flask project directory called hello.py. In Linux and macOS, you can use the touch command:

```touch hello.py```

2. Edit the file using a text editor and paste the following code to make an application that prints "Hello world!":

```from flask import Flask
app = Flask(__name__)
@app.route('/')
def hello_world():
    return 'Hello world!'
```
3. Save the file and close.

4. Using the terminal, navigate to the project directory using the cd command.

5. Set the FLASK_APP environment variable. Run the command below:

    For Linux and macOS:

```export FLASK_APP=hello.py```

    For Windows:

```setx FLASK_APP "hello.py"```

6. Run the Flask application with:

```flask run```

7. Copy and paste the address into the browser to see the project running:

The app prints the "Hello world!" message, which means that it is running properly on the local server.

### Conclusion

The guide showed how to install Flask on major operating systems. Flask is one of the most popular web application frameworks for Python.
