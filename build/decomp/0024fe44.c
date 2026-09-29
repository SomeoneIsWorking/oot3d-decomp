// OoT3D decomp @ 0024fe44  name=FUN_0024fe44  size=232

void FUN_0024fe44(int param_1)

{
  short sVar1;
  undefined4 uVar2;

  sVar1 = *(short *)(param_1 + 0x84c) + -1;
  *(short *)(param_1 + 0x84c) = sVar1;
  uVar2 = uRam0024ff2c;
  if (sVar1 == 0) {
    *(undefined1 *)(param_1 + 0x841) = 0;
    FUN_00374a58(uVar2,param_1 + 0x1a4,2);
    uVar2 = uRam0024ff30;
    if (*piRam0024ff34 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x934) + 8) = uRam0024ff30;
      FUN_003586ec();
    }
    *(undefined1 *)(param_1 + 0x84b) = 2;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined4 *)(param_1 + 0x924) = uVar2;
    *(undefined2 *)(param_1 + 0x84e) = 0;
    *(undefined1 *)(param_1 + 0x840) = 0;
    uVar2 = uRam0024ff38;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_00375bcc(param_1,uVar2);
    *(undefined4 *)(param_1 + 0x844) = uRam0024ff3c;
  }
  else {
    FUN_00375a18(param_1 + 0xbe,(int)(short)(*(short *)(param_1 + 0x92) + -0x8000),1,uRam0024ff40,0)
    ;
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  FUN_0036b4ec(param_1 + 0x1a4,0);
  return;
}
