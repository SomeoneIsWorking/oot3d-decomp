// OoT3D decomp @ 0029db38  name=FUN_0029db38  size=100

void FUN_0029db38(int param_1,int param_2)

{
  FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  if ((*(short *)(param_1 + 0x1c) == 0) && (*(int *)(DAT_0029db9c + 8) < DAT_0029dba0)) {
    *(ushort *)(DAT_0029dba4 + 0xf8) = *(ushort *)(DAT_0029dba4 + 0xf8) & 0xffdf;
  }
  FUN_00350f34(param_1,param_1 + 0x1c4,param_1 + 0x1c8,0);
  return;
}
