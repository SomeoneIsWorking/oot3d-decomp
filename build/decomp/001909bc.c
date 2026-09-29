// OoT3D decomp @ 001909bc  name=FUN_001909bc  size=92

void FUN_001909bc(undefined4 param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003478d0(param_2);
  if (iVar1 != 0) {
    FUN_0022aa88(param_2,param_1);
    *(undefined2 *)(param_2 + 0x116) =
         *(undefined2 *)(DAT_00190a18 + *(short *)(param_2 + 0x1c) * 0x30 + 0xe);
    return;
  }
  *(undefined2 *)(param_2 + 0x1bc) = 0;
  *(undefined4 *)(param_2 + 0x140) = DAT_00190a1c;
  return;
}
