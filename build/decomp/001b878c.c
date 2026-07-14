// OoT3D decomp @ 001b878c  name=FUN_001b878c  size=108

void FUN_001b878c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1cc));
  FUN_003589cc(uVar1,4);
  iVar2 = 1 - (uint)*(ushort *)(DAT_001b87f8 + param_1);
  if (1 < *(ushort *)(DAT_001b87f8 + param_1)) {
    iVar2 = 0;
  }
  FUN_00358964(uVar1,4,DAT_001b87fc + iVar2 * 0x10);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001b8804,DAT_001b8800,param_1,0);
  return;
}

