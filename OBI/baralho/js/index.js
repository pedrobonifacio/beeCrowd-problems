var scanf_stub = require("scanf-printf-obi").scanf,
  printf_stub = require("scanf-printf-obi").sprintf,
  fgets_stub = require("scanf-printf-obi").fgets;

function scanf(format) {
  var res = scanf_stub.apply(this, Array.prototype.slice.call(arguments, 0));
  eval(res);
}

function printf(args) {
  var res = printf_stub.apply(this, Array.prototype.slice.call(arguments, 0));
  process.stdout.write(res);
}

function fgets(args) {
  var res = fgets_stub.apply(this, Array.prototype.slice.call(arguments, 0));
  eval(res);
}

function baralho(input) {
  const suits = {
    C: { Ns: [], res: 0 },
    E: { Ns: [], res: 0 },
    U: { Ns: [], res: 0 },
    P: { Ns: [], res: 0 },
  };

  input.split("").forEach((character, index) => {
    if (character.match(/[A-Za-z]/)) {
      const n = input.substring(index - 2, index);
      suits[character].Ns.push(n);
    }
  });
  return Object(suits).entries();
}

scanf("%d%d", "val1", "val2");

baralho("11P01C02C01U02U03U04U");
