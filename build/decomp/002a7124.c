// OoT3D decomp @ 002a7124  name=FUN_002a7124  size=148

void FUN_002a7124(int param_1)

{
  short sVar1;
  int iVar2;

  sVar1 = *(short *)(param_1 + 0x92);
  if (DAT_002a71b8 <= *(int *)(param_1 + 0x1e0)) {
    FUN_00375a18(param_1 + 0xbe,(int)sVar1,1,DAT_002a71bc,0);
  }
  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar2 != 0) {
    FUN_00375bcc(param_1,DAT_002a71c0);
    *(short *)(param_1 + 0x36) = sVar1;
    *(undefined4 *)(param_1 + 0xa50) = 0xffffffff;
    FUN_0034eb00(param_1);
  }
  iVar2 = FUN_003736fc(DAT_002a71c8,DAT_002a71c4,param_1 + 0x1a4);
  if (iVar2 != 0) {
    *(undefined2 *)(DAT_002a71cc + param_1) = 0;
  }
  return;
}
