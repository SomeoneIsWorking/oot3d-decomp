// OoT3D decomp @ 001e481c  name=FUN_001e481c  size=204

void FUN_001e481c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  *(undefined2 *)(param_1 + 0x510) = 0xb;
  *(undefined1 *)(param_1 + 0x50a) = 0;
  *(undefined1 *)(param_1 + 0x50b) = 0;
  *(undefined1 *)(param_1 + 0x50c) = 0;
  if (*(short *)(param_1 + 0x506) != 1) {
    if ((int)(*(uint *)(DAT_001e48f4 + 8) & *(uint *)(DAT_001e48f0 + 0xb8)) >>
        (uint)*(byte *)(DAT_001e48f8 + 2) < 1) {
      *(short *)(param_1 + 0x116) = (short)DAT_001e48fc;
      uVar1 = DAT_001e4900;
    }
    else {
      *(short *)(param_1 + 0x116) = (short)DAT_001e4904;
      uVar1 = DAT_001e48ec;
    }
    *(undefined4 *)(param_1 + 0x3f4) = uVar1;
    FUN_00367c7c(param_2,*(undefined2 *)(param_1 + 0x116),0);
    FUN_003717ac(param_1 + 0x1a4,DAT_001e48e8,0xe);
    *(undefined2 *)(param_1 + 0x554) = 1;
    return;
  }
  FUN_0036e980(param_2,param_1,7);
  FUN_003717ac(param_1 + 0x1a4,DAT_001e48e8,1);
  *(undefined4 *)(param_1 + 0x3f4) = DAT_001e48ec;
  return;
}
