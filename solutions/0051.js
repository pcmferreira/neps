const input = require('fs').readFileSync(0, "utf8")
const lines = input.split('\n')

const p = parseInt(lines[0])
const a = parseInt(lines[1])
const b = parseInt(lines[2])

console.log((a + b) % 2 != p ? 1 : 0)
