// OoT3D decomp @ 004bba4c  name=FUN_004bba4c  size=1888

void FUN_004bba4c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 extraout_s0;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined auStack_44 [4];
  undefined auStack_40 [4];
  
  fVar14 = DAT_004bbd9c;
  if (*(char *)(DAT_004bbd98 + 0x3b) < ')') {
    iVar6 = FUN_003518cc(param_1);
    uVar9 = extraout_s0;
    if (iVar6 != 0) {
      uVar9 = DAT_004bbda0;
    }
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x70) = uVar9;
    }
  }
  else {
    *(float *)(param_1 + 0x70) = DAT_004bbd9c;
  }
  FUN_0036b3f4(fVar14,param_1,auStack_40,auStack_44,param_2);
  uVar9 = DAT_004bbdb0;
  puVar2 = DAT_004bbdac;
  iVar1 = DAT_004bbda8;
  iVar6 = DAT_004bbda4;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    uVar9 = *(undefined4 *)(DAT_004bbda8 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x198);
    if ((*(uint *)(param_1 + 0x1714) & 0x80000) == 0) {
      if (*(int *)(param_1 + 0x284) == 0x6b) {
        uVar9 = DAT_004bc214;
        if (((*(uint *)(param_1 + 0x29b8) & 0x200) == 0) &&
           (((*(char *)(param_1 + 0x174e) != '\x01' || (*DAT_004bc210 < 'Q')) ||
            ((*(uint *)(param_1 + 0x29b8) & 0x400) != 0)))) {
          uVar9 = 0x6a;
        }
      }
      else {
        iVar7 = FUN_003518cc(param_1);
        if (iVar7 != 0) {
          *(float *)(param_1 + 0x2260) = fVar14;
          uVar9 = 0x1e0;
        }
        if (iVar7 != 0) {
          *(float *)(param_1 + 0x225c) = fVar14;
        }
        else if (*(short *)(param_1 + 0x2282) < 0x51) {
          uVar9 = *(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x1b0);
        }
        else if (*(short *)(param_1 + 0x2282) < 800) {
          bVar12 = *(char *)((uint)*(byte *)(param_1 + 0x222a) + param_1 + 0x2231) == '\0';
          if (bVar12) {
            bVar12 = (*(uint *)(param_1 + 0x1710) & 0x800) == 0;
          }
          if (bVar12) {
            FUN_0036055c(param_2,param_1,DAT_004bc218,0);
            FUN_00358dfc(*(float *)(iVar6 + 0x2c) * DAT_004bc21c,param_1 + 0x254,param_2,
                         *(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x1c8));
            return;
          }
        }
      }
    }
    else {
      iVar6 = FUN_003518cc(param_1);
      iVar7 = DAT_004bc20c + *(char *)(param_1 + 0x2237) * 0xc;
      if (iVar6 == 0) {
        uVar9 = *(undefined4 *)(iVar7 + 4);
      }
      else {
        uVar9 = *(undefined4 *)(iVar7 + 8);
      }
    }
    iVar6 = FUN_002bc420(param_2,param_1);
    if (0 < iVar6) {
      uVar9 = *(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x198);
      if ((*(uint *)(param_1 + 0x1710) & 0x800) != 0) {
        uVar9 = DAT_004bc220;
      }
      uVar5 = FUN_0033f7ac(param_1,uVar9,param_2);
      if (iVar6 != 1) {
        uVar5 = 0x14;
      }
      *(undefined4 *)(param_1 + 0x29c) = DAT_004bc224;
      if (iVar6 == 1) {
        uVar5 = 10;
      }
      *(undefined2 *)(param_1 + 0x2238) = uVar5;
      return;
    }
    if (iVar6 != 0) {
      return;
    }
    FUN_0033f7ac(param_1,uVar9,param_2);
    FUN_002c3d18(param_2,param_1,DAT_004bc228,1);
    return;
  }
  if ((*(uint *)(param_1 + 0x1710) & 0x800) == 0) goto LAB_004bbc04;
  if (*(short **)(param_1 + 0x1224) != (short *)0x0) {
    if ((**(short **)(param_1 + 0x1224) != 0x19) ||
       ((((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) &
          (*DAT_004bbdb4 | *DAT_004bbdac | *DAT_004bbdb8 | *DAT_004bbdbc | 0x2000)) == 0 &&
         (iVar7 = FUN_00349504(), iVar7 == 0)) && (iVar7 = FUN_003494f4(), iVar7 == 0))))
    goto LAB_004bbc04;
    iVar7 = *(int *)(param_1 + 0x1224);
    fVar13 = *(float *)(param_1 + 0x221c) + DAT_004bbdc0;
    fVar15 = *(float *)(param_1 + 100) + DAT_004bbdc0;
    if (iVar7 != 0) {
      *(undefined2 *)(iVar7 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      *(float *)(iVar7 + 0x6c) = fVar13;
      *(float *)(iVar7 + 100) = fVar15;
      FUN_0036aef0(param_2,param_1);
      FUN_0036f59c(param_1,DAT_004bbdc4);
      if (*(char *)(param_1 + 2) == '\x02') {
        FUN_0036f59c(param_1,DAT_004bbdc8 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
      }
      else {
        FUN_0036aeb4(param_1 + 0x28);
      }
      goto LAB_004bbc04;
    }
  }
  FUN_0036b0fc(param_2,param_1);
  FUN_0036b02c(param_2,param_1);
  FUN_0036b2d4(uVar9,param_1,param_2);
LAB_004bbc04:
  FUN_0036b4ec(param_1 + 0x254,param_2);
  if ((*(uint *)(param_1 + 0x1714) & 0x80000) == 0) {
    FUN_002bc618(param_1,auStack_40,auStack_44);
  }
  FUN_0034cc78(param_1,param_2);
  FUN_002c3e34(param_1,param_2);
  cVar3 = *(char *)(param_1 + 0x228a) + '\x01';
  *(char *)(param_1 + 0x228a) = cVar3;
  if ('d' < cVar3) {
    *(undefined *)(param_1 + 0x228a) = 0;
  }
  uVar10 = DAT_004bbdd0;
  uVar9 = DAT_004bbdcc;
  if (((((*(uint *)(param_1 + 0x1714) & 0x80000) == 0) || (*(char *)(param_1 + 0x2237) != '\x02'))
      && (('\x05' < *(char *)(param_1 + 0x228a) &&
          (((*(uint *)(param_1 + 0x1710) & 0x400000) == 0 &&
           (iVar7 = FUN_0033100c(param_1), iVar7 != 0)))))) &&
     (((*(int *)(iVar6 + 0x4c) != 0 ||
       ((*(char *)(param_1 + 2) != '\x02' &&
        ((*puVar2 & *(uint *)(*(int *)(param_1 + 0x29c8) + 4)) != 0)))) &&
      (*(int *)(iVar6 + 0x28) != 7)))) {
    FUN_00330efc(uVar9,uVar10,param_2,param_1,0x11);
  }
  else {
    uVar9 = DAT_004bbdd4;
    if (*(float *)(param_1 + 100) < fVar14) {
      sVar4 = *(short *)(param_1 + 0x2238);
      if (sVar4 < 0) {
        if (((sVar4 == -1) && (0x78 < *(short *)(param_1 + 0x2282))) &&
           (DAT_004bc1f4 < *(int *)(iVar6 + 0x3c))) {
          *(undefined2 *)(param_1 + 0x2238) = 0xfffe;
          if (*(char *)(param_1 + 2) == '\x02') {
            FUN_0036f59c(param_1,DAT_004bc1f8 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4)
                        );
          }
          else {
            FUN_0036aeb4(param_1 + 0x28);
          }
          psVar8 = *(short **)(param_1 + 0x1224);
          if ((psVar8 != (short *)0x0) && (*psVar8 == 0xa1)) {
            FUN_00375bcc(psVar8,uVar9);
          }
        }
        if ((((*(ushort *)(param_1 + 0x90) & 0x200) != 0) &&
            ((*(uint *)(param_1 + 0x1714) & 0x80000) == 0)) &&
           (((*(uint *)(param_1 + 0x1710) & DAT_004bc1fc) == 0 &&
            (fVar13 = *(float *)(param_1 + 0x221c),
            fVar13 != fVar14 && fVar13 < fVar14 == (NAN(fVar13) || NAN(fVar14)))))) {
          fVar14 = *(float *)(param_1 + 0x2270);
          bVar12 = fVar14 == DAT_004bc200;
          if ((int)DAT_004bc200 <= (int)fVar14) {
            bVar12 = *(char *)((uint)*(byte *)(param_1 + 0x222a) + param_1 + 0x2231) == '\0';
          }
          if (bVar12) {
            FUN_0035150c(param_1,param_2,*(undefined4 *)(iVar6 + 0x34));
          }
          else if ((1 < *(byte *)(param_1 + 0x2278)) && ((int)fVar14 < (int)DAT_004bc200)) {
            fVar14 = (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84)) + fVar14;
            fVar13 = *(float *)(*(int *)(param_1 + 0x170c) + 8) * DAT_004bc204;
            if (fVar14 != fVar13 && fVar14 < fVar13 == (NAN(fVar14) || NAN(fVar13))) {
              FUN_00330ed8(param_2);
              if ((*(uint *)(param_1 + 0x1710) & 4) != 0) {
                if (*(char *)(param_1 + 2) == '\x02') {
                  FUN_0036f59c(param_1,DAT_004bc208 +
                                       (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
                }
                else {
                  FUN_0036aeb4(param_1 + 0x28);
                }
              }
              uVar9 = *(undefined4 *)(param_1 + 0x28);
              uVar10 = *(undefined4 *)(param_1 + 0x2c);
              uVar11 = *(undefined4 *)(param_1 + 0x30);
              *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x2270)
              ;
              iVar6 = FUN_0033ebfc(*(undefined4 *)(param_1 + 0x2274),param_2,param_1,
                                   *(undefined4 *)(param_1 + 0x78),*(undefined *)(param_1 + 0x80),0,
                                   *(undefined4 *)
                                    (iVar1 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x468));
              if (iVar6 == 0) {
                sVar4 = *(short *)(param_1 + 0x2220) + -0x8000;
                *(short *)(param_1 + 0x2220) = sVar4;
                *(short *)(param_1 + 0xbe) = sVar4;
                *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x2000;
              }
              else {
                *(undefined4 *)(param_1 + 0x28) = uVar9;
                *(undefined4 *)(param_1 + 0x2c) = uVar10;
                *(undefined4 *)(param_1 + 0x30) = uVar11;
                *(short *)(param_1 + 0x2220) = *(short *)(param_1 + 0x2220) + -0x8000;
                *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + -0x8000;
              }
            }
          }
        }
      }
      else if ((((*(ushort *)(param_1 + 0x90) & 8) != 0) || (sVar4 == 0)) ||
              (0 < *(short *)(param_1 + 0x2282))) {
        bVar12 = *(int *)(iVar6 + 0x3c) == DAT_004bbdd8;
        if (*(int *)(iVar6 + 0x3c) <= DAT_004bbdd8) {
          bVar12 = (*(uint *)(param_1 + 0x1710) & 4) == 0;
        }
        if (!bVar12) {
          if (*(char *)(param_1 + 2) == '\x02') {
            FUN_0036f59c(param_1,DAT_004bbddc + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4)
                        );
          }
          else {
            FUN_0036aeb4(param_1 + 0x28);
          }
          psVar8 = *(short **)(param_1 + 0x1224);
          if ((psVar8 != (short *)0x0) && (*psVar8 == 0xa1)) {
            FUN_00375bcc(psVar8,uVar9);
          }
          *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xfffffffb;
        }
        *(undefined2 *)(param_1 + 0x2238) = 0xffff;
      }
    }
  }
  return;
}

