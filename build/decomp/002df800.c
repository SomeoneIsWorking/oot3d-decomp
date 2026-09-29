// OoT3D decomp @ 002df800  name=FUN_002df800  size=72

void FUN_002df800(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_003445d4(param_1 + 4);
  FUN_003445d4(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 900) = 0;
  uVar1 = DAT_002df848;
  *(undefined4 *)(param_1 + 0x388) = 0;
  uVar2 = DAT_002df84c;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)(param_1 + 0x374) = uVar1;
  *(undefined4 *)(param_1 + 0x378) = uVar2;
  *(undefined4 *)(param_1 + 0x37c) = uVar1;
  *(undefined4 *)(param_1 + 0x380) = uVar2;
  *(undefined1 *)(param_1 + 0x390) = 0;
  return;
}
