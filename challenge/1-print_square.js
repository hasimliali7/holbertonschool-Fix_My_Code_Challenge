#!/usr/bin/node
/**
 * Print Square Module
 *
 * This script takes one argument from the command line representing
 * the size of the square and prints it using '#' characters.
 */

if (process.argv.length <= 2) {
  process.stderr.write('Missing argument\n');
  process.stderr.write('Usage: ./1-print_square.js <size>\n');
  process.exit(1);
}

const size = parseInt(process.argv[2], 10);

if (isNaN(size)) {
  process.stderr.write('Argument must be a number\n');
  process.exit(1);
}

for (let i = 0; i < size; i++) {
  for (let j = 0; j < size; j++) {
    process.stdout.write('#');
  }
  process.stdout.write('\n');
}
