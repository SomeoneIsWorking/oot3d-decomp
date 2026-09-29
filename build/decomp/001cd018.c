// OoT3D decomp @ 001cd018  name=FUN_001cd018  size=128

void FUN_001cd018(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(DAT_001cd098 + param_2);
  FUN_0036e734(param_1 + 0x1a4,2);
  *(byte *)(param_1 + 0x949) = *(byte *)(param_1 + 0x949) | 1;
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_1 + 0x98);
  FUN_0036df4c(param_1 + 8,iVar1 + 0x28);
  iVar1 = DAT_001cd09c;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  if (*(int *)(param_1 + 0x8f4) != iVar1) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined2 *)(param_1 + 0x8fa) = 900;
    *(undefined1 *)(param_1 + 0x8f8) = 0x30;
  }
  *(undefined4 *)(param_1 + 0x8f4) = DAT_001cd0a0;
  return;
}
