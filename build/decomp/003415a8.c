// OoT3D decomp @ 003415a8  name=FUN_003415a8  size=1544

undefined4 FUN_003415a8(int param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  ushort *puVar6;
  short *psVar7;
  bool bVar8;
  bool bVar9;

  cVar2 = *(char *)(DAT_00341a40 + param_2);
  sVar3 = *(short *)(param_2 + 0x104);
  cVar1 = *(char *)(DAT_00341a48 + 0xe);
  if (sVar3 == 5) {
    if (cVar2 == '\n') {
      uVar4 = param_2;
      if (cVar1 == '\x01') {
        uVar4 = (uint)*(byte *)(param_1 + 0x82c);
      }
      if (cVar1 == '\x01' && uVar4 == 4) {
        for (psVar5 = *(short **)(param_2 + 0x20a4); psVar5 != (short *)0x0;
            psVar5 = *(short **)(psVar5 + 0x98)) {
          bVar9 = false;
          if (*psVar5 == 0x1a0) {
            bVar9 = DAT_00341a80 == *(float *)(psVar5 + 4);
          }
          bVar8 = false;
          if (bVar9) {
            bVar8 = DAT_00341a84 == *(float *)(psVar5 + 6);
          }
          bVar9 = false;
          if (bVar8) {
            bVar9 = DAT_00341a88 == *(float *)(psVar5 + 8);
          }
          if (bVar9) {
            return 1;
          }
        }
      }
    }
    else if (cVar2 == '\f') {
      uVar4 = param_2;
      if (cVar1 == '\x01') {
        uVar4 = (uint)*(byte *)(param_1 + 0x82c);
      }
      if (cVar1 == '\x01' && uVar4 == 8) {
        for (psVar5 = *(short **)(param_2 + 0x20a4); psVar5 != (short *)0x0;
            psVar5 = *(short **)(psVar5 + 0x98)) {
          bVar9 = false;
          if (*psVar5 == 0x1a0) {
            bVar9 = DAT_00341bfc == *(float *)(psVar5 + 4);
          }
          bVar8 = false;
          if (bVar9) {
            bVar8 = DAT_00341c00 == *(float *)(psVar5 + 6);
          }
          bVar9 = false;
          if (bVar8) {
            bVar9 = DAT_00341c04 == *(float *)(psVar5 + 8);
          }
          if (bVar9) {
            return 1;
          }
        }
      }
    }
    else {
      bVar9 = cVar2 == '\x14' && cVar1 == '\x01';
      if (cVar2 == '\x14' && cVar1 == '\x01') {
        bVar9 = *(char *)(param_1 + 0x82c) == '\x01';
      }
      if (bVar9) {
        psVar7 = *(short **)(param_2 + 0x20a4);
        for (psVar5 = psVar7; psVar5 != (short *)0x0; psVar5 = *(short **)(psVar5 + 0x98)) {
          bVar9 = false;
          if (*psVar5 == 0x1a0) {
            bVar9 = DAT_00341c08 == *(float *)(psVar5 + 4);
          }
          bVar8 = false;
          if (bVar9) {
            bVar8 = DAT_00341c0c == *(float *)(psVar5 + 6);
          }
          bVar9 = false;
          if (bVar8) {
            bVar9 = DAT_00341c10 == *(float *)(psVar5 + 8);
          }
          if (bVar9) goto joined_r0x00341b6c;
        }
      }
    }
    goto LAB_00341bc0;
  }
  uVar4 = param_2;
  if (sVar3 < 6) {
    if (sVar3 == 0) {
      bVar9 = cVar2 == '\0' && cVar1 == '\x01';
      if (cVar2 == '\0' && cVar1 == '\x01') {
        bVar9 = *(char *)(param_1 + 0x82c) == '\x02';
      }
      if (bVar9) {
        for (puVar6 = *(ushort **)(param_2 + 0x20a4); puVar6 != (ushort *)0x0;
            puVar6 = *(ushort **)(puVar6 + 0x98)) {
          uVar4 = (uint)*puVar6;
          bVar9 = uVar4 == 0x1a0;
          if (bVar9) {
            uVar4 = (uint)(short)puVar6[0xe];
          }
          if (bVar9 && uVar4 == 0xffffffff) {
            return 1;
          }
        }
      }
      goto LAB_00341bc0;
    }
    if (sVar3 != 1) {
      if (sVar3 != 2) goto LAB_00341bc0;
      if (cVar2 == '\x0e') {
        if (cVar1 == '\x01') {
          uVar4 = (uint)*(byte *)(param_1 + 0x82c);
        }
        if (cVar1 != '\x01' || uVar4 != 1) goto LAB_00341bc0;
        psVar5 = *(short **)(param_2 + 0x20d4);
        uVar4 = 0;
        if (psVar5 != (short *)0x0) {
          do {
            uVar4 = (uint)*psVar5;
            bVar9 = uVar4 == DAT_00341a4c;
            if (bVar9) {
              uVar4 = (uint)*(byte *)(psVar5 + 0xe8);
            }
            if (bVar9 && uVar4 == 1) {
              return 1;
            }
            psVar5 = *(short **)(psVar5 + 0x98);
          } while (psVar5 != (short *)0x0);
          uVar4 = 0;
        }
      }
      else if (cVar2 == '\f') {
        if (cVar1 != '\x01') goto LAB_00341bc0;
        if (*(char *)(param_1 + 0x82c) == '\0') {
          psVar5 = *(short **)(&DAT_000020cc + param_2);
          uVar4 = 0;
          if (psVar5 != (short *)0x0) {
            do {
              if ((*psVar5 == 0x127) &&
                 ((int)SQRT((*(float *)(psVar5 + 4) - DAT_00341a54) *
                            (*(float *)(psVar5 + 4) - DAT_00341a54) +
                            (*(float *)(psVar5 + 6) - DAT_00341a58) *
                            (*(float *)(psVar5 + 6) - DAT_00341a58) +
                            (*(float *)(psVar5 + 8) - DAT_00341a5c) *
                            (*(float *)(psVar5 + 8) - DAT_00341a5c)) < DAT_00341a44)) {
LAB_00341808:
                *(undefined1 *)(param_1 + 0x82d) = 0x3c;
                return 1;
              }
              psVar5 = *(short **)(psVar5 + 0x98);
            } while (psVar5 != (short *)0x0);
            uVar4 = 0;
          }
        }
        else {
          if (*(char *)(param_1 + 0x82c) != '\x04') goto LAB_00341bc0;
          for (psVar5 = *(short **)(&DAT_000020cc + param_2); uVar4 = 0, psVar5 != (short *)0x0;
              psVar5 = *(short **)(psVar5 + 0x98)) {
            if ((*psVar5 == 0x127) &&
               ((int)SQRT((*(float *)(psVar5 + 4) - DAT_00341a60) *
                          (*(float *)(psVar5 + 4) - DAT_00341a60) +
                          (*(float *)(psVar5 + 6) - DAT_00341a64) *
                          (*(float *)(psVar5 + 6) - DAT_00341a64) +
                          (*(float *)(psVar5 + 8) - DAT_00341a68) *
                          (*(float *)(psVar5 + 8) - DAT_00341a68)) < DAT_00341a44))
            goto LAB_00341808;
          }
        }
      }
      goto LAB_00341828;
    }
LAB_003418d4:
    if (cVar2 == '\x06') {
      if (cVar1 != '\x01') goto LAB_00341bc0;
LAB_003418e4:
      if (*(char *)(param_1 + 0x82c) != '\x10') goto LAB_00341bc0;
      for (psVar5 = *(short **)(param_2 + 0x20a4); uVar4 = 0, psVar5 != (short *)0x0;
          psVar5 = *(short **)(psVar5 + 0x98)) {
        bVar9 = false;
        if (*psVar5 == 0x1a0) {
          bVar9 = DAT_00341a70 == *(float *)(psVar5 + 4);
        }
        bVar8 = false;
        if (bVar9) {
          bVar8 = DAT_00341a74 == *(float *)(psVar5 + 6);
        }
        bVar9 = false;
        if (bVar8) {
          bVar9 = DAT_00341a78 == *(float *)(psVar5 + 8);
        }
        if (bVar9) {
          return 1;
        }
      }
    }
  }
  else if (sVar3 == 8) {
LAB_00341828:
    if (cVar2 == '\x06') {
      if (cVar1 != '\x01') goto LAB_00341bc0;
      if (*(char *)(param_1 + 0x82c) == '\x02') {
        for (psVar5 = *(short **)(param_2 + 0x20a4); uVar4 = 0, psVar5 != (short *)0x0;
            psVar5 = *(short **)(psVar5 + 0x98)) {
          if ((*psVar5 == 0x9d) &&
             ((int)SQRT((*(float *)(psVar5 + 0x14) - *DAT_00341a6c) *
                        (*(float *)(psVar5 + 0x14) - *DAT_00341a6c) +
                        (*(float *)(psVar5 + 0x16) - DAT_00341a6c[1]) *
                        (*(float *)(psVar5 + 0x16) - DAT_00341a6c[1]) +
                        (*(float *)(psVar5 + 0x18) - DAT_00341a6c[2]) *
                        (*(float *)(psVar5 + 0x18) - DAT_00341a6c[2])) < DAT_00341a44)) {
            return 1;
          }
        }
        goto LAB_003418d4;
      }
      goto LAB_003418e4;
    }
  }
  else if (sVar3 != 9) {
    if (sVar3 == 0x60) {
      if (*(char *)(param_1 + 0x82c) == '\b') {
        for (psVar5 = *(short **)(&DAT_000020cc + param_2); psVar5 != (short *)0x0;
            psVar5 = *(short **)(psVar5 + 0x98)) {
          uVar4 = (uint)*psVar5;
          bVar9 = uVar4 == DAT_00341a50;
          if (bVar9) {
            uVar4 = (uint)(ushort)psVar5[0xe];
          }
          if (bVar9 && uVar4 == 9) {
            return 1;
          }
        }
      }
      else if (*(char *)(param_1 + 0x82c) == '\x10') {
        for (psVar5 = *(short **)(&DAT_000020cc + param_2); psVar5 != (short *)0x0;
            psVar5 = *(short **)(psVar5 + 0x98)) {
          uVar4 = (uint)*psVar5;
          bVar9 = uVar4 == DAT_00341a50;
          if (bVar9) {
            uVar4 = (uint)(ushort)psVar5[0xe];
          }
          if (bVar9 && uVar4 == 0x1a) {
            return 1;
          }
        }
      }
    }
    goto LAB_00341bc0;
  }
  if (cVar2 == '\x05') {
    if (cVar1 == '\x01') {
      uVar4 = (uint)*(byte *)(param_1 + 0x82c);
    }
    if (cVar1 == '\x01' && uVar4 == 4) {
      for (psVar5 = *(short **)(&DAT_000020cc + param_2); psVar5 != (short *)0x0;
          psVar5 = *(short **)(psVar5 + 0x98)) {
        if ((*psVar5 == 0x1b4) && (*(short *)(DAT_00341a7c + (int)psVar5) != 0)) {
          return 1;
        }
      }
    }
  }
  else {
    bVar9 = cVar2 == '\t' && cVar1 == '\x01';
    if (cVar2 == '\t' && cVar1 == '\x01') {
      bVar9 = *(char *)(param_1 + 0x82c) == '\x02';
    }
    if (bVar9) {
      for (psVar5 = *(short **)(param_2 + 0x20a4); psVar5 != (short *)0x0;
          psVar5 = *(short **)(psVar5 + 0x98)) {
        if (*psVar5 == 0xef) {
          return 1;
        }
      }
    }
  }
LAB_00341bc0:
  cVar1 = *(char *)(param_1 + 0x82d);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x82d) = cVar1 + -1, cVar1 != '\x01')) {
    return 1;
  }
  return 0;
joined_r0x00341b6c:
  for (; psVar7 != (short *)0x0; psVar7 = *(short **)(psVar7 + 0x98)) {
    bVar9 = false;
    if (*psVar7 == 0x1a0) {
      bVar9 = DAT_00341c08 == *(float *)(psVar7 + 4);
    }
    bVar8 = false;
    if (bVar9) {
      bVar8 = DAT_00341c0c == *(float *)(psVar7 + 6);
    }
    bVar9 = false;
    if (bVar8) {
      bVar9 = DAT_00341c14 == *(float *)(psVar7 + 8);
    }
    if (bVar9) {
      return 1;
    }
  }
  goto LAB_00341bc0;
}
