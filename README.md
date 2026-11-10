# WinMerge – Ignore Accents

[Italiano](#italiano) · [English](#english)

---

## Italiano

**Ignore Accents** è un plugin *Prediffer* per WinMerge che permette di confrontare file ignorando gli accenti e gli altri segni diacritici Unicode, mantenendo però la distinzione tra lettere maiuscole e minuscole.

### Caratteristiche

- Confronta, ad esempio, `perché` e `perche` come equivalenti.
- Gestisce caratteri Unicode in forma composta (NFC) e decomposta (NFD).
- Mantiene la distinzione tra maiuscole e minuscole: `Casa` e `casa` restano differenti.
- Supporta file UTF-8 (con o senza BOM) e UTF-16 little-endian / big-endian.
- Non modifica i file originali: il plugin opera sui file temporanei di confronto di WinMerge.

### Requisiti

- WinMerge 2.16.x a 64 bit.
- Windows.
- DLL del plugin compilata per la stessa architettura di WinMerge.

### Installazione

1. Copiare `IgnoreAccents.dll` nella cartella `MergePlugins` dell'installazione di WinMerge (ad esempio `C:\Program Files\WinMerge\MergePlugins\`).
2. Riavviare WinMerge, se era già in esecuzione.
3. Aprire **Strumenti → Filtri predifferenza** (la voce può variare leggermente in base alla lingua/versione) e selezionare **Ignore Accents** per il confronto.

### Prestazioni

Benchmark indicativi eseguiti durante lo sviluppo:

| Dimensione file | Versione ottimizzata |
| ---: | ---: |
| 1 MB | istantaneo |
| 10 MB | circa 1,5 s |
| 50 MB | circa 7,1 s |
| 100 MB | circa 15,3 s |

Nei test effettuati, la versione ottimizzata è risultata circa **2,7× più veloce** della versione iniziale. I tempi effettivi dipendono da hardware, contenuto e codifica dei file.

### Stato

Versione stabile: **1.0**.

### Licenza

Il progetto è rilasciato nel pubblico dominio secondo **The Unlicense**. Chiunque può utilizzare, copiare, modificare e distribuire il software, anche per scopi commerciali. Consulta il file [`LICENSE`](LICENSE) per il testo completo.

---

## English

**Ignore Accents** is a *Prediffer* plugin for WinMerge. It compares files while ignoring Unicode accents and other diacritical marks, but preserves case sensitivity.

### Features

- Treats words such as `café` and `cafe` as equivalent.
- Handles Unicode text in composed (NFC) and decomposed (NFD) forms.
- Preserves case sensitivity: `Casa` and `casa` remain different.
- Supports UTF-8 (with or without BOM) and UTF-16 little-endian / big-endian.
- Does not modify original files; WinMerge performs the comparison using temporary files.

### Requirements

- 64-bit WinMerge 2.16.x.
- Windows.
- A plugin DLL built for the same architecture as WinMerge.

### Installation

1. Copy `IgnoreAccents.dll` into WinMerge's `MergePlugins` directory (for example, `C:\Program Files\WinMerge\MergePlugins\`).
2. Restart WinMerge if it is already running.
3. Open **Tools → Prediffer** (the exact menu label may vary by version or language) and select **Ignore Accents** for the comparison.

### Performance

Indicative benchmarks recorded during development:

| File size | Optimized version |
| ---: | ---: |
| 1 MB | instant |
| 10 MB | about 1.5 s |
| 50 MB | about 7.1 s |
| 100 MB | about 15.3 s |

In the tests performed, the optimized version was approximately **2.7× faster** than the initial implementation. Actual timings depend on hardware, file content, and encoding.

### Status

Stable version: **1.0**.

### License

This project is released into the public domain under **The Unlicense**. Anyone may use, copy, modify, and distribute the software, including for commercial purposes. See [`LICENSE`](LICENSE) for the full text.

---

## Repository contents

- `Source/` — C++ source files, Visual Studio project, IDL, resource files, and module definition file.
- `Bin/` — prebuilt `IgnoreAccents.dll`.

The source project and binary are included in this repository. The binary is provided as a convenience; users who prefer may rebuild it from `Source/` with Visual Studio and the required C++/ATL toolchain.
