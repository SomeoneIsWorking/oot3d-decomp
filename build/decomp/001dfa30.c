// OoT3D decomp @ 001dfa30  name=FUN_001dfa30  size=236

void FUN_001dfa30(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;

  if (*(int *)(param_1 + 0x22c) == 8) {
    *(undefined1 *)(param_1 + 0x27d) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x27d) = 0;
  }
  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376864(param_1);
  uVar2 = DAT_001dfb20;
  FUN_00376340(DAT_001dfb20,DAT_001dfb20,DAT_001dfb20,param_2,param_1,4);
  iVar3 = FUN_00370734(param_1 + 0x1fc);
  if (iVar3 != 0) {
    FUN_003428d0(uVar2,param_1 + 0x1fc);
  }
  (**(code **)(param_1 + 0x29c))(param_1,param_2);
  if ((*(short *)(param_1 + 0x29a) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x29a) + -1, *(short *)(param_1 + 0x29a) = sVar1, sVar1 != 0)) {
    *(short *)(param_1 + 0x298) = *(short *)(param_1 + 0x29a);
    if (2 < *(short *)(param_1 + 0x29a)) {
      *(undefined2 *)(param_1 + 0x298) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}
