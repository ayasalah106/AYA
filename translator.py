def translator(phrase):
    translate=""

    for letter in phrase:
        if letter.lower() in "aeiou":
            if letter.isupper():
                translate+="G"
            else:
                translate+="g"
        else:
            translate+=letter
    return translate
x=input("ENTER A PHRASE:")
print("the result is "+ translator(x))