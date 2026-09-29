// OoT3D decomp @ 002accc4  name=FUN_002accc4  size=1224

void FUN_002accc4(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;

  iVar7 = DAT_002ad010;
  uVar3 = DAT_002ad00c;
  uVar2 = DAT_002ad008;
  *(ushort *)(param_1 + 0x1c0) = *(ushort *)(param_1 + 0x1c) & 0xff;
  uVar6 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) >> 8;
  *(undefined4 *)(param_1 + 0xfc) = uVar2;
  uVar2 = DAT_002ad014;
  if (uVar6 == 0) {
    FUN_00372f38(param_1,param_2,param_1 + 0x238,2,0);
    FUN_003510b0(param_1,DAT_002ad018);
    FUN_003532e8(param_1,0);
    uVar2 = FUN_00353fd4(param_1,param_2,0);
    uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
    if (*(int *)(iVar7 + 4) != 0) {
LAB_002acea8:
      *(undefined4 *)(param_1 + 0x1bc) = DAT_002ad020;
      return;
    }
    iVar4 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c0));
    if (iVar4 == 0) {
      uVar6 = *(uint *)(iVar7 + 4);
      bVar8 = uVar6 != 0;
      if (!bVar8) {
        uVar6 = (uint)*(ushort *)(iVar7 + 0xef8);
      }
      if ((bVar8 || (uVar6 & 0x200) != 0) || (*(int *)(iVar7 + 0x14e8) < 4)) goto LAB_002acea8;
      *(undefined2 *)(param_1 + 0x1c0) = 0x1f;
      FUN_00375c10(param_2,0x1f);
    }
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + DAT_002ad01c;
LAB_002ad18c:
    *(undefined4 *)(param_1 + 0x1bc) = uVar3;
    return;
  }
  if (uVar6 != 1) {
    if (uVar6 == 2) {
      *(undefined4 *)(param_1 + 0x244) = DAT_002ad1c4;
      uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x23c,0,param_1 + 0x240,1,0,0);
      uVar5 = FUN_00372f0c(uVar2,0);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x23c) + 0xc),uVar5);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x23c) + 0xc) + 0x10) = 1;
      uVar2 = FUN_00372f0c(uVar2,1);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x240) + 0xc),uVar2);
      uVar2 = DAT_002ad1c8;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x240) + 0xc) + 0x10) = 1;
      FUN_003510b0(param_1,uVar2);
      *(undefined4 *)(param_1 + 4) = 0x30;
      uVar2 = DAT_002ad1cc;
      uVar6 = *(uint *)(iVar7 + 4);
      bVar8 = uVar6 == 0;
      if (bVar8) {
        uVar6 = (uint)*(ushort *)(iVar7 + 0xef8);
      }
      if (bVar8 && (uVar6 & 0x200) == 0) {
        if (3 < *(int *)(iVar7 + 0x14e8)) {
          *(undefined4 *)(param_1 + 0x1c4) = DAT_002ad1d0;
          uVar3 = DAT_002ad1e0;
          *(undefined4 *)(param_1 + 0x2c) = DAT_002ad1dc;
          *(undefined4 *)(param_1 + 0x1bc) = uVar3;
          *(undefined4 *)(param_1 + 0x244) = uVar2;
          return;
        }
        *(undefined4 *)(param_1 + 0x1c4) = DAT_002ad1d0;
        *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 0x12) = (short)DAT_002ad1d4;
        iVar7 = *(int *)(*(int *)(param_2 + 0xa98) + 0x28);
        *(short *)(iVar7 + 0x14) = *(short *)(iVar7 + 0x14) + -0x32;
        uVar1 = (undefined2)DAT_002ad1d8;
        *(undefined2 *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 0x22) = uVar1;
        *(undefined2 *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 0x32) = uVar1;
        goto LAB_002ad18c;
      }
      *(undefined4 *)(param_1 + 0x1c4) = DAT_002ad1cc;
      *(undefined4 *)(param_1 + 0x1bc) = uVar3;
    }
    else if (uVar6 == 3) {
      FUN_00372f38(param_1,param_2,param_1 + 0x238,3,0);
      FUN_003510b0(param_1,DAT_002ad018);
      FUN_003532e8(param_1,0);
      uVar2 = FUN_00353fd4(param_1,param_2,1);
      uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
      *(undefined4 *)(param_1 + 0x1a4) = uVar2;
      *(undefined4 *)(param_1 + 0x1bc) = uVar3;
      if (*(int *)(iVar7 + 4) != 0) {
        FUN_00374428(param_1);
      }
    }
    return;
  }
  uVar3 = FUN_00372f38(param_1,param_2,param_1 + 0x238,4,0);
  uVar3 = FUN_00372f0c(uVar3,2);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x238) + 0xc),uVar3);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x238) + 0xc) + 0x10) = 1;
  FUN_003510b0(param_1,DAT_002ad018);
  FUN_00350eb8(param_2,param_1 + 0x1c8);
  FUN_00350d48(param_2,param_1 + 0x1c8,param_1,DAT_002ad024,param_1 + 0x1e8);
  if (*(int *)(iVar7 + 4) == 0) {
    iVar4 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c0));
    if (iVar4 == 0) {
      uVar6 = *(uint *)(iVar7 + 4);
      bVar8 = uVar6 != 0;
      if (!bVar8) {
        uVar6 = (uint)*(ushort *)(iVar7 + 0xef8);
      }
      if ((bVar8 || (uVar6 & 0x200) != 0) || (*(int *)(iVar7 + 0x14e8) < 4)) goto LAB_002ad03c;
      *(undefined2 *)(param_1 + 0x1c0) = 0x1f;
      FUN_00375c10(param_2,0x1f);
    }
    uVar3 = DAT_002ad028;
    if ((*(ushort *)(iVar7 + 0xef8) & 0x200) == 0) {
      *(undefined4 *)(param_1 + 0x2c) = DAT_002ad028;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
    }
    uVar2 = DAT_002ad034;
    fVar10 = DAT_002ad030;
    fVar9 = *(float *)(param_1 + 0x30) - DAT_002ad02c;
    *(float *)(param_1 + 0x30) = fVar9;
    *(float *)(param_1 + 0x10) = fVar9 + fVar10;
    *(undefined4 *)(param_1 + 0x1bc) = uVar2;
    *(float *)(*(int *)(param_1 + 0x1e4) + 0x44) =
         *(float *)(*(int *)(param_1 + 0x1e4) + 0x34) * DAT_002ad038;
    iVar7 = *(int *)(param_1 + 0x1e4);
    fVar10 = *(float *)(param_1 + 0x30) + fVar10;
  }
  else {
LAB_002ad03c:
    *(undefined4 *)(param_1 + 0x1bc) = DAT_002ad1c0;
    *(undefined4 *)(*(int *)(param_1 + 0x1e4) + 0x44) =
         *(undefined4 *)(*(int *)(param_1 + 0x1e4) + 0x34);
    iVar7 = *(int *)(param_1 + 0x1e4);
    fVar10 = *(float *)(param_1 + 0x30);
  }
  *(float *)(iVar7 + 0x40) = fVar10;
  *(undefined4 *)(*(int *)(param_1 + 0x1e4) + 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(*(int *)(param_1 + 0x1e4) + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  return;
}
