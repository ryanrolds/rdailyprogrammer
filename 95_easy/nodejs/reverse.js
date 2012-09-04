
process.stdin.resume();
process.stdin.setEncoding('utf8');

process.stdin.on('data', function (chunk) {
    process.stdout.write(chunk.split('\n').reverse().filter(function(item, n, arr) {
	return !(n === 0 && item.length === 0);
    }).map(function(line) {
	return line.split(' ').reverse().join(' ');
    }).join('\n') + '\n');
});