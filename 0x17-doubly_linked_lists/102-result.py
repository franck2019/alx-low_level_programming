def latest_palindrome(n):
    upper_num = 10**n - 1
    lower_num = upper_num // 10
    result = 0

    for i in range(upper_num, lower_num, -1):
        for j in range(upper_num, lower_num, -1):
            product = i * j
            product = str(product)

            if product == product[::-1]:
                product = int(product)

                if product > result:
                    result = product
    return result


print(latest_palindrome(2))
print(latest_palindrome(3))
print(latest_palindrome(4))
