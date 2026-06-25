// OoT3D decomp @ 003328ec  name=FUN_003328ec  size=60

undefined4 FUN_003328ec(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00332928;
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) & 0xf9;
  *(undefined4 *)(param_2 + 4) = 0;
  *(byte *)(param_2 + 0x2d) = *(byte *)(param_2 + 0x2d) & 0xbd;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x7c) = uVar1;
  return 1;
}

