// OoT3D decomp @ 00142ad8  name=FUN_00142ad8  size=944

void FUN_00142ad8(int param_1,int param_2)

{
  float *pfVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_60 [12];
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  float local_38;

  iVar5 = DAT_00142e70;
  uVar7 = *(undefined4 *)(DAT_00142e70 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x420);
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x141;
  iVar3 = FUN_0036b4ec(param_1 + 0x254);
  if (iVar3 == 0) {
    if (*(short *)(param_1 + 0x2238) == 0) {
      iVar3 = FUN_0036b1e0(DAT_00142e74,param_1 + 0x254);
      if (iVar3 != 0) {
        if (*(char *)(param_1 + 2) == '\x02') {
          FUN_0036f59c(param_1,DAT_00142e78 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
        }
        else {
          FUN_0036aeb4(param_1 + 0x28);
        }
      }
    }
    else {
      FUN_00360a1c(param_1,DAT_00142e7c);
    }
  }
  else {
    FUN_00359aa0(param_1 + 0x254,param_2,uVar7);
    *(undefined2 *)(param_1 + 0x2238) = 1;
  }
  fVar10 = DAT_00142e8c;
  fVar9 = DAT_00142e84;
  iVar3 = DAT_00142e80;
  FUN_003598c8(DAT_00142e8c,
               *(float *)(*(int *)(param_1 + 0x170c) + 0x38) + *(float *)(DAT_00142e80 + 0xa8),
               DAT_00142e88,param_2,param_1);
  iVar4 = FUN_003597dc(param_2,param_1);
  if (iVar4 == 0) {
    FUN_0036b3f4(param_1,&local_38,&local_3c,param_2);
    sVar2 = (short)local_3c - *(short *)(param_1 + 0xbe);
    if (sVar2 < 0) {
      sVar2 = -sVar2;
    }
    fVar8 = (float)FUN_00338f60((int)sVar2);
    local_38 = local_38 * fVar8;
    uVar6 = (uint)(local_38 != fVar9);
    if ((local_38 != fVar9) && (fVar8 <= fVar9)) {
      uVar6 = 0xffffffff;
    }
    if ((int)uVar6 < 1) {
      if (uVar6 == 0) {
        uVar7 = *(undefined4 *)(iVar5 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x438);
        iVar5 = FUN_0035976c(param_2,param_1,DAT_00142e94);
        if (iVar5 == 0) {
          FUN_0036055c(param_2,param_1,DAT_00142e98,0);
        }
        FUN_003604f0(param_1 + 0x254,param_2,uVar7);
        *(float *)(param_1 + 0x6c) = fVar9;
        *(float *)(param_1 + 0x221c) = fVar9;
        iVar5 = DAT_00142ea0;
        uVar7 = DAT_00142e9c;
        *(undefined1 *)(param_1 + 0x1749) = 0;
        *(undefined4 *)(iVar5 + 0xcc) = uVar7;
        *(undefined1 *)(iVar5 + 0xd4) = 0;
        sVar2 = *(short *)(param_1 + 0x82) + -0x8000;
        *(short *)(param_1 + 0x2220) = sVar2;
        *(short *)(param_1 + 0xbe) = sVar2;
      }
      else {
        *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x10;
      }
    }
    else {
      FUN_0036055c(param_2,param_1,DAT_00142e90,0);
      *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x10;
      FUN_003604f0(param_1 + 0x254,param_2,0x74);
    }
  }
  if ((*(uint *)(param_1 + 0x1714) & 0x10) == 0) {
    return;
  }
  if (((*(uint *)(iVar3 + 0x120) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_00142ea4), pfVar1 = DAT_00142eac, fVar8 = DAT_00142ea8, iVar5 != 0))
  {
    *DAT_00142eac = fVar9;
    pfVar1[1] = fVar10;
    pfVar1[2] = fVar8;
  }
  fVar9 = (float)FUN_003596d0(param_2,param_1,DAT_00142eac,auStack_40);
  if ((int)ABS(fVar9 - *(float *)(param_1 + 0x2c)) < DAT_00142eb0) {
    fVar10 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar9 = DAT_00142eb4;
    fVar10 = fVar10 * DAT_00142eb4;
    fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    local_54 = *(float *)(param_1 + 0x28) + fVar10;
    local_4c = *(float *)(param_1 + 0x30) + fVar8 * fVar9;
    local_50 = local_3c;
    iVar5 = FUN_00369f9c(param_2 + 0xa98,&local_54,auStack_40,auStack_60,auStack_44,1,0,0,1,
                         auStack_48);
    uVar7 = DAT_00142eb8;
    if (iVar5 == 0) {
      if (*(char *)(param_1 + 0x80) == '2') {
        return;
      }
      iVar5 = FUN_00359690(param_2 + 0xa98);
      if (iVar5 == 0) {
        return;
      }
      FUN_00359678(uVar7,iVar5,(int)*(short *)(param_1 + 0x36));
      return;
    }
  }
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & 0xffffffef;
  return;
}
