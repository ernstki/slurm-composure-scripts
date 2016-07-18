## What is this, anyway?

The scripts in this repository are small commands intended to be used with
[Composure][] to develop, test, and maintain the [PhyloWeb][] project.

Composure was inspired by [this very enlightening / funny talk][talk] by Gary
Bernhardt. What it basically does is allow you to turn your frequently-used
shell script one-liners into composable, maintainable, self-documenting
mini-utilities, instead of letting them languish in your `~/.bash_history`
until they fade from existence.

Composure's [README][] is excellent, with examples and even a [short
screencast][screencast] showing sample usage.

## Usage

The [PhyloWeb Vagrant VM][vm] already has Composure installed for you. Check
the project's README for the procedure for a fresh installation.

Until a proper Makefile is added to this repository, you would use this
repository in this way:

```bash
cd ~/.local
git clone git@github.com:GrosseLab/phyloweb-composure-scripts.git composure

# test to make sure it worked:
glossary
reference man2pdf
```

## License

Original code—what little there is—is released under the same terms as the
Composure project itself (MIT license).

[phyloweb]: https://github.com/AlexGa/PhyloWeb
[composure]: https://github.com/erichs/composure
[talk]: http://www.confreaks.com/videos/615-cascadiaruby2011-the-unix-chainsaw
[readme]: https://github.com/erichs/composure/blob/master/README.md
[screencast]: http://asciinema.org/a/476
[vm]: https://github.com/AlexGa/PhyloWeb_VM
