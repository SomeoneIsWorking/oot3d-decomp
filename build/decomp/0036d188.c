// OoT3D decomp @ 0036d188  name=FUN_0036d188  size=188

undefined4 FUN_0036d188(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  if ((*(char *)(param_1 + 0xe0f) != '\0') || (*(short *)(param_1 + 0x1c) == 0)) {
    iVar2 = FUN_0035b950(DAT_0036d248,param_2,param_1,DAT_0036d244,0x4000,
                         (int)*(short *)(param_1 + 0xbe));
    if ((iVar2 != 0) && ((*(uint *)(DAT_0036d24c + param_2) & 1) != 0)) {
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,6);
      uVar1 = DAT_0036d250;
      *(undefined1 *)(param_1 + 0xe12) = 0;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined1 *)(param_1 + 0xe0c) = 9;
      FUN_00375c08(DAT_0036d258,uVar1,uVar3,DAT_0036d254,param_1 + 0x1a4,6,3);
      *(undefined4 *)(param_1 + 0xe1c) = DAT_0036d25c;
      return 1;
    }
  }
  return 0;
}
