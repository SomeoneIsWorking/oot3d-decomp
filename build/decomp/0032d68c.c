// OoT3D decomp @ 0032d68c  name=FUN_0032d68c  size=116

void FUN_0032d68c(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint in_fpscr;

  puVar3 = (undefined4 *)(*(int *)(param_2 + 0x1c) + param_1 * 0x50 + 0x38);
  uVar2 = param_3[1];
  uVar4 = param_3[2];
  *puVar3 = *param_3;
  puVar3[1] = uVar2;
  puVar3[2] = uVar4;
  iVar1 = *(int *)(param_2 + 0x1c);
  uVar2 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 * 0x50 + 0x34 + iVar1) *
                                               *(float *)(iVar1 + param_1 * 0x50 + 0x48)),
                              (byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 * 0x50 + 0x44 + iVar1) = uVar2;
  return;
}
