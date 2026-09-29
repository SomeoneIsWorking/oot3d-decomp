// OoT3D decomp @ 0017963c  name=FUN_0017963c  size=120

void FUN_0017963c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = DAT_001796b4;
  if (*(short *)(*(int *)(param_1 + 0x1a8) + 0x38c) == 0) {
    if (*(short *)(*(int *)(param_1 + 0x1ac) + 0x38c) != 0) {
      *(undefined2 *)(param_1 + 0x1bc) = 1;
      *(undefined2 *)(param_1 + 0x1be) = 0x78;
      FUN_0034bf44(param_2,*(ushort *)(param_1 + 0x1b4) & 0x1f);
      *(undefined4 *)(param_1 + 0x1a4) = uVar1;
      return;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x1be) = 0x78;
    FUN_0034bf44(param_2,*(ushort *)(param_1 + 0x1b6) & 0x1f);
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  }
  return;
}
