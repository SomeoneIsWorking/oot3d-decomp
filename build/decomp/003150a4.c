// OoT3D decomp @ 003150a4  name=FUN_003150a4  size=80

void FUN_003150a4(int param_1)

{
  undefined4 uVar1;

  FUN_00373d40(param_1 + 0x1a4,0);
  FUN_00373d40(param_1 + 0x228,1);
  FUN_00373d40(param_1 + 0x2ac,3);
  FUN_00373d40(param_1 + 0x330,2);
  uVar1 = DAT_003150f8;
  *(undefined4 *)(param_1 + 0x880) = DAT_003150f4;
  *(undefined4 *)(param_1 + 0x914) = uVar1;
  return;
}
