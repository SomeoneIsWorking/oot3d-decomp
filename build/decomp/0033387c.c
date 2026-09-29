// OoT3D decomp @ 0033387c  name=FUN_0033387c  size=156

void FUN_0033387c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;

  uVar2 = (uint)*(byte *)(param_1 + 0x219);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar2 * 0x34 + 0xc)
  ;
  *(undefined4 *)(param_1 + 0x20c) =
       *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar2 * 0x34 + 0x1c);
  *(undefined4 *)(param_1 + 0x210) =
       *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar2 * 0x34 + 0x2c);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar2 * 0x34 + 0xc)
  ;
  *(undefined4 *)(param_1 + 0x200) =
       *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar2 * 0x34 + 0x1c);
  *(undefined4 *)(param_1 + 0x204) =
       *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar2 * 0x34 + 0x2c);
  uVar1 = DAT_00333918;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar1,param_2,param_1,param_1 + 0x1a4);
  return;
}
