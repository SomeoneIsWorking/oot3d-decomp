// OoT3D decomp @ 0012aad0  name=FUN_0012aad0  size=172

void FUN_0012aad0(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;

  if (0 < *(short *)(param_1 + 0x1be)) {
    *(short *)(param_1 + 0x1be) = *(short *)(param_1 + 0x1be) + -1;
  }
  if (0 < *(short *)(param_1 + 0x1c2)) {
    *(short *)(param_1 + 0x1c2) = *(short *)(param_1 + 0x1c2) + -1;
  }
  iVar2 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  if (iVar2 != 0) {
    *(undefined2 *)(param_1 + 0x1be) = 0x40;
  }
  if ((*(ushort *)(param_1 + 0x1bc) & 2) == 0) {
    if (*(short *)(param_1 + 0x1be) == 0) {
      return;
    }
    FUN_0036d15c(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
    uVar1 = *(ushort *)(param_1 + 0x1bc) | 2;
  }
  else {
    if (*(short *)(param_1 + 0x1be) != 0) {
      return;
    }
    FUN_0036b940(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
    uVar1 = *(ushort *)(param_1 + 0x1bc) & 0xfffd;
  }
  *(ushort *)(param_1 + 0x1bc) = uVar1;
  return;
}
