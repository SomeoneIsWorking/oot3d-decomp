// OoT3D decomp @ 001d67cc  name=FUN_001d67cc  size=200

void FUN_001d67cc(int param_1,int param_2)

{
  undefined4 uVar1;

  uVar1 = DAT_001d689c;
  *(short *)(param_1 + 0x200) = *(short *)(param_1 + 0x200) + 1;
  *(undefined2 *)(DAT_001d6898 + param_1) =
       *(undefined2 *)(DAT_001d6894 + *(short *)(param_1 + 0x1c) * 2);
  FUN_0037322c(uVar1,param_1);
  FUN_0037572c(DAT_001d68a0,param_1);
  FUN_003731e0(param_1 + 0x210);
  FUN_00376864(param_1);
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  if (*(char *)(param_1 + 0x204) != '\0') {
    FUN_00376340(DAT_001d68a4,DAT_001d68a4,DAT_001d68a4,param_2,param_1,4);
  }
  if (*(char *)(param_1 + 0x203) != '\0') {
    FUN_0037632c(param_1,param_1 + 0x1a8);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
    return;
  }
  return;
}
