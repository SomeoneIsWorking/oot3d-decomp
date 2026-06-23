# Scene Readiness Checklist — Lighting × Actor Coverage

Cross-reference of lighting divergence (vs OoT3D ground truth) and actor
CSAB/animmap coverage for the top lighting-diverged scenes. Higher **combo**
score = more urgent: large lighting gap AND actors not yet fully mapped.

**Columns:**
- **LightScore**: mean ambient+light-color delta (0–255 scale); higher = worse
- **Actors**: total_spawns / unique_named_types
- **Mapped**: actor types with ZAR + CSAB + animmap entries
- **Unmapped%**: percent of actor types lacking full CSAB binding
- **Combo**: LightScore × (0.5 + 0.5×UnmappedFrac) — primary sort key
- **Top unmapped actors**: highest-spawn actors missing animmap (name×count,status)

| Rank | Scene (N64) | OoT3D key | LightScore | Actors | Mapped | Unmapped% | Combo | Top unmapped |
|------|-------------|-----------|-----------|--------|--------|-----------|-------|-------------|
| 2 | `tokinoma` | `tokinoma` | 192.1 | 30/20 | 2 | 90% | **182.5** | Demo_Effect(×6,no-ZAR); Bg_Toki_Hikari(×4,no-CSAB); Demo_Kankyo(×3,no-ZAR); En_Wood02(×1,no-CSAB) |
| 3 | `ganon_boss` | `ganon_boss` | 185.3 | 71/11 | 1 | 91% | **176.9** | Bg_Ganon_Otyuka(×45,CSAB-unmapped); Obj_Tsubo(×17,no-ZAR); Obj_Oshihiki(×1,no-ZAR); En_River_Sound(×1,no-ZAR) |
| 4 | `ganon_demo` | `ganon_demo` | 178.6 | 32/10 | 1 | 90% | **169.7** | Demo_Gj(×13,no-CSAB); Demo_Gt(×11,no-CSAB); En_Wonder_Talk2(×1,no-ZAR); #6179(×1,no-ZAR) |
| 1 | `ganontika` | `ganontika` | 197.7 | 267/63 | 19 | 70% | **167.9** | En_Light(×37,no-ZAR); Bg_Ice_Turara(×25,no-CSAB); En_G_Switch(×24,no-ZAR); Bg_Gnd_Darkmeiro(×20,no-CSAB) |
| 6 | `spot02` | `spot02` | 158.0 | 84/32 | 1 | 97% | **155.5** | Obj_Syokudai(×26,no-CSAB); Bg_Haka(×17,no-CSAB); Bg_Spot02_Objects(×4,CSAB-unmapped); Obj_Hana(×3,no-ZAR) |
| 7 | `ganontikasonogo` | `ganontikasonogo` | 157.3 | 24/11 | 1 | 91% | **150.2** | En_Fire_Rock(×7,no-CSAB); En_Light(×3,no-ZAR); En_Zl3(×2,CSAB-unmapped); En_River_Sound(×2,no-ZAR) |
| 11 | `kokiri_home3` | `k_home3` | 148.6 | 4/3 | 0 | 100% | **148.6** | En_Ko(×2,no-ZAR); Player(×1,no-ZAR); Obj_Tsubo(×1,no-ZAR) |
| 10 | `ganon_sonogo` | `ganon_sonogo` | 152.7 | 87/12 | 1 | 92% | **146.3** | En_Fire_Rock(×41,no-CSAB); En_Light(×12,no-ZAR); Obj_Tsubo(×9,no-ZAR); En_Zl3(×5,CSAB-unmapped) |
| 9 | `link_home` | `link` | 155.1 | 9/7 | 1 | 86% | **144.0** | #29434(×2,no-ZAR); #1424(×2,no-ZAR); Player(×1,no-ZAR); Obj_Tsubo(×1,no-ZAR) |
| 17 | `fire_bs` | `fire_bs` | 139.1 | 4/4 | 0 | 100% | **139.1** | En_River_Sound(×1,no-ZAR); En_Arow_Trap(×1,no-ZAR); Bg_Pushbox(×1,no-ZAR); #1424(×1,no-ZAR) |
| 8 | `yousei_izumi_yoko` | `yousei_izumi_yoko` | 155.8 | 9/7 | 2 | 71% | **133.5** | En_Light(×2,no-ZAR); Player(×1,no-ZAR); En_Okarina_Tag(×1,no-ZAR); #4096(×1,no-ZAR) |
| 15 | `daiyousei_izumi` | `daiyousei_izumi` | 140.9 | 8/7 | 1 | 86% | **130.8** | En_Light(×2,no-ZAR); Player(×1,no-ZAR); En_Okarina_Tag(×1,no-ZAR); En_OE2(×1,no-ZAR) |
| 18 | `spot11` | `spot11` | 138.8 | 46/25 | 5 | 80% | **124.9** | En_Wonder_Item(×6,no-ZAR); Bg_Spot02_Objects(×5,CSAB-unmapped); Obj_Mure2(×2,no-ZAR); En_Ishi(×2,no-ZAR) |
| 19 | `spot09` | `spot09` | 136.7 | 48/27 | 5 | 81% | **124.0** | En_Ishi(×7,no-ZAR); Obj_Kibako2(×6,no-CSAB); Bg_Spot09_Obj(×5,no-CSAB); En_River_Sound(×3,no-ZAR) |
| 12 | `spot07` | `spot07` | 145.1 | 44/20 | 6 | 70% | **123.3** | Obj_Syokudai(×8,no-CSAB); Obj_Tsubo(×4,no-ZAR); Obj_Comb(×3,no-ZAR); En_Kanban(×3,no-CSAB) |
| 14 | `market_night` | `market_night` | 141.9 | 35/15 | 4 | 73% | **123.0** | En_Kusa(×8,no-ZAR); Obj_Kibako2(×4,no-CSAB); En_Wonder_Item(×2,no-ZAR); #25443(×2,no-ZAR) |
| 23 | `spot00` | `spot00` | 133.1 | 82/22 | 4 | 82% | **121.0** | En_Wood02(×27,no-CSAB); Door_Ana(×8,no-ZAR); Obj_Mure2(×7,no-ZAR); En_A_Obj(×7,no-ZAR) |
| 20 | `ganon` | `ganon` | 135.3 | 78/17 | 4 | 76% | **119.4** | En_Light(×21,no-ZAR); Obj_Tsubo(×17,no-ZAR); En_River_Sound(×8,no-ZAR); Player(×3,no-ZAR) |
| 16 | `kokiri_home5` | `k_home5` | 140.7 | 6/3 | 1 | 67% | **117.2** | En_Item00(×3,no-ZAR); En_Ko(×1,no-ZAR) |
| 27 | `hairal_niwa` | `hairal_niwa` | 128.9 | 13/5 | 1 | 80% | **116.0** | Player(×1,no-ZAR); En_River_Sound(×1,no-ZAR); #5276(×1,no-ZAR); #1820(×1,no-ZAR) |
| 24 | `spot01` | `spot01` | 130.7 | 65/30 | 7 | 77% | **115.5** | Obj_Tsubo(×11,no-ZAR); En_Kusa(×8,no-ZAR); Obj_Kibako2(×5,no-CSAB); En_Ishi(×3,no-ZAR) |
| 26 | `mizusin` | `mizusin` | 129.2 | 207/40 | 9 | 78% | **114.7** | Obj_Tsubo(×21,no-ZAR); Bg_Mizu_Movebg(×15,CSAB-unmapped); Obj_Switch(×11,no-ZAR); En_Ny(×11,no-CSAB) |
| 28 | `spot05` | `spot05` | 128.4 | 31/14 | 4 | 71% | **110.1** | En_Wonder_Item(×6,no-ZAR); Bg_Spot05_Soko(×5,no-CSAB); En_Gs(×3,no-CSAB); Door_Ana(×2,no-ZAR) |
| 30 | `hakadan` | `hakadan` | 127.0 | 242/55 | 15 | 73% | **109.7** | Obj_Tsubo(×21,no-ZAR); En_G_Switch(×18,no-ZAR); Bg_Haka_Trap(×14,no-CSAB); Bg_Haka_Megane(×13,no-ZAR) |
| 25 | `zoora` | `zoora` | 130.1 | 3/3 | 1 | 67% | **108.4** | Mir_Ray(×1,no-CSAB); En_Ossan(×1,no-ZAR) |
| 13 | `moribossroom` | `moriboss` | 142.8 | 2/2 | 1 | 50% | **107.1** | #2088(×1,no-ZAR) |
| 21 | `jyasinboss` | `jyasinzou_boss` | 134.4 | 29/12 | 5 | 58% | **106.4** | Bg_Jya_Ironobj(×7,no-CSAB); En_Light(×6,no-ZAR); Player(×1,no-ZAR); En_Arow_Trap(×1,no-ZAR) |
| 5 | `kenjyanoma` | `kenjyanoma` | 158.1 | 10/10 | 7 | 30% | **102.8** | Magic_Dark(×1,no-ZAR); Demo_Effect(×1,no-ZAR); Bg_Haka_Trap(×1,no-CSAB) |
| 29 | `spot20` | `spot20` | 127.4 | 30/14 | 6 | 57% | **100.1** | Obj_Tsubo(×7,no-ZAR); En_River_Sound(×2,no-ZAR); Obj_Kibako2(×1,no-CSAB); En_Wood02(×1,no-CSAB) |
| 22 | `malon_stable` | `stable` | 133.3 | 9/5 | 4 | 20% | **80.0** | En_Part(×1,no-ZAR) |

---

_Generated by `tools/scene_readiness.py`. Sources: `data/lighting_parity_report.md`, `data/scene_actors/`, `soh3d/tools/skeldata/animmap.json`, `soh3d/tools/skeldata/csab_catalog.json`, `soh3d_object_zars.inc`, `soh3d_animmap.inc`._
