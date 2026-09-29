// OoT3D decomp @ 0025ec5c  name=FUN_0025ec5c  size=100

void FUN_0025ec5c(int param_1,int param_2)

{
  undefined1 auStack_3c [48];

  FUN_00372224(auStack_3c,param_1 + 0x148);
  if (*(int *)(param_1 + 0x1c4) != 0) {
    FUN_00331284(*(undefined4 *)(DAT_0025ecc0 + param_2),*(undefined4 *)(param_1 + 0x178));
    *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c4),auStack_3c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c4),0);
  }
  return;
}
