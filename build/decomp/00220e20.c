// OoT3D decomp @ 00220e20  name=FUN_00220e20  size=360

void FUN_00220e20(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;

  FUN_003510b0(param_1,DAT_00221050);
  *(char *)(param_1 + 0x1c1) = (char)((ushort)*(undefined2 *)(param_1 + 0x1c) >> 8);
  uVar4 = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(ushort *)(param_1 + 0x1c) = uVar4;
  if (uVar4 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  FUN_00353dd0(param_2,param_1 + 0x1c4);
  FUN_00353d24(param_2,param_1 + 0x1c4,param_1,DAT_00221060);
  FUN_0037632c(param_1,param_1 + 0x1c4);
  FUN_003532e8(param_1,0);
  uVar1 = DAT_00221064;
  if (*(short *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x100) = DAT_00221064;
    *(undefined4 *)(param_1 + 0x104) = uVar1;
    *(undefined4 *)(param_1 + 0xfc) = DAT_00221068;
LAB_00220fb0:
    uVar3 = FUN_00363c10(param_2 + 0x3a58,0x69);
    *(undefined1 *)(param_1 + 0x1c0) = uVar3;
  }
  else {
    if (*(short *)(param_1 + 0x1c) != 2) goto LAB_00220fb0;
    uVar3 = FUN_00363c10(param_2 + 0x3a58,0x8d);
    *(undefined1 *)(param_1 + 0x1c0) = uVar3;
  }
  if (*(char *)(param_1 + 0x1c0) < '\0') {
LAB_00220ffc:
    FUN_00374428(param_1);
  }
  else {
    if (*(short *)(param_1 + 0x1c) == 3) goto LAB_00221040;
    iVar5 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x1c1));
    fVar2 = DAT_00221070;
    if (iVar5 != 0) {
      if (*(short *)(param_1 + 0x1c) == 0) {
        *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - DAT_0022106c;
        *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar2;
        *(undefined2 *)(param_1 + 0xbc) = 0xc000;
        goto LAB_00221040;
      }
      goto LAB_00220ffc;
    }
  }
  if (*(short *)(param_1 + 0x1c) == 2) {
    *(undefined1 *)(param_1 + 0x19b) = 2;
  }
LAB_00221040:
  *(undefined4 *)(param_1 + 0x1bc) = DAT_00221074;
  return;
}
