<?php

/**
 * @file
 * Some description.
 */

/**
 * Test.
 */
function missing_trailing_comma(
  $a,
  $b
) {

}

$foo = 1;
$bar = 2;
$x = function (
  $a,
  $b
) use (
  $foo,
  $bar
) {

};

/**
 *
 */
class Test {

  /**
   * Test.
   */
  public function lookupSource(string $key, string $migrationNames = '', array $options = [
    'all' => NULL,
    'group' => NULL,
  ]): void {
  }

}

$x = function (
  $a,
  $b,
) use ($foo, $bar) {

};