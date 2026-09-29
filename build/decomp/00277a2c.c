// OoT3D decomp @ 00277a2c  name=FUN_00277a2c  size=536

void FUN_00277a2c(int param_1,int param_2)

{
  undefined2 uVar1;
  float fVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  float fVar10;

  iVar5 = *(int *)(DAT_00277c44 + param_2);
  FUN_003510b0(param_1,DAT_00277c48);
  FUN_00353dd0(param_2,param_1 + 0x1ac);
  FUN_00353d24(param_2,param_1 + 0x1ac,param_1,DAT_00277c4c);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(char *)(param_1 + 0x1a8) = (char)((ushort)*(undefined2 *)(param_1 + 0x1c) >> 8);
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  uVar4 = FUN_00372f38(param_1,param_2,param_1 + 0x204,6);
  uVar4 = FUN_00372f0c(uVar4,3);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x204) + 0xc),uVar4);
  uVar4 = DAT_00277c50;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x204) + 0xc) + 0x10) = 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x204) + 0xc) + 0xc) = uVar4;
  iVar6 = DAT_00277c5c;
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    FUN_0037572c(DAT_00277c80,param_1);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00277c84;
  }
  else {
    *(undefined4 *)(param_1 + 8) = DAT_00277c54;
    *(undefined4 *)(param_1 + 0x10) = DAT_00277c58;
    uVar4 = DAT_00277c60;
    uVar9 = *(uint *)(iVar5 + 0x30);
    if (iVar6 < (int)uVar9) {
      *(undefined1 *)(param_1 + 0x1a8) = 0xff;
      *(short *)(param_1 + 0xbe) = (short)uVar4;
      *(short *)(param_1 + 0x16) = (short)uVar4;
    }
    else {
      if (uVar9 <= DAT_00277c64) {
        *(undefined4 *)(param_1 + 0x140) = 0;
        *(undefined4 *)(param_1 + 0x13c) = 0;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
        return;
      }
      *(undefined1 *)(param_1 + 0x1a8) = 1;
      uVar1 = (undefined2)DAT_00277c68;
      *(undefined2 *)(param_1 + 0xbe) = uVar1;
      *(undefined2 *)(param_1 + 0x16) = uVar1;
    }
    iVar6 = (int)(short)(*(short *)(param_1 + 0xbe) + (ushort)*(byte *)(param_1 + 0x1a8) * -0x4000);
    fVar10 = (float)FUN_002cfca0(iVar6);
    fVar2 = DAT_00277c6c;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar10 * DAT_00277c6c;
    fVar10 = (float)FUN_00338f60(iVar6);
    uVar4 = DAT_00277c70;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar10 * fVar2;
    FUN_0037572c(uVar4,param_1);
    *(float *)(param_1 + 0x2c) =
         *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x58) * DAT_00277c74;
    *(undefined4 *)(param_1 + 0x1f0) = DAT_00277c78;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    *(undefined1 *)(param_1 + 0x1a9) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00277c7c;
  }
  uVar3 = (ushort)*(byte *)(DAT_00277c88 + 0xe);
  bVar7 = uVar3 == 1;
  if (bVar7) {
    uVar3 = *(ushort *)(param_2 + 0x104);
  }
  bVar8 = bVar7 && uVar3 == 4;
  if (bVar7 && uVar3 == 4) {
    bVar8 = *(char *)(param_1 + 3) == '\v';
  }
  if (bVar8) {
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * DAT_00277c8c;
  }
  return;
}
