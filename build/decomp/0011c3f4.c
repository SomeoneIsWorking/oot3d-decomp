// OoT3D decomp @ 0011c3f4  name=FUN_0011c3f4  size=188

void FUN_0011c3f4(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;

  FUN_003731e0(param_1 + 0x1a4);
  iVar2 = FUN_003736fc(DAT_0011c4b4,DAT_0011c4b0,param_1 + 0x1a4);
  if (iVar2 != 0) {
    FUN_00375bcc(param_1,DAT_0011c4b8);
    if (*(short *)(param_1 + 0x920) != 0) {
      *(short *)(param_1 + 0x920) = *(short *)(param_1 + 0x920) + -1;
    }
  }
  FUN_0036f364(param_1,param_2);
  sVar1 = *(short *)(param_1 + 0x920);
  if (sVar1 < 0xf) {
    if (sVar1 != 0xe) {
      if (sVar1 == 0) {
        *(undefined1 *)(param_1 + 0x225) = 0;
        FUN_0036f32c(param_1);
        *(undefined2 *)(param_1 + 0x920) = 0x23;
      }
      return;
    }
    *(undefined4 *)(param_1 + 0x6c) = DAT_0011c4c0;
    FUN_0036f4e4(DAT_0011c4c4,param_1 + 0x1a4);
    return;
  }
  FUN_00370378(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),DAT_0011c4bc);
  return;
}
