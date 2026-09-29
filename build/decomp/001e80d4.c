// OoT3D decomp @ 001e80d4  name=FUN_001e80d4  size=256

void FUN_001e80d4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  if (((*(uint *)(DAT_001e81d4 + 4) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_001e81d8), puVar3 = DAT_001e81e8, uVar2 = DAT_001e81e4,
     uVar1 = DAT_001e81e0, iVar4 != 0)) {
    *DAT_001e81e8 = DAT_001e81dc;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
  }
  FUN_003731e0(param_1 + 0x1a4);
  *(short *)(param_1 + 0x9e6) = *(short *)(param_1 + 0x9e6) + -1;
  FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x36),0x500);
  if (*(short *)(param_1 + 0x9e6) == 0) {
    if (*(char *)(param_1 + 0x9e0) != '\0') {
      return;
    }
    *(undefined1 *)(DAT_001e81ec + param_2) = 4;
  }
  if (*(short *)(param_1 + 0x9e6) < 0) {
    FUN_003705a0(DAT_001e81f4,DAT_001e81f0,param_1 + 0x6c);
  }
  if (*(short *)(param_1 + 0x9e6) == -0x69) {
    if (*(char *)(param_1 + 0x9e0) != '\x01') {
      return;
    }
    FUN_00375c44(param_2,DAT_001e81e8,0x28,DAT_001e81f8);
  }
  if (-0xb5 < *(short *)(param_1 + 0x9e6)) {
    return;
  }
  FUN_00374428(param_1);
  return;
}
