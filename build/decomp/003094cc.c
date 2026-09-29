// OoT3D decomp @ 003094cc  name=FUN_003094cc  size=56

void FUN_003094cc(float param_1,int param_2,int param_3)

{
  int iVar1;

  iVar1 = param_2 + param_3 * 4;
  if (param_1 < DAT_00309504) {
    param_1 = DAT_00309504;
  }
  if (*(float *)(iVar1 + 0x48) != param_1) {
    *(float *)(iVar1 + 0x48) = param_1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 8;
  }
  return;
}
