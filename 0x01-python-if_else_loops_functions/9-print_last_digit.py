#!/user/bin/python3
#!/usr/bin/env python3
print_last_digit = __import__('9-print_last_digit').print_last_digit

print_last_digit(98)
print_last_digit(0)
r = print_last_digit(-1024)
print(r)

def print_last_digit(number):
    number = abs(number) % 10
    print(number, end="")
    return number
