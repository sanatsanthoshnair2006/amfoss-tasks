# Overview
Flask is a web framework that allows developers to build lightweight web applications quickly and easily with Flask Libraries.
It was developed by Armin Ronacher, leader of the International Group of Python Enthusiasts(POCCO). 
It is basically based on the WSGI toolkit and Jinja2 templating engine.

# Features

Flask is easy to use and easily understandable for new users in Web Framework.
It can also be used as any third-party plugin extension.
It is also used for prototyping purposes.

# Code example

Here’s a snippet from the microblog.py file showing how the task creation is handled:

```
import sqlalchemy as sa
import sqlalchemy.orm as so
from app import create_app, db
from app.models import User, Post, Message, Notification, Task

app = create_app()


@app.shell_context_processor
def make_shell_context():
    return {'sa': sa, 'so': so, 'db': db, 'User': User, 'Post': Post,
            'Message': Message, 'Notification': Notification, 'Task': Task}
```
