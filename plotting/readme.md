There's no working root conan package: exercise for rainy day could be to look at https://github.com/lasote/conan-root and https://docs.conan.io/en/latest/creating_packages.html

Instead `pacman -S root`


`root` is pretty neat as it gives you a C++ REPL. See https://root.cern/primer/

TF1 is handy:

```
double square(double x) { return x*x; }
auto *f1 = new TF1("myfunction","square(x)", -5.0, 10.0)
f1->Draw()
```

https://root.cern/primer/#interpretation-and-compilation - bleh, can't get this to work.

---

Giving up with ROOT for now, let's try gnuplot instead. Simple as this: write to a file, then `gnuplot --persist -e "plot 'blah.dat'"`

https://people.duke.edu/~hpgavin/gnuplot.html is a decent tutorial.
