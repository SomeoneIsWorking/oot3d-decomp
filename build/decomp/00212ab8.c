// OoT3D decomp @ 00212ab8  name=FUN_00212ab8  size=700

void FUN_00212ab8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;

  if ((*(char *)(param_1 + 3) != '\n') || (iVar4 = FUN_0036e864(param_2,0x1e), iVar4 == 0)) {
    FUN_003510b0(param_1,DAT_00212d74);
    FUN_003532e8(param_1,1);
    uVar5 = FUN_00372f38(param_1,param_2,param_1 + 0x1f8,0,0);
    uVar5 = FUN_00372f0c(uVar5,0);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1f8) + 0xc),uVar5);
    uVar5 = DAT_00212d78;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0xc) + 0x10) = 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0xc) + 0xc) = uVar5;
    uVar5 = FUN_00353fd4(param_1,param_2,0);
    uVar5 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar5);
    *(undefined4 *)(param_1 + 0x1a4) = uVar5;
    *(byte *)(param_1 + 500) = *(byte *)(param_1 + 500) | 1;
    iVar4 = DAT_00212d80;
    uVar5 = DAT_00212d7c;
    if (*(ushort *)(param_1 + 0x1c) >> 0xc < 2) {
      *(undefined4 *)(param_1 + 0x208) = DAT_00212d7c;
      *(undefined4 *)(param_1 + 0x204) = uVar5;
      *(undefined4 *)(param_1 + 0x200) = uVar5;
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      uVar3 = (ushort)*(byte *)(iVar4 + 0xe);
      bVar6 = uVar3 == 1;
      if (bVar6) {
        uVar3 = *(ushort *)(param_2 + 0x104);
      }
      bVar7 = bVar6 && uVar3 == 2;
      if (bVar6 && uVar3 == 2) {
        bVar7 = *(char *)(param_1 + 3) == '\x0e';
      }
      if ((bVar7) && ((int)*(float *)(param_1 + 0xc) == -0x431)) {
        *(undefined4 *)(param_1 + 0x28) = DAT_00212d84;
        *(undefined4 *)(param_1 + 0x2c) = DAT_00212d88;
        *(undefined4 *)(param_1 + 0x30) = DAT_00212d8c;
        uVar5 = DAT_00212d90;
        *(undefined4 *)(param_1 + 0x1fc) = 1;
        *(undefined4 *)(param_1 + 0x208) = uVar5;
        *(undefined4 *)(param_1 + 0x200) = uVar5;
      }
      uVar1 = DAT_00212d98;
      uVar5 = DAT_00212d94;
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x1cc) = uVar5;
      *(undefined4 *)(param_1 + 0x1c8) = uVar1;
      if (*(short *)(param_1 + 0xbc) != 0) {
        fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbc),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar8 = fVar8 * DAT_00212d9c;
        *(float *)(param_1 + 0x1f0) = fVar8;
        *(float *)(param_1 + 0x1d8) = fVar8;
      }
      *(undefined2 *)(param_1 + 0x1ee) = 0;
      if (*(short *)(param_1 + 0xbe) != 0) {
        *(short *)(param_1 + 0x1ee) = *(short *)(param_1 + 0xbe);
      }
      iVar4 = (int)*(short *)(param_1 + 0xc0);
      if (iVar4 != 0) {
        fVar8 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = fVar9 * DAT_00212da8 * DAT_00212da4;
        *(float *)(param_1 + 0x54) = fVar8 * DAT_00212da0 * DAT_00212da4;
        *(float *)(param_1 + 0x5c) = fVar9;
      }
      *(undefined2 *)(param_1 + 0x34) = 0;
      *(undefined2 *)(param_1 + 0x36) = 0;
      *(undefined2 *)(param_1 + 0x38) = 0;
      *(undefined2 *)(param_1 + 0xbc) = 0;
      *(undefined2 *)(param_1 + 0xbe) = 0;
      *(undefined2 *)(param_1 + 0xc0) = 0;
      uVar1 = DAT_00212db0;
      uVar5 = DAT_00212dac;
      if (*(ushort *)(param_1 + 0x1c) >> 0xc == 0) {
        *(undefined4 *)(param_1 + 0x1d8) = DAT_00212dac;
        *(undefined4 *)(param_1 + 0x1d4) = uVar5;
        *(undefined4 *)(param_1 + 0x1bc) = uVar1;
      }
      else if (*(ushort *)(param_1 + 0x1c) >> 0xc == 1) {
        iVar4 = FUN_0036bcb4(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
        uVar2 = DAT_00212dbc;
        uVar1 = DAT_00212db8;
        uVar5 = DAT_00212db4;
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1d8);
          *(undefined4 *)(param_1 + 0x1bc) = uVar2;
        }
        else {
          *(undefined4 *)(param_1 + 0x1d8) = DAT_00212db4;
          *(undefined4 *)(param_1 + 0x1d4) = uVar5;
          *(undefined4 *)(param_1 + 0x1bc) = uVar1;
        }
      }
      uVar5 = DAT_00212dc0;
      if (*(int *)(param_1 + 0x1fc) != 0) {
        *(undefined4 *)(param_1 + 0x54) = DAT_00212dc0;
        *(undefined4 *)(param_1 + 0x5c) = uVar5;
      }
      return;
    }
  }
  FUN_00374428(param_1);
  return;
}
