# Changelog

All notable changes to **WinMerge – Ignore Accents** are documented in this file.

## [1.0] - Initial stable release

- Initial stable release of the WinMerge Prediffer plugin.
- Ignore Unicode diacritical marks when comparing text.
- Preserve case sensitivity.
- Handle Unicode text in NFC and NFD forms.
- Support UTF-8 (with and without BOM) and UTF-16 little-endian / big-endian.
- Process comparison data through temporary files without modifying the originals.
- Optimize buffered file I/O and Unicode character classification for improved performance.

### Validation

- Functional checks for accented and unaccented text.
- Checks for NFC/NFD normalization and case sensitivity.
- Checks for UTF-8, UTF-8 with BOM, UTF-16 LE, and UTF-16 BE.
- Performance measurements on files up to 100 MB.
