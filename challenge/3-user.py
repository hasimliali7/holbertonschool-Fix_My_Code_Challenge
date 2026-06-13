#!/usr/bin/python3
"""
User Module

Defines a User class with a secure password validation system.
"""


class User():
    """
    User class that handles user properties and password verification.
    """

    def __init__(self):
        """ Initializes a User instance with a None password. """
        self.__password = None

    @property
    def password(self):
        """ Getter for the private password attribute. """
        return self.__password

    @password.setter
    def password(self, value):
        """ Setter to update the user password safely. """
        self.__password = value

    def is_valid_password(self, password):
        """
        Validates the provided password against the stored password.
        """
        if password is None or self.__password is None:
            return False
        return self.__password == password


if __name__ == "__main__":
    u = User()
    u.password = "Root1234"
    print(u.is_valid_password("Root1234"))
