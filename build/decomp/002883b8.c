// OoT3D decomp @ 002883b8  name=FUN_002883b8  size=80

void FUN_002883b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = DAT_0028840c;
  iVar1 = DAT_00288408;
  *(undefined4 *)(DAT_00288408 + *(short *)(param_1 + 0x1c) * 4) = 1;
  FUN_00374a58(uVar2,param_1 + 0x1a4,*(undefined4 *)(iVar1 + 0x20 + *(short *)(param_1 + 0x1c) * 4))
  ;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0x234) = 0x12;
  *(undefined4 *)(param_1 + 0x22c) = DAT_00288410;
  return;
}
