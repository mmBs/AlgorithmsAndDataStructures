Monte Carlo algorithm
===========================

a Monte Carlo algorithm is a randomized algorithm whose running time is deterministic, but whose output may be incorrect with a certain (typically small) probability.

The related class of Las Vegas algorithms are also randomized, but in a different way: they take an amount of time that varies randomly, but always produce the correct answer. A Monte Carlo algorithm can be converted into a Las Vegas algorithm whenever there exists a procedure to verify that the output produced by the algorithm is indeed correct. If so, then the resulting Las Vegas algorithm is merely to repeatedly run the Monte Carlo algorithm until one of the runs produces an output that can be verified to be correct.

The name refers to the grand casino in the Principality of Monaco at Monte Carlo, which is well-known around the world as an icon of gambling.

More info: [Wikipedia](http://en.wikipedia.org/wiki/Monte_Carlo_algorithm)