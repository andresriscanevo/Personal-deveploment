def fix_me(my_list):

    if len(my_list) % 2:  # imperative code
        new_list = []
        for item in my_list:
            for element in item:
                new_list.append(element)
    else:  # functional code
        new_list = [element for item in my_list for element in item]

    return sorted(new_list, reverse=True)
a=[[ 3, 4 ], [ 2, 6 ]]
fix_me(a)