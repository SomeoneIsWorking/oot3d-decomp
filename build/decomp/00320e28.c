// OoT3D decomp @ 00320e28  name=FUN_00320e28  size=76

void FUN_00320e28(int param_1)

{
  undefined4 uVar1;

  *(undefined4 *)(param_1 + 0xa50) = 0;
  FUN_00374a58(DAT_00320e78,param_1 + 0x1a4,*DAT_00320e74);
  uVar1 = DAT_00320e7c;
  *(undefined4 *)(param_1 + 0xa48) = 0x14;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xa78) = uVar1;
  *(undefined4 *)(param_1 + 0xa74) = uVar1;
  *(undefined4 *)(param_1 + 0xa54) = DAT_00320e80;
  return;
}
