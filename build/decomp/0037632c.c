// OoT3D decomp @ 0037632c  name=FUN_0037632c  size=20

void FUN_0037632c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x50) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = uVar2;
  return;
}

