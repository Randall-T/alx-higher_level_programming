#!/usr/bin/python3
if __name__ == "__main__":
    import hidden_4
    args = dir(hidden_4)

    for i in range(len(args)):
        if args[i].startswith("__"):
            continue
        print("{}".format(args[i]))
