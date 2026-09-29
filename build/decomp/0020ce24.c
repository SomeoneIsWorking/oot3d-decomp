// OoT3D decomp @ 0020ce24  name=FUN_0020ce24  size=132

uint FUN_0020ce24(int param_1,int param_2)

{
  uint uVar1;
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  FUN_0036c174(auStack_40,auStack_40,param_2 + 0x2fc);
  FUN_00369014(DAT_0020cea8,auStack_40,1);
  uVar1 = (uint)*(ushort *)(param_1 + 0x2f0);
  if (0x4a < uVar1) {
    uVar1 = uVar1 - 0x32;
  }
  if (param_1 != -0x318) {
    *(undefined1 *)(*(int *)(param_1 + 0x364) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x364),auStack_40);
    uVar1 = FUN_00372170(*(undefined4 *)(param_1 + 0x364),0);
  }
  return uVar1;
}
