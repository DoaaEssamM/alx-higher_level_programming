#!/usr/bin/python3
"""Define  locked class"""


class LockedClass:
    """
    Prevent user from instantiating new LockedClass attributes
    for anything only attributes called 'first_name'.
    """

    __slots__ = ["first_name"]
