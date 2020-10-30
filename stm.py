from collections import deque


def gale_shapley(*, A, B, A_pref, B_pref):
    """Create a stable matching using the
    Gale-Shapley algorithm.
    
    A -- set[str].
    B -- set[str].
    A_pref -- dict[str, list[str]].
    B_pref -- dict[str, list[str]].

    Output: list of (a, b) pairs.
    """
    B_rank = pref_to_rank(B_pref)
    ask_list = {a: deque(bs) for a, bs in A_pref.items()}
    pair = {}
    #
    remaining_A = set(A)
    while len(remaining_A) > 0:
        a = remaining_A.pop()
        b = ask_list[a].popleft()
        if b not in pair:
            pair[b] = a
        else:
            a0 = pair[b]
            b_prefer_a0 = B_rank[b][a0] < B_rank[b][a]
            if b_prefer_a0:
                remaining_A.add(a)
            else:
                remaining_A.add(a0)
                pair[b] = a
    #
    return [(a, b) for b, a in pair.items()]


gale_shapley(
    A={"1", "2", "3"},
    B={"1", "2", "3"},
    A_pref={
        "1": ["1"],
        "2": ["1"],
        "3": ["1"],
    },
    B_pref={
        "1": ["3"],
        "2": ["1"],
        "3": ["1"],
    },
)