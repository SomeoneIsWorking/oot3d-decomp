// OoT3D decomp @ 00220da4  name=FUN_00220da4  size=124

void FUN_00220da4(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x2f6) & 2) != 0) {
    FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
    *(byte *)(param_1 + 0x2f6) = *(byte *)(param_1 + 0x2f6) & 0xfd;
  }
  if ((*(byte *)(param_1 + 0x2f6) & 1) != 0) {
    FUN_0034f6e8(param_2,param_1 + 0x1bc);
    *(byte *)(param_1 + 0x2f6) = *(byte *)(param_1 + 0x2f6) & 0xfe;
  }
  FUN_00350f34(param_1,param_1 + 0x300,param_1 + 0x304,0);
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  return;
}
