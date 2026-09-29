// OoT3D decomp @ 00165978  name=FUN_00165978  size=444

void FUN_00165978(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;

  FUN_00372f38(param_1,param_2,param_1 + 0xd7c,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,1,param_1 + 0x228,param_1 + 0x770,0x1a);
  FUN_0035c358(param_1 + 0xd80,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  FUN_00372d4c(DAT_00165b34,DAT_00165b34,param_1 + 0xbc,0);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xcbc,param_1,DAT_00165b38);
  FUN_00350318(param_1 + 0xa0,0,DAT_00165b3c);
  FUN_0037572c(DAT_00165b40,param_1);
  iVar2 = DAT_00165b44;
  *(undefined1 *)(param_1 + 0x1f) = 3;
  *(undefined2 *)(iVar2 + param_1) = 0;
  FUN_003717ac(param_1 + 0x1a4,DAT_00165b48,0);
  if (((*(ushort *)(DAT_00165b4c + 0xf2) & 8) != 0) &&
     ((~(int)*(short *)(param_1 + 0x1c) & 0xff00U) != 0)) {
    pbVar1 = (byte *)(*(int *)(DAT_00165b50 + param_2) +
                     (((int)*(short *)(param_1 + 0x1c) & 0xff00U) >> 5));
    iVar2 = *(int *)(pbVar1 + 4) + (uint)*pbVar1 * 6;
    uVar3 = VectorSignedToFloat((int)*(short *)(iVar2 + -6),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    uVar3 = VectorSignedToFloat((int)*(short *)(iVar2 + -4),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    uVar3 = VectorSignedToFloat((int)*(short *)(iVar2 + -2),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  uVar3 = DAT_00165b58;
  if ((*(int *)(DAT_00165b54 + 4) == 0) &&
     (uVar3 = DAT_00165b64, (*(ushort *)(DAT_00165b5c + 0x36) & 0x100) == 0)) {
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0xef,0,0,0,
                 DAT_00165b60);
    uVar3 = DAT_00165b64;
  }
  *(undefined4 *)(param_1 + 0xcb8) = uVar3;
  return;
}
