// OoT3D decomp @ 00274648  name=FUN_00274648  size=156

void FUN_00274648(int param_1,int param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x1a4);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == *(short *)(param_1 + 0x652)) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_003725e0(param_2);
    FUN_0036ae48(*(undefined4 *)(param_2 + *(short *)(DAT_002746e4 + param_2) * 4 + 0xa54));
    *(undefined2 *)(param_1 + 0x656) = 1;
    if (*(short *)(*DAT_002746e8 + 0x12d8) != 0) {
      *(undefined2 *)(*DAT_002746e8 + 0x12d8) = 0;
    }
    FUN_0036e980(param_2,0,7);
    *(undefined4 *)(param_1 + 0x638) = DAT_002746ec;
  }
  return;
}
