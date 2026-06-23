# SoH3D Lighting Parity Report

Cross-reference of OoT3D scene lighting (ground truth) vs N64 scene lighting (SoH3D source).

**Score** = mean of (max ambient delta, max light0-color delta, max light1-color delta) across all time-of-day slots for a scene.  Higher = more diverged.

Color deltas are on the 0–255 scale (mean over R/G/B).  Threshold: HIGH ≥ 30, MED ≥ 15, low < 15.

## Summary (sorted by severity)

| Rank | Scene (N64) | OoT3D key | Score | Amb HIGH slots | L0col HIGH slots | L1col HIGH slots |
|------|-------------|-----------|-------|----------------|------------------|------------------|
| 1 | `ganontika` | `ganontika` | 197.7 | 20 | 26 | 25 |
| 2 | `tokinoma` | `tokinoma` | 192.1 | 13 | 13 | 10 |
| 3 | `ganon_boss` | `ganon_boss` | 185.3 | 17 | 16 | 16 |
| 4 | `ganon_demo` | `ganon_demo` | 178.6 | 13 | 12 | 11 |
| 5 | `kenjyanoma` | `kenjyanoma` | 158.1 | 6 | 6 | 6 |
| 6 | `spot02` | `spot02` | 158.0 | 19 | 18 | 13 |
| 7 | `ganontikasonogo` | `ganontikasonogo` | 157.3 | 3 | 6 | 5 |
| 8 | `yousei_izumi_yoko` | `yousei_izumi_yoko` | 155.8 | 6 | 7 | 7 |
| 9 | `link_home` | `link` | 155.1 | 1 | 1 | 1 |
| 10 | `ganon_sonogo` | `ganon_sonogo` | 152.7 | 5 | 5 | 4 |
| 11 | `kokiri_home3` | `k_home3` | 148.6 | 1 | 1 | 1 |
| 12 | `spot07` | `spot07` | 145.1 | 9 | 12 | 12 |
| 13 | `moribossroom` | `moriboss` | 142.8 | 4 | 3 | 4 |
| 14 | `market_night` | `market_night` | 141.9 | 1 | 1 | 1 |
| 15 | `daiyousei_izumi` | `daiyousei_izumi` | 140.9 | 5 | 5 | 5 |
| 16 | `kokiri_home5` | `k_home5` | 140.7 | 1 | 1 | 1 |
| 17 | `fire_bs` | `fire_bs` | 139.1 | 4 | 4 | 4 |
| 18 | `spot11` | `spot11` | 138.8 | 11 | 11 | 10 |
| 19 | `spot09` | `spot09` | 136.7 | 10 | 12 | 10 |
| 20 | `ganon` | `ganon` | 135.3 | 11 | 11 | 9 |
| 21 | `jyasinboss` | `jyasinzou_boss` | 134.4 | 9 | 9 | 10 |
| 22 | `malon_stable` | `stable` | 133.3 | 1 | 1 | 1 |
| 23 | `spot00` | `spot00` | 133.1 | 7 | 16 | 15 |
| 24 | `spot01` | `spot01` | 130.7 | 6 | 12 | 10 |
| 25 | `zoora` | `zoora` | 130.1 | 1 | 1 | 1 |
| 26 | `mizusin` | `mizusin` | 129.2 | 5 | 3 | 5 |
| 27 | `hairal_niwa` | `hairal_niwa` | 128.9 | 3 | 4 | 4 |
| 28 | `spot05` | `spot05` | 128.4 | 6 | 12 | 12 |
| 29 | `spot20` | `spot20` | 127.4 | 5 | 7 | 6 |
| 30 | `hakadan` | `hakadan` | 127.0 | 4 | 4 | 4 |
| 31 | `spot12` | `spot12` | 127.0 | 10 | 11 | 10 |
| 32 | `miharigoya` | `miharigoya` | 126.6 | 2 | 4 | 3 |
| 33 | `spot03` | `spot03` | 125.8 | 7 | 12 | 10 |
| 34 | `bdan` | `bdan` | 125.2 | 3 | 4 | 3 |
| 35 | `souko` | `souko` | 124.6 | 4 | 3 | 4 |
| 36 | `market_day` | `market_day` | 123.7 | 1 | 1 | 1 |
| 37 | `spot06` | `spot06` | 123.6 | 5 | 11 | 10 |
| 38 | `spot13` | `spot13` | 123.4 | 7 | 12 | 9 |
| 39 | `hairal_niwa_n` | `hairal_niwa_n` | 122.7 | 4 | 3 | 3 |
| 40 | `ydan` | `ydan` | 122.3 | 5 | 7 | 6 |
| 41 | `hakaana2` | `hakaana2` | 122.0 | 4 | 4 | 4 |
| 42 | `kokiri_home4` | `k_home4` | 121.9 | 1 | 1 | 1 |
| 43 | `nakaniwa` | `nakaniwa` | 121.9 | 3 | 4 | 4 |
| 44 | `spot17` | `spot17` | 121.9 | 9 | 9 | 9 |
| 45 | `ydan_boss` | `ydan_boss` | 121.6 | 5 | 6 | 6 |
| 46 | `shrine` | `shrine` | 119.9 | 4 | 4 | 3 |
| 47 | `kakariko3` | `kakariko_home3` | 119.7 | 1 | 1 | 1 |
| 48 | `hakasitarelay` | `hakasitarelay` | 119.3 | 5 | 4 | 5 |
| 49 | `spot15` | `spot15` | 118.8 | 4 | 11 | 10 |
| 50 | `spot08` | `spot08` | 118.1 | 7 | 12 | 9 |
| 51 | `hakadanch` | `hakadan_ch` | 117.4 | 3 | 4 | 3 |
| 52 | `golon` | `shop_golon` | 117.4 | 1 | 1 | 1 |
| 53 | `mizusin_bs` | `mizusin_boss` | 116.8 | 3 | 4 | 4 |
| 54 | `labo` | `labo` | 116.4 | 1 | 1 | 1 |
| 55 | `ice_doukutu` | `ice_doukutu` | 116.1 | 6 | 6 | 6 |
| 56 | `kinsuta` | `kinsuta` | 115.2 | 1 | 1 | 1 |
| 57 | `takaraya` | `takaraya` | 114.1 | 5 | 5 | 5 |
| 58 | `kakusiana` | `kakusiana` | 114.0 | 8 | 8 | 4 |
| 59 | `men` | `men` | 113.9 | 2 | 3 | 3 |
| 60 | `spot16` | `spot16` | 113.4 | 9 | 9 | 5 |
| 61 | `mahouya` | `mahouya` | 113.1 | 4 | 4 | 4 |
| 62 | `tent` | `tent` | 112.2 | 1 | 1 | 1 |
| 63 | `yousei_izumi_tate` | `yousei_izumi_tate` | 111.3 | 3 | 4 | 4 |
| 64 | `syatekijyou` | `syatekijyou` | 110.2 | 3 | 4 | 3 |
| 65 | `ganon_final` | `ganon_final` | 110.0 | 4 | 4 | 4 |
| 66 | `hiral_demo` | `hiral_demo` | 109.3 | 1 | 1 | 4 |
| 67 | `spot10` | `spot10` | 106.3 | 6 | 12 | 12 |
| 68 | `spot04` | `spot04` | 105.4 | 6 | 12 | 12 |
| 69 | `hakadan_bs` | `hakadan_boss` | 105.3 | 1 | 1 | 1 |
| 70 | `face_shop` | `shop_face` | 105.1 | 1 | 1 | 1 |
| 71 | `hidan` | `hidan` | 105.0 | 3 | 4 | 3 |
| 72 | `ganon_tou` | `ganon_tou` | 105.0 | 3 | 5 | 5 |
| 73 | `enrui` | `entra_ruins` | 104.1 | 1 | 1 | 1 |
| 74 | `shrine_n` | `shrine_n` | 103.1 | 1 | 1 | 1 |
| 75 | `bmori1` | `bmori1` | 103.1 | 9 | 13 | 6 |
| 76 | `hakaana_ouke` | `hakaana_ouke` | 102.6 | 4 | 4 | 4 |
| 77 | `jyasinzou` | `jyasinzou` | 102.4 | 3 | 4 | 3 |
| 78 | `turibori` | `turibori` | 101.2 | 6 | 12 | 8 |
| 79 | `bdan_boss` | `bdan_boss` | 99.4 | 3 | 4 | 3 |
| 80 | `shop1` | `shop` | 98.6 | 1 | 1 | 1 |
| 81 | `ddan` | `ddan` | 98.2 | 5 | 5 | 4 |
| 82 | `kakariko` | `kakariko` | 96.0 | 1 | 1 | 1 |
| 83 | `bowling` | `bowling` | 95.9 | 3 | 4 | 4 |
| 84 | `entra` | `entra_day` | 94.3 | 1 | 1 | 1 |
| 85 | `market_ruins` | `market_ruins` | 93.2 | 1 | 1 | 1 |
| 86 | `gerudoway` | `gerudoway` | 92.6 | 4 | 4 | 4 |
| 87 | `spot18` | `spot18` | 92.0 | 1 | 1 | 1 |
| 88 | `night_shop` | `shop_night` | 90.6 | 1 | 1 | 1 |
| 89 | `ddan_boss` | `ddan_boss` | 88.4 | 3 | 4 | 4 |
| 90 | `drag` | `shop_drag` | 88.4 | 1 | 1 | 1 |
| 91 | `hylia_labo` | `hylia_labo` | 88.3 | 4 | 4 | 4 |
| 92 | `alley_shop` | `shop_alley` | 88.1 | 1 | 1 | 1 |
| 93 | `hakaana` | `hakaana` | 87.3 | 3 | 4 | 4 |
| 94 | `kokiri_home` | `k_home` | 86.2 | 1 | 1 | 1 |
| 95 | `impa` | `kakariko_impa` | 80.8 | 1 | 1 | 1 |
| 96 | `market_alley` | `market_alley` | 77.8 | 1 | 1 | 1 |
| 97 | `shrine_r` | `shrine_r` | 76.1 | 1 | 1 | 1 |
| 98 | `hut` | `hut` | 73.0 | 1 | 1 | 1 |
| 99 | `market_alley_n` | `market_alley_n` | 65.0 | 0 | 1 | 1 |
| 100 | `kokiri_shop` | `shop` | 64.1 | 1 | 1 | 1 |
| 101 | `entra_n` | `entra_night` | 59.3 | 0 | 1 | 1 |

## Per-scene detail (top 20 most diverged)

### `ganontika` → OoT3D `ganontika`  (score 197.7)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 97 (HIGH) | 230 (HIGH) | 25 (MED) | 72 | 794 | MED (ratio=3.6) | [110, 0, 237] | [55, 30, 30] |
| 1 | 58 (HIGH) | 114 (HIGH) | 67 (HIGH) | 123 | 970 | HIGH (ratio=10.7) | [102, 0, 127] | [55, 30, 30] |
| 2 | 55 (HIGH) | 43 (HIGH) | 39 (HIGH) | 73 | 770 | low (ratio=1.0) | [136, 72, 72] | [55, 30, 30] |
| 3 | 46 (HIGH) | 74 (HIGH) | 69 (HIGH) | 80 | 199 | low (ratio=1.0) | [137, 0, 72] | [40, 40, 70] |
| 4 | 24 (MED) | 116 (HIGH) | 63 (HIGH) | 36 | 926 | low (ratio=1.0) | [70, 72, 72] | [105, 90, 90] |
| 5 | 68 (HIGH) | 72 (HIGH) | 142 (HIGH) | 76 | 784 | low (ratio=1.0) | [89, 72, 72] | [10, 10, 10] |
| 6 | 40 (HIGH) | 68 (HIGH) | 151 (HIGH) | 109 | 924 | low (ratio=1.0) | [64, 18, 69] | [10, 10, 10] |
| 7 | 33 (HIGH) | 136 (HIGH) | 66 (HIGH) | 45 | 189 | low (ratio=1.0) | [39, 18, 69] | [70, 86, 70] |
| 8 | 67 (HIGH) | 124 (HIGH) | 161 (HIGH) | 132 | 197 | low (ratio=1.0) | [70, 254, 92] | [105, 90, 90] |
| 9 | 68 (HIGH) | 54 (HIGH) | 110 (HIGH) | 93 | 784 | low (ratio=1.0) | [89, 72, 72] | [10, 10, 10] |
| 10 | 112 (HIGH) | 90 (HIGH) | 129 (HIGH) | 125 | 925 | low (ratio=1.0) | [64, 198, 103] | [10, 10, 10] |
| 11 | 50 (HIGH) | 192 (HIGH) | 106 (HIGH) | 101 | 200 | low (ratio=1.0) | [77, 198, 103] | [105, 90, 90] |
| 12 | 68 (HIGH) | 91 (HIGH) | 66 (HIGH) | 57 | 774 | low (ratio=1.0) | [89, 72, 72] | [10, 10, 10] |
| 13 | 58 (HIGH) | 125 (HIGH) | 133 (HIGH) | 113 | 938 | low (ratio=1.0) | [64, 58, 83] | [10, 10, 10] |
| 14 | 73 (HIGH) | 89 (HIGH) | 96 (HIGH) | 97 | 188 | low (ratio=1.0) | [77, 58, 83] | [0, 0, 0] |
| 15 | 10 (low) | 72 (HIGH) | 225 (HIGH) | 71 | 720 | low (ratio=1.0) | [0, 0, 0] | [10, 10, 10] |
| 16 | 51 (HIGH) | 84 (HIGH) | 113 (HIGH) | 97 | 926 | low (ratio=1.0) | [64, 49, 70] | [10, 10, 10] |
| 17 | 55 (HIGH) | 166 (HIGH) | 132 (HIGH) | 33 | 742 | low (ratio=1.0) | [77, 49, 70] | [10, 10, 10] |
| 18 | 117 (HIGH) | 46 (HIGH) | 167 (HIGH) | 56 | 922 | low (ratio=1.0) | [64, 203, 113] | [10, 10, 10] |
| 19 | 131 (HIGH) | 65 (HIGH) | 85 (HIGH) | 6 | 188 | low (ratio=1.0) | [77, 203, 113] | [0, 0, 0] |
| 20 | 10 (low) | 138 (HIGH) | 232 (HIGH) | 62 | 774 | low (ratio=1.0) | [0, 0, 0] | [10, 10, 10] |
| 21 | 67 (HIGH) | 59 (HIGH) | 139 (HIGH) | 52 | 916 | low (ratio=1.0) | [64, 111, 57] | [10, 10, 10] |
| 22 | 27 (MED) | 107 (HIGH) | 107 (HIGH) | 31 | 200 | low (ratio=1.0) | [77, 111, 57] | [105, 90, 90] |
| 23 | 17 (MED) | 48 (HIGH) | 33 (HIGH) | 50 | 200 | low (ratio=1.0) | [89, 72, 72] | [105, 90, 90] |
| 24 | 17 (MED) | 48 (HIGH) | 33 (HIGH) | 50 | 200 | low (ratio=1.0) | [89, 72, 72] | [105, 90, 90] |
| 25 | 39 (HIGH) | 40 (HIGH) | 79 (HIGH) | 50 | 970 | MED (ratio=3.2) | [89, 72, 72] | [55, 30, 30] |

### `tokinoma` → OoT3D `tokinoma`  (score 192.1)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 191 (HIGH) | 200 (HIGH) | 46 (HIGH) | 59 | 988 | low (ratio=1.0) | [236, 255, 233] | [50, 50, 50] |
| 1 | 62 (HIGH) | 65 (HIGH) | 11 (low) | 67 | 196 | low (ratio=1.0) | [115, 7, 127] | [50, 50, 50] |
| 2 | 72 (HIGH) | 156 (HIGH) | 27 (MED) | 72 | 516 | low (ratio=1.0) | [163, 0, 112] | [60, 60, 60] |
| 3 | 52 (HIGH) | 109 (HIGH) | 38 (HIGH) | 81 | 996 | low (ratio=1.0) | [141, 7, 72] | [50, 50, 50] |
| 4 | 79 (HIGH) | 211 (HIGH) | 27 (MED) | 45 | 20 | low (ratio=1.0) | [102, 7, 127] | [0, 0, 0] |
| 5 | 50 (HIGH) | 255 (HIGH) | 93 (HIGH) | 62 | 185 | low (ratio=1.0) | [0, 0, 0] | [50, 50, 50] |
| 6 | 112 (HIGH) | 125 (HIGH) | 80 (HIGH) | 97 | 194 | low (ratio=1.0) | [49, 244, 190] | [50, 50, 50] |
| 7 | 131 (HIGH) | 95 (HIGH) | 60 (HIGH) | 101 | 194 | low (ratio=1.0) | [49, 244, 190] | [30, 30, 30] |
| 8 | 60 (HIGH) | 183 (HIGH) | 57 (HIGH) | 81 | 194 | low (ratio=1.0) | [29, 207, 37] | [60, 60, 40] |
| 9 | 57 (HIGH) | 116 (HIGH) | 73 (HIGH) | 70 | 176 | low (ratio=1.0) | [40, 207, 37] | [60, 60, 40] |
| 10 | 57 (HIGH) | 116 (HIGH) | 130 (HIGH) | 70 | 194 | low (ratio=1.0) | [40, 207, 37] | [60, 60, 40] |
| 11 | 57 (HIGH) | 116 (HIGH) | 85 (HIGH) | 72 | 194 | low (ratio=1.0) | [40, 207, 37] | [70, 70, 40] |
| 12 | 64 (HIGH) | 147 (HIGH) | 65 (HIGH) | 75 | 200 | low (ratio=1.0) | [40, 202, 90] | [60, 60, 60] |

### `ganon_boss` → OoT3D `ganon_boss`  (score 185.3)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 47 (HIGH) | 127 (HIGH) | 4 (low) | 73 | 700 | MED (ratio=2.4) | [0, 0, 92] | [30, 20, 0] |
| 1 | 84 (HIGH) | 122 (HIGH) | 137 (HIGH) | 107 | 945 | low (ratio=1.5) | [102, 32, 127] | [0, 10, 0] |
| 2 | 74 (HIGH) | 85 (HIGH) | 101 (HIGH) | 62 | 196 | low (ratio=1.5) | [77, 72, 72] | [0, 0, 0] |
| 3 | 63 (HIGH) | 21 (MED) | 101 (HIGH) | 42 | 910 | HIGH (ratio=5.6) | [0, 42, 112] | [65, 30, 0] |
| 4 | 54 (HIGH) | 117 (HIGH) | 80 (HIGH) | 92 | 910 | low (ratio=1.0) | [39, 117, 48] | [65, 30, 0] |
| 5 | 134 (HIGH) | 69 (HIGH) | 72 (HIGH) | 66 | 700 | low (ratio=1.0) | [153, 76, 172] | [0, 0, 0] |
| 6 | 133 (HIGH) | 95 (HIGH) | 193 (HIGH) | 63 | 880 | low (ratio=1.0) | [8, 236, 155] | [0, 0, 0] |
| 7 | 130 (HIGH) | 103 (HIGH) | 82 (HIGH) | 91 | 750 | low (ratio=1.0) | [0, 236, 155] | [30, 30, 0] |
| 8 | 96 (HIGH) | 101 (HIGH) | 63 (HIGH) | 60 | 620 | low (ratio=1.0) | [51, 21, 169] | [150, 90, 50] |
| 9 | 73 (HIGH) | 132 (HIGH) | 82 (HIGH) | 87 | 158 | low (ratio=1.0) | [102, 59, 59] | [0, 0, 0] |
| 10 | 59 (HIGH) | 121 (HIGH) | 165 (HIGH) | 108 | 890 | low (ratio=1.0) | [13, 139, 0] | [50, 50, 50] |
| 11 | 65 (HIGH) | 85 (HIGH) | 255 (HIGH) | 1 | 600 | low (ratio=1.0) | [255, 0, 0] | [140, 0, 80] |
| 12 | 37 (HIGH) | 134 (HIGH) | 111 (HIGH) | 11 | 720 | low (ratio=1.0) | [18, 0, 32] | [60, 0, 100] |
| 13 | 37 (HIGH) | 139 (HIGH) | 210 (HIGH) | 92 | 870 | low (ratio=1.0) | [100, 0, 32] | [20, 20, 20] |
| 14 | 136 (HIGH) | 64 (HIGH) | 194 (HIGH) | 77 | 870 | low (ratio=1.0) | [39, 243, 187] | [20, 20, 20] |
| 15 | 61 (HIGH) | 90 (HIGH) | 94 (HIGH) | 80 | 970 | low (ratio=1.0) | [51, 79, 165] | [60, 60, 10] |
| 16 | 72 (HIGH) | 165 (HIGH) | 148 (HIGH) | 57 | 850 | low (ratio=1.0) | [26, 0, 133] | [60, 60, 10] |

### `ganon_demo` → OoT3D `ganon_demo`  (score 178.6)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 52 (HIGH) | 82 (HIGH) | 42 (HIGH) | 67 | 779 | MED (ratio=2.5) | [62, 4, 89] | [0, 0, 0] |
| 1 | 82 (HIGH) | 186 (HIGH) | 205 (HIGH) | 135 | 974 | MED (ratio=4.0) | [102, 32, 127] | [0, 10, 5] |
| 2 | 129 (HIGH) | 149 (HIGH) | 52 (HIGH) | 98 | 974 | MED (ratio=4.0) | [204, 108, 89] | [0, 10, 5] |
| 3 | 134 (HIGH) | 66 (HIGH) | 137 (HIGH) | 50 | 980 | MED (ratio=2.5) | [204, 139, 58] | [0, 0, 0] |
| 4 | 68 (HIGH) | 67 (HIGH) | 45 (HIGH) | 83 | 590 | MED (ratio=2.5) | [77, 111, 46] | [15, 10, 5] |
| 5 | 78 (HIGH) | 25 (MED) | 23 (MED) | 75 | 195 | MED (ratio=2.5) | [77, 111, 46] | [0, 0, 0] |
| 6 | 40 (HIGH) | 83 (HIGH) | 52 (HIGH) | 111 | 585 | MED (ratio=2.5) | [0, 65, 55] | [15, 10, 5] |
| 7 | 109 (HIGH) | 78 (HIGH) | 27 (MED) | 80 | 196 | MED (ratio=2.5) | [77, 152, 127] | [15, 10, 5] |
| 8 | 93 (HIGH) | 83 (HIGH) | 172 (HIGH) | 111 | 230 | MED (ratio=4.0) | [5, 213, 75] | [0, 10, 5] |
| 9 | 109 (HIGH) | 153 (HIGH) | 98 (HIGH) | 42 | 579 | MED (ratio=2.5) | [77, 190, 201] | [65, 50, 25] |
| 10 | 92 (HIGH) | 77 (HIGH) | 216 (HIGH) | 75 | 969 | MED (ratio=2.5) | [77, 167, 72] | [22, 16, 2] |
| 11 | 30 (HIGH) | 138 (HIGH) | 129 (HIGH) | 14 | 979 | MED (ratio=2.5) | [1, 0, 56] | [22, 16, 2] |
| 12 | 54 (HIGH) | 84 (HIGH) | 115 (HIGH) | 43 | 849 | MED (ratio=2.5) | [32, 133, 29] | [135, 100, 55] |

### `kenjyanoma` → OoT3D `kenjyanoma`  (score 158.1)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 109 (HIGH) | 119 (HIGH) | 116 (HIGH) | 60 | 556 | low (ratio=1.0) | [6, 0, 2] | [110, 90, 136] |
| 1 | 49 (HIGH) | 172 (HIGH) | 183 (HIGH) | 24 | 560 | low (ratio=1.0) | [160, 138, 128] | [110, 90, 80] |
| 2 | 120 (HIGH) | 141 (HIGH) | 173 (HIGH) | 140 | 560 | low (ratio=1.0) | [160, 138, 128] | [26, 24, 17] |
| 3 | 88 (HIGH) | 136 (HIGH) | 180 (HIGH) | 142 | 556 | low (ratio=1.0) | [160, 138, 128] | [42, 66, 54] |
| 4 | 62 (HIGH) | 132 (HIGH) | 142 (HIGH) | 56 | 556 | low (ratio=1.0) | [160, 138, 128] | [81, 66, 94] |
| 5 | 62 (HIGH) | 132 (HIGH) | 142 (HIGH) | 63 | 556 | low (ratio=1.0) | [160, 138, 128] | [81, 66, 94] |

### `spot02` → OoT3D `spot02`  (score 158.0)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 59 (HIGH) | 46 (HIGH) | 32 (HIGH) | 68 | 950 | MED (ratio=2.5) | [149, 1, 55] | [85, 80, 90] |
| 1 | 64 (HIGH) | 53 (HIGH) | 15 (MED) | 99 | 796 | MED (ratio=2.5) | [79, 72, 72] | [140, 145, 130] |
| 2 | 22 (MED) | 106 (HIGH) | 28 (MED) | 84 | 953 | MED (ratio=2.5) | [119, 72, 72] | [77, 65, 55] |
| 3 | 33 (HIGH) | 105 (HIGH) | 40 (HIGH) | 104 | 945 | MED (ratio=2.5) | [89, 72, 72] | [35, 45, 53] |
| 4 | 40 (HIGH) | 91 (HIGH) | 88 (HIGH) | 51 | 197 | low (ratio=1.0) | [140, 72, 72] | [65, 50, 50] |
| 5 | 69 (HIGH) | 79 (HIGH) | 18 (MED) | 43 | 199 | low (ratio=1.0) | [49, 0, 0] | [86, 76, 95] |
| 6 | 43 (HIGH) | 60 (HIGH) | 37 (HIGH) | 63 | 197 | low (ratio=1.0) | [94, 0, 0] | [75, 50, 60] |
| 7 | 47 (HIGH) | 28 (MED) | 17 (MED) | 45 | 195 | low (ratio=1.0) | [59, 0, 0] | [35, 45, 73] |
| 8 | 36 (HIGH) | 52 (HIGH) | 46 (HIGH) | 39 | 197 | low (ratio=1.0) | [73, 0, 0] | [65, 50, 50] |
| 9 | 69 (HIGH) | 79 (HIGH) | 18 (MED) | 43 | 199 | low (ratio=1.0) | [49, 0, 0] | [86, 76, 95] |
| 10 | 43 (HIGH) | 60 (HIGH) | 37 (HIGH) | 63 | 197 | low (ratio=1.0) | [94, 0, 0] | [75, 50, 60] |
| 11 | 47 (HIGH) | 28 (MED) | 17 (MED) | 45 | 195 | low (ratio=1.0) | [59, 0, 0] | [35, 45, 73] |
| 12 | 24 (MED) | 8 (low) | 27 (MED) | 51 | 194 | low (ratio=1.0) | [73, 0, 0] | [0, 0, 0] |
| 13 | 45 (HIGH) | 98 (HIGH) | 157 (HIGH) | 61 | 194 | low (ratio=1.0) | [0, 18, 123] | [5, 5, 5] |
| 14 | 108 (HIGH) | 209 (HIGH) | 83 (HIGH) | 86 | 194 | low (ratio=1.0) | [5, 221, 99] | [0, 0, 0] |
| 15 | 40 (HIGH) | 42 (HIGH) | 90 (HIGH) | 51 | 194 | low (ratio=1.0) | [0, 18, 123] | [10, 10, 20] |
| 16 | 82 (HIGH) | 153 (HIGH) | 94 (HIGH) | 116 | 197 | low (ratio=1.0) | [19, 236, 29] | [29, 30, 60] |
| 17 | 40 (HIGH) | 61 (HIGH) | 13 (low) | 53 | 197 | low (ratio=1.0) | [59, 38, 141] | [29, 30, 60] |
| 18 | 66 (HIGH) | 78 (HIGH) | 53 (HIGH) | 37 | 200 | low (ratio=1.0) | [59, 38, 141] | [140, 145, 130] |
| 19 | 86 (HIGH) | 44 (HIGH) | 54 (HIGH) | 174 | 194 | low (ratio=1.0) | [130, 72, 72] | [5, 5, 5] |
| 20 | 76 (HIGH) | 71 (HIGH) | 80 (HIGH) | 89 | 198 | low (ratio=1.0) | [5, 221, 99] | [96, 92, 92] |

### `ganontikasonogo` → OoT3D `ganontikasonogo`  (score 157.3)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 120 (HIGH) | 119 (HIGH) | 72 (HIGH) | 74 | 192 | low (ratio=1.0) | [250, 1, 192] | [70, 45, 57] |
| 1 | 19 (MED) | 45 (HIGH) | 41 (HIGH) | 109 | 192 | low (ratio=1.0) | [56, 72, 72] | [80, 50, 60] |
| 2 | 15 (MED) | 44 (HIGH) | 33 (HIGH) | 107 | 192 | low (ratio=1.0) | [59, 72, 72] | [90, 70, 60] |
| 3 | 18 (MED) | 144 (HIGH) | 20 (MED) | 100 | 199 | low (ratio=1.0) | [59, 72, 72] | [40, 40, 70] |
| 4 | 58 (HIGH) | 71 (HIGH) | 105 (HIGH) | 36 | 960 | MED (ratio=2.5) | [70, 72, 72] | [30, 10, 0] |
| 5 | 32 (HIGH) | 89 (HIGH) | 208 (HIGH) | 13 | 960 | low (ratio=1.0) | [102, 72, 72] | [50, 50, 50] |

### `yousei_izumi_yoko` → OoT3D `yousei_izumi_yoko`  (score 155.8)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 108 (HIGH) | 120 (HIGH) | 85 (HIGH) | 55 | 196 | low (ratio=1.0) | [20, 0, 5] | [150, 100, 100] |
| 1 | 15 (MED) | 42 (HIGH) | 102 (HIGH) | 105 | 850 | low (ratio=1.0) | [128, 88, 88] | [150, 100, 100] |
| 2 | 42 (HIGH) | 96 (HIGH) | 239 (HIGH) | 157 | 193 | low (ratio=1.0) | [90, 4, 39] | [10, 10, 0] |
| 3 | 51 (HIGH) | 120 (HIGH) | 118 (HIGH) | 75 | 199 | low (ratio=1.0) | [128, 88, 88] | [40, 40, 70] |
| 4 | 65 (HIGH) | 54 (HIGH) | 115 (HIGH) | 35 | 184 | low (ratio=1.0) | [70, 72, 72] | [10, 10, 0] |
| 5 | 59 (HIGH) | 95 (HIGH) | 119 (HIGH) | 91 | 184 | low (ratio=1.0) | [0, 88, 88] | [10, 10, 0] |
| 6 | 59 (HIGH) | 82 (HIGH) | 217 (HIGH) | 93 | 184 | low (ratio=1.0) | [0, 88, 88] | [10, 10, 0] |

### `link_home` → OoT3D `link`  (score 155.1)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 77 (HIGH) | 237 (HIGH) | 151 (HIGH) | 69 | 592 | low (ratio=1.0) | [0, 0, 142] | [70, 60, 40] |

### `ganon_sonogo` → OoT3D `ganon_sonogo`  (score 152.7)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 63 (HIGH) | 139 (HIGH) | 49 (HIGH) | 55 | 196 | low (ratio=1.0) | [186, 4, 44] | [50, 50, 50] |
| 1 | 51 (HIGH) | 91 (HIGH) | 54 (HIGH) | 86 | 955 | low (ratio=1.6) | [49, 72, 72] | [30, 10, 0] |
| 2 | 83 (HIGH) | 153 (HIGH) | 29 (MED) | 28 | 925 | low (ratio=1.6) | [90, 72, 127] | [30, 10, 0] |
| 3 | 83 (HIGH) | 101 (HIGH) | 85 (HIGH) | 32 | 192 | low (ratio=1.0) | [90, 72, 127] | [30, 10, 0] |
| 4 | 31 (HIGH) | 89 (HIGH) | 222 (HIGH) | 13 | 192 | low (ratio=1.0) | [0, 72, 72] | [50, 50, 50] |

### `kokiri_home3` → OoT3D `k_home3`  (score 148.6)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 60 (HIGH) | 223 (HIGH) | 162 (HIGH) | 70 | 752 | low (ratio=1.0) | [0, 0, 100] | [70, 60, 50] |

### `spot07` → OoT3D `spot07`  (score 145.1)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 76 (HIGH) | 108 (HIGH) | 44 (HIGH) | 111 | 590 | low (ratio=1.0) | [0, 0, 57] | [105, 90, 90] |
| 1 | 17 (MED) | 54 (HIGH) | 54 (HIGH) | 81 | 590 | low (ratio=1.0) | [119, 72, 72] | [105, 90, 90] |
| 2 | 18 (MED) | 136 (HIGH) | 127 (HIGH) | 75 | 590 | low (ratio=1.0) | [124, 72, 72] | [105, 90, 90] |
| 3 | 17 (MED) | 132 (HIGH) | 134 (HIGH) | 81 | 590 | low (ratio=1.0) | [119, 72, 72] | [105, 90, 90] |
| 4 | 30 (HIGH) | 97 (HIGH) | 94 (HIGH) | 80 | 938 | low (ratio=1.0) | [119, 72, 72] | [75, 90, 100] |
| 5 | 37 (HIGH) | 109 (HIGH) | 145 (HIGH) | 38 | 938 | low (ratio=1.0) | [140, 72, 72] | [75, 90, 100] |
| 6 | 37 (HIGH) | 95 (HIGH) | 182 (HIGH) | 38 | 938 | low (ratio=1.0) | [140, 72, 72] | [75, 90, 100] |
| 7 | 37 (HIGH) | 95 (HIGH) | 182 (HIGH) | 38 | 938 | low (ratio=1.0) | [140, 72, 72] | [75, 90, 100] |
| 8 | 32 (HIGH) | 42 (HIGH) | 65 (HIGH) | 47 | 945 | low (ratio=1.0) | [140, 72, 72] | [100, 100, 100] |
| 9 | 70 (HIGH) | 177 (HIGH) | 85 (HIGH) | 25 | 945 | low (ratio=1.0) | [109, 0, 0] | [100, 100, 100] |
| 10 | 77 (HIGH) | 106 (HIGH) | 96 (HIGH) | 18 | 945 | low (ratio=1.0) | [130, 0, 0] | [100, 100, 100] |
| 11 | 70 (HIGH) | 103 (HIGH) | 102 (HIGH) | 25 | 945 | low (ratio=1.0) | [109, 0, 0] | [100, 100, 100] |

### `moribossroom` → OoT3D `moriboss`  (score 142.8)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 109 (HIGH) | 99 (HIGH) | 61 (HIGH) | 77 | 740 | low (ratio=1.0) | [63, 255, 32] | [8, 8, 8] |
| 1 | 81 (HIGH) | 54 (HIGH) | 221 (HIGH) | 60 | 936 | low (ratio=1.0) | [104, 38, 101] | [0, 0, 0] |
| 2 | 86 (HIGH) | 21 (MED) | 63 (HIGH) | 97 | 140 | low (ratio=1.0) | [25, 72, 184] | [8, 8, 8] |
| 3 | 99 (HIGH) | 58 (HIGH) | 59 (HIGH) | 101 | 555 | low (ratio=1.0) | [40, 184, 72] | [0, 0, 0] |

### `market_night` → OoT3D `market_night`  (score 141.9)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 88 (HIGH) | 176 (HIGH) | 162 (HIGH) | 50 | 592 | HIGH (ratio=10.0) | [154, 2, 136] | [25, 25, 25] |

### `daiyousei_izumi` → OoT3D `daiyousei_izumi`  (score 140.9)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 70 (HIGH) | 115 (HIGH) | 120 (HIGH) | 55 | 960 | low (ratio=1.0) | [20, 0, 1] | [60, 60, 110] |
| 1 | 59 (HIGH) | 91 (HIGH) | 53 (HIGH) | 70 | 850 | low (ratio=1.0) | [110, 4, 39] | [60, 60, 110] |
| 2 | 48 (HIGH) | 74 (HIGH) | 229 (HIGH) | 105 | 200 | low (ratio=1.0) | [110, 4, 39] | [10, 10, 0] |
| 3 | 55 (HIGH) | 86 (HIGH) | 178 (HIGH) | 46 | 952 | low (ratio=1.0) | [137, 94, 88] | [100, 110, 200] |
| 4 | 77 (HIGH) | 117 (HIGH) | 176 (HIGH) | 59 | 956 | low (ratio=1.0) | [149, 0, 127] | [100, 110, 200] |

### `kokiri_home5` → OoT3D `k_home5`  (score 140.7)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 60 (HIGH) | 187 (HIGH) | 175 (HIGH) | 63 | 592 | low (ratio=1.0) | [0, 0, 101] | [70, 60, 50] |

### `fire_bs` → OoT3D `fire_bs`  (score 139.1)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 30 (HIGH) | 149 (HIGH) | 79 (HIGH) | 71 | 703 | low (ratio=1.0) | [200, 0, 11] | [120, 0, 0] |
| 1 | 44 (HIGH) | 120 (HIGH) | 135 (HIGH) | 96 | 590 | low (ratio=1.0) | [25, 0, 127] | [20, 0, 0] |
| 2 | 44 (HIGH) | 84 (HIGH) | 94 (HIGH) | 74 | 583 | low (ratio=1.0) | [25, 0, 127] | [20, 0, 0] |
| 3 | 134 (HIGH) | 111 (HIGH) | 93 (HIGH) | 95 | 900 | low (ratio=1.0) | [25, 44, 127] | [255, 0, 0] |

### `spot11` → OoT3D `spot11`  (score 138.8)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 118 (HIGH) | 80 (HIGH) | 49 (HIGH) | 52 | 217 | low (ratio=1.6) | [0, 0, 255] | [86, 84, 70] |
| 1 | 63 (HIGH) | 30 (MED) | 63 (HIGH) | 58 | 268 | low (ratio=1.6) | [51, 72, 72] | [145, 135, 105] |
| 2 | 34 (HIGH) | 144 (HIGH) | 99 (HIGH) | 50 | 233 | low (ratio=1.6) | [104, 72, 72] | [135, 120, 95] |
| 3 | 18 (MED) | 113 (HIGH) | 53 (HIGH) | 74 | 193 | low (ratio=1.6) | [10, 72, 72] | [30, 40, 70] |
| 4 | 35 (HIGH) | 102 (HIGH) | 125 (HIGH) | 51 | 938 | low (ratio=1.6) | [130, 72, 72] | [60, 40, 70] |
| 5 | 68 (HIGH) | 173 (HIGH) | 111 (HIGH) | 61 | 938 | low (ratio=1.6) | [61, 0, 0] | [75, 90, 100] |
| 6 | 53 (HIGH) | 121 (HIGH) | 55 (HIGH) | 51 | 938 | low (ratio=1.6) | [99, 0, 0] | [60, 40, 80] |
| 7 | 53 (HIGH) | 78 (HIGH) | 86 (HIGH) | 73 | 938 | low (ratio=1.6) | [40, 0, 0] | [0, 40, 80] |
| 8 | 67 (HIGH) | 104 (HIGH) | 47 (HIGH) | 20 | 788 | low (ratio=1.6) | [79, 0, 0] | [96, 92, 92] |
| 9 | 59 (HIGH) | 98 (HIGH) | 13 (low) | 50 | 588 | low (ratio=1.6) | [79, 0, 0] | [95, 80, 80] |
| 10 | 56 (HIGH) | 55 (HIGH) | 69 (HIGH) | 31 | 786 | low (ratio=1.6) | [109, 0, 0] | [80, 70, 70] |
| 11 | 54 (HIGH) | 60 (HIGH) | 30 (MED) | 55 | 946 | low (ratio=1.6) | [68, 0, 0] | [70, 70, 90] |

### `spot09` → OoT3D `spot09`  (score 136.7)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 112 (HIGH) | 71 (HIGH) | 77 (HIGH) | 106 | 225 | low (ratio=1.0) | [0, 0, 255] | [76, 80, 75] |
| 1 | 55 (HIGH) | 34 (HIGH) | 36 (HIGH) | 58 | 268 | low (ratio=1.0) | [51, 72, 72] | [127, 119, 115] |
| 2 | 27 (MED) | 109 (HIGH) | 69 (HIGH) | 50 | 235 | low (ratio=1.0) | [104, 72, 72] | [125, 128, 75] |
| 3 | 31 (HIGH) | 87 (HIGH) | 53 (HIGH) | 74 | 190 | low (ratio=1.0) | [25, 72, 72] | [64, 87, 110] |
| 4 | 38 (HIGH) | 101 (HIGH) | 125 (HIGH) | 58 | 210 | low (ratio=1.0) | [140, 72, 72] | [60, 40, 70] |
| 5 | 68 (HIGH) | 173 (HIGH) | 111 (HIGH) | 61 | 250 | low (ratio=1.0) | [61, 0, 0] | [75, 90, 100] |
| 6 | 53 (HIGH) | 121 (HIGH) | 55 (HIGH) | 51 | 218 | low (ratio=1.0) | [99, 0, 0] | [60, 40, 80] |
| 7 | 57 (HIGH) | 78 (HIGH) | 86 (HIGH) | 73 | 178 | low (ratio=1.0) | [51, 0, 0] | [0, 40, 80] |
| 8 | 39 (HIGH) | 104 (HIGH) | 47 (HIGH) | 20 | 258 | low (ratio=1.0) | [104, 0, 0] | [50, 25, 37] |
| 9 | 59 (HIGH) | 98 (HIGH) | 13 (low) | 50 | 258 | low (ratio=1.0) | [79, 0, 0] | [95, 80, 80] |
| 10 | 26 (MED) | 55 (HIGH) | 69 (HIGH) | 31 | 260 | low (ratio=1.0) | [109, 0, 0] | [100, 70, 0] |
| 11 | 41 (HIGH) | 60 (HIGH) | 30 (MED) | 55 | 260 | low (ratio=1.0) | [73, 0, 0] | [20, 20, 50] |

### `ganon` → OoT3D `ganon`  (score 135.3)

| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |
|------|-------|---------|---------|---------|-----------|------------|--------------|------------|
| 0 | 35 (HIGH) | 177 (HIGH) | 51 (HIGH) | 73 | 196 | low (ratio=1.0) | [12, 3, 29] | [50, 50, 50] |
| 1 | 34 (HIGH) | 47 (HIGH) | 34 (HIGH) | 86 | 735 | low (ratio=1.0) | [49, 72, 72] | [30, 30, 30] |
| 2 | 123 (HIGH) | 73 (HIGH) | 49 (HIGH) | 101 | 120 | MED (ratio=3.2) | [108, 224, 127] | [30, 30, 30] |
| 3 | 104 (HIGH) | 104 (HIGH) | 91 (HIGH) | 167 | 173 | low (ratio=1.0) | [157, 77, 77] | [0, 0, 0] |
| 4 | 58 (HIGH) | 147 (HIGH) | 106 (HIGH) | 93 | 45 | low (ratio=1.0) | [0, 77, 77] | [60, 30, 10] |
| 5 | 85 (HIGH) | 43 (HIGH) | 38 (HIGH) | 97 | 45 | low (ratio=1.0) | [51, 217, 77] | [30, 30, 30] |
| 6 | 84 (HIGH) | 152 (HIGH) | 19 (MED) | 77 | 545 | MED (ratio=0.3) | [39, 179, 77] | [85, 50, 0] |
| 7 | 68 (HIGH) | 115 (HIGH) | 69 (HIGH) | 93 | 780 | low (ratio=1.0) | [26, 184, 26] | [70, 40, 10] |
| 8 | 75 (HIGH) | 114 (HIGH) | 54 (HIGH) | 88 | 780 | low (ratio=1.0) | [115, 32, 127] | [40, 10, 0] |
| 9 | 61 (HIGH) | 73 (HIGH) | 72 (HIGH) | 88 | 780 | low (ratio=1.0) | [115, 32, 127] | [30, 30, 30] |
| 10 | 84 (HIGH) | 53 (HIGH) | 25 (MED) | 97 | 570 | low (ratio=1.0) | [153, 32, 127] | [20, 20, 20] |

## Coverage

- OoT3D scenes: 114
- N64 scenes:   101
- Compared:     101
- OoT3D scenes with no N64 match (14): `bdan_dd`, `bmori1_dd`, `ddan_dd`, `ganontika_dd`, `hakadan_ch_dd`, `hakadan_dd`, `hidan_dd`, `ice_doukutu_dd`, `jyasinzou_dd`, `kokiri`, `men_dd`, `mizusin_dd`, `spot99`, `ydan_dd`

---
*Generated by oot3d-decomp/tools/lighting_parity.py*
