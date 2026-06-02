from itertools import product

# Operators
OPS = {
    '~': lambda a: not a,         # NOT
    '^': lambda a, b: a and b,    # AND
    'v': lambda a, b: a or b      # OR
}

# Truth table 
def truth_table(vars_, expr_func):
    # Header
    print(" | ".join(vars_) + " | Result")
    print("-" * (4 * len(vars_) + 9))
    # Rows
    for values in product([False, True], repeat=len(vars_)):
        assign = dict(zip(vars_, values))
        result = expr_func(**assign)
        row = [("1" if assign[v] else "0") for v in vars_]
        row.append("1" if result else "0")
        print(" | ".join(row))

# sentence
def compress_sentence(s1, s2):
    w1, w2 = s1.split(), s2.split()
    i = 0
    while i < min(len(w1), len(w2)) and w1[i] == w2[i]:
        i += 1
    if i == 0:
        return s1 + " and " + s2
    return " ".join(w1[:i]) + " " + w1[i] + " and " + w2[i]

# example
if __name__ == "__main__":
    P_text = "sadman is good"
    Q_text = "sadman is bad"

    # Expression: P ^ Q
    def expr(P, Q):
        return OPS['^'](P, Q)

    # create Sentence
    sentence = compress_sentence(P_text, Q_text)
    print("Sentence:", sentence, "\n")

    # Truth Table show
    truth_table(['P', 'Q'], expr)
