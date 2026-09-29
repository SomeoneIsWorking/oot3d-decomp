// OoT3D decomp @ 001e7fc8  name=FUN_001e7fc8  size=256

void FUN_001e7fc8(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;

  sVar1 = *(short *)(param_1 + 0x9e6) + -1;
  *(short *)(param_1 + 0x9e6) = sVar1;
  if (sVar1 == 0) {
    FUN_00375bcc(param_1,DAT_001e80c8);
    *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) & 0x7f;
  }
  if (*(short *)(param_1 + 0x9e6) < 1) {
    iVar2 = FUN_003731e0(param_1 + 0x1a4);
    if (iVar2 == 0) {
      uVar3 = VectorFloatToUnsigned
                        ((*(float *)(param_1 + 0x1e0) * DAT_001e80cc) / *(float *)(param_1 + 0x1ec),
                         3);
      *(char *)(param_1 + 0x9ed) = (char)uVar3;
    }
    else {
      *(undefined1 *)(param_1 + 0x9ed) = 0xff;
      *(uint *)(param_2 + 0x7f4c) = *(uint *)(param_2 + 0x7f4c) | 1 << *(sbyte *)(param_1 + 0x9e0);
    }
  }
  if (*(int *)(param_2 + 0x7f4c) == 0xf) {
    FUN_0036e734(param_1 + 0x1a4,0);
    *(undefined1 *)(param_1 + 0x9e4) = 8;
    *(undefined2 *)(param_1 + 0x9e6) = 0x30;
    FUN_003464b8(param_1,0x20,param_1 + 8);
    *(undefined4 *)(param_1 + 0x9dc) = DAT_001e80d0;
  }
  return;
}
