// OoT3D decomp @ 00496438  name=FUN_00496438  size=752

void FUN_00496438(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint extraout_r2;
  uint uVar7;
  bool bVar8;
  float fVar9;
  undefined4 local_3c;
  float local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  float local_2c;

  iVar4 = FUN_003518dc();
  iVar2 = DAT_00496734;
  iVar5 = DAT_00496730;
  if (iVar4 == 0) {
    sVar1 = *(short *)(param_1 + 0x2238);
    if (sVar1 == 0) {
      FUN_0036b4ec(param_1 + 0x254,param_2);
      if ((*(short *)(param_1 + 0x12a6) == 0) ||
         (sVar1 = *(short *)(param_1 + 0x12a6) + -1, *(short *)(param_1 + 0x12a6) = sVar1,
         sVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x221c) = DAT_00496728;
        *(undefined2 *)(param_1 + 0x2238) = 1;
      }
    }
    else if (*(short *)(param_1 + 0x224a) == 0) {
      if (*(char *)(param_1 + 0x2237) == '\0') {
        local_2c = *(float *)(DAT_00496730 + 0x2c) * DAT_0049672c;
        iVar5 = FUN_0034dd3c(param_2,param_1,&local_2c,0xffffffff);
        if (iVar5 < 0x1e) {
          *(undefined1 *)(param_1 + 0x2237) = 1;
          *(undefined4 *)(param_1 + 0x12c8) = *(undefined4 *)(param_1 + 0x12d4);
          *(undefined4 *)(param_1 + 0x12d0) = *(undefined4 *)(param_1 + 0x12dc);
          *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x20000000;
        }
      }
      else {
        local_2c = DAT_0049672c;
        uVar6 = 0x14;
        if ((*(uint *)(param_1 + 0x1710) & 1) == 0) {
          if (sVar1 < 0) {
            *(short *)(param_1 + 0x2238) = sVar1 + 1;
            local_2c = *(float *)(iVar2 + 0x144);
            uVar6 = 0xffffffff;
          }
        }
        else {
          local_2c = *(float *)(DAT_00496734 + 0x144);
          if (*(int *)(DAT_00496730 + 0x38) != 0) {
            fVar9 = (float)FUN_002cfca0((int)*(short *)(DAT_00496730 + 2));
            fVar3 = DAT_00496738;
            *(float *)(param_1 + 0x12c8) = *(float *)(param_1 + 0x28) + fVar9 * DAT_00496738;
            fVar9 = (float)FUN_00338f60((int)*(short *)(iVar5 + 2));
            *(float *)(param_1 + 0x12d0) = *(float *)(param_1 + 0x30) + fVar9 * fVar3;
          }
        }
        iVar5 = FUN_0034dd3c(param_2,param_1,&local_2c,uVar6);
        fVar3 = DAT_0049673c;
        if (*(short *)(param_1 + 0x2238) != 0) {
          bVar8 = false;
          if (iVar5 == 0) {
            bVar8 = *(float *)(param_1 + 0x221c) == DAT_0049673c;
          }
          if ((!bVar8) ||
             (iVar5 = FUN_0036c5bc(param_2,0), (*(ushort *)(iVar5 + 0x194) & 0x10) == 0))
          goto LAB_0049668c;
        }
        FUN_0036c5bc(param_2,0);
        FUN_0036ae48();
        if (*(char *)(DAT_00496740 + 3) == '\0') {
          FUN_0036c494(param_2,0,DAT_00496744);
        }
        *(undefined1 *)(DAT_00496748 + 0x503) = 0;
        iVar5 = FUN_00354f70(param_1,param_2);
        if (iVar5 == 0) {
          if (*(float *)(param_1 + 0x221c) == fVar3) {
            FUN_0036b2d4(DAT_0049674c,param_1,param_2);
          }
          else {
            FUN_002c3c7c(param_1,param_2);
          }
        }
      }
    }
    else {
      *(short *)(param_1 + 0x224a) = *(short *)(param_1 + 0x224a) + -1;
    }
  }
LAB_0049668c:
  if ((*(uint *)(param_1 + 0x1710) & 0x800) != 0) {
    FUN_0034cc78(param_1,param_2);
  }
  local_3c = *(undefined4 *)(param_1 + 0x28);
  uStack_34 = *(undefined4 *)(param_1 + 0x30);
  local_38 = *(float *)(param_1 + 0x10c) + DAT_00496750;
  FUN_00316c18(param_2,param_2 + 0xa98,&local_2c,auStack_30,param_1,&local_3c);
  if (local_2c != 0.0) {
    bVar8 = *(char *)(param_1 + 2) == '\x02';
    uVar7 = extraout_r2;
    if (bVar8) {
      uVar7 = (uint)*(byte *)(param_1 + 0x81);
    }
    if (bVar8 && uVar7 == 0x32) {
      uVar6 = FUN_002c1e10(param_2 + 0xa98);
      FUN_0032b13c(param_2,uVar6);
    }
  }
  return;
}
