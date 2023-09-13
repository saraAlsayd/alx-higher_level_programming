#!/usr/bin/python3
"""Defines a JSON load_from_file function."""
import json


def load_from_json_file(filename):

    """Write an object to a text file using JSON representation."""
    with open(filename) as f:
        return json.load(f)
