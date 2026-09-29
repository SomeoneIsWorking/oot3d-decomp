// OoT3D decomp @ 00333700  name=FUN_00333700  size=368

void FUN_00333700(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar1 = ObjectBankArchive_00358ef8(param_3,1);
  uVar1 = (**(code **)(*param_2 + 8))(param_2,uVar1,1);
  *(undefined4 *)(param_1 + 0x2a8) = uVar1;
  uVar1 = ObjectBankArchive_00358ef8(param_3,0);
  uVar1 = (**(code **)(*param_2 + 8))(param_2,uVar1,1);
  *(undefined4 *)(param_1 + 0x2ac) = uVar1;
  FUN_0047d548(*(undefined4 *)(param_1 + 0x2a8),2);
  FUN_0047d548(*(undefined4 *)(param_1 + 0x2ac),2);
  **(undefined4 **)(param_1 + 0x2c0) = *(undefined4 *)(*(int *)(param_1 + 0x2a8) + 0x10);
  uVar1 = FUN_00372f0c(param_3,4);
  FUN_00372d94(*(undefined4 *)(param_1 + 0x2c0),uVar1);
  uVar1 = DAT_00333870;
  *(undefined1 *)(*(int *)(param_1 + 0x2c0) + 0x10) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x2c0) + 0xc) = uVar1;
  **(undefined4 **)(param_1 + 0x2c4) = *(undefined4 *)(*(int *)(param_1 + 0x2ac) + 0x10);
  uVar2 = FUN_00372f0c(param_3,*(undefined1 *)(param_1 + 0x289));
  FUN_00372d94(*(undefined4 *)(param_1 + 0x2c4),uVar2);
  *(undefined1 *)(*(int *)(param_1 + 0x2c4) + 0x10) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x2c4) + 0xc) = uVar1;
  **(undefined4 **)(param_1 + 0x2c8) = *(undefined4 *)(*(int *)(param_1 + 0x2a8) + 0x10);
  uVar1 = FUN_00372f0c(param_3,3);
  FUN_00372d94(*(undefined4 *)(param_1 + 0x2c8),uVar1);
  *(undefined1 *)(*(int *)(param_1 + 0x2c8) + 0x10) = 0;
  uVar1 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x289),(byte)(in_fpscr >> 0x15) & 3);
  if (*DAT_00333874 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x2c8) + 8) = uVar1;
    FUN_003586ec();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2c8) + 0xc) = DAT_00333878;
  return;
}
