/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    if (s.length !== t.length) return false;

    const map = new Map();

    // Count characters of s
    for (const ch of s) {
        map.set(ch, (map.get(ch) || 0) + 1);
    }

    // Remove counts using t
    for (const ch of t) {
        if (!map.has(ch)) return false;

        map.set(ch, map.get(ch) - 1);

        if (map.get(ch) < 0) return false;
    }

    return true;
};